use std::io;

fn main() {
	let mut a = String::new();
	let mut b = String::new();
	let mut c = String::new();
	let mut d = String::new();

	io::stdin().read_line(&mut a).unwrap();
	io::stdin().read_line(&mut b).unwrap();
	io::stdin().read_line(&mut c).unwrap();
	io::stdin().read_line(&mut d).unwrap();

	let a = a.trim().parse::<i32>().unwrap();
	let b = b.trim().parse::<i32>().unwrap();
	let c = c.trim().parse::<i32>().unwrap();
	let d = d.trim().parse::<i32>().unwrap();

	println!("DIFERENCA = {}", a * b - c * d);
}