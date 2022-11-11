#include <Windows.h>
#include <stdio.h>

int main(int argc, char** argv)
{
    int a = 5;
    int b = 10;
    char message[200];
    sprintf_s(message, 200, "The result of the addition is: %d", a + b);
    MessageBoxA(NULL, message, "Reverse-engineering", MB_OK);
    return 0;
}
