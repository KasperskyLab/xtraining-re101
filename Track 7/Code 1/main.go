package main

// Compile with disabled optimizations (-gcflags '-N -l')

import "fmt"

func main() {
   res := product(2, 3, 4)
   fmt.Println("Product = ", res)

   res, err := product_with_err(4, 5, 6)
   if err != nil {
      fmt.Println("Product = ", res)
   }
}

func product(a, b, c int) int {
   return a * b * c
}

func product_with_err(a, b, c int) (int, error) {
    return a * b * c, nil
}