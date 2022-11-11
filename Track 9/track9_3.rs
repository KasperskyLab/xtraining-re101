use std::fmt::Result;

type Elem = u8;
type Data = Vec<Elem>;

#[derive(Debug)]
struct Core {
    data: Data,
    key: Elem,
}

trait Decrypt {
    fn decrypt(&mut self) -> Result;
}

impl Decrypt for Core {
    fn decrypt(&mut self) -> Result {
        self.data.iter_mut().for_each(|x| *x ^= self.key);
        print!("{:?}\n", self.data);
        Ok(())
    }
}

fn main() {
    let mut enc: Core = Core {
        data: vec![0x00, 0x03, 0x02, 0x05, 0x04],
        key: 0x31,
    };

    let _r: Result = enc.decrypt();
    let _r = match _r {
        Ok(_) => println!("Decrypted"),
        Err(_) => println!("Decryption error"),
    };
}
