use std::io;

fn main() {
	let mut a = String::new();

	io::stdin().read_line(&mut a).unwrap();

	let a = a.trim().parse::<f64>().unwrap();
	let mut int = (a * 100.0) as i32;

	println!("NOTAS:\n{} nota(s) de R$ 100.00", int / 10000);
	int %= 10000;
	println!("{} nota(s) de R$ 50.00", int / 5000);
	int %= 5000;
	println!("{} nota(s) de R$ 20.00", int / 2000);
	int %= 2000;
	println!("{} nota(s) de R$ 10.00", int / 1000);
	int %= 1000;
	println!("{} nota(s) de R$ 5.00", int / 500);
	int %= 500;
	println!("{} nota(s) de R$ 2.00", int / 200);
	int %= 200;

	println!("MOEDAS:\n{} moeda(s) de R$ 1.00", int / 100);
	int %= 100;
	println!("{} moeda(s) de R$ 0.50", int / 50);
	int %= 50;
	println!("{} moeda(s) de R$ 0.25", int / 25);
	int %= 25;
	println!("{} moeda(s) de R$ 0.10", int / 10);
	int %= 10;
	println!("{} moeda(s) de R$ 0.05", int / 5);
	int %= 5;
	println!("{} moeda(s) de R$ 0.01", int);
}