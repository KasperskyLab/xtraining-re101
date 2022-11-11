type Elem = u8;
type Data = Vec<Elem>;

fn decrypt(mut data: Data, key: Elem) {
    for i in 0..data.len() {
        data[i] ^= key;
    }
    print!("{:?}", data);
}
fn main() {
    let data: Data = vec![0x00, 0x03, 0x02, 0x05, 0x04];
    let key: Elem = 0x31;
    decrypt(data, key);
}
