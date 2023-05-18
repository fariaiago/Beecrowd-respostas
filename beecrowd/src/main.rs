use std::io;

fn main() {
	let mut h1 = String::new();
	let mut m1 = String::new();
	let mut h2 = String::new();
	let mut m2 = String::new();

	io::stdin().read_line(&mut h1).unwrap();
	io::stdin().read_line(&mut m1).unwrap();
	io::stdin().read_line(&mut h2).unwrap();
	io::stdin().read_line(&mut m2).unwrap();

	let h1 = h1.trim().parse::<i32>().unwrap();
	let m1 = m1.trim().parse::<i32>().unwrap();
	let h2 = h2.trim().parse::<i32>().unwrap();
	let m2 = m2.trim().parse::<i32>().unwrap();

	let t1 = h1 * 60 + m1;
	let t2 = h2 * 60 + m2;
	
	println!("O JOGO DUROU {} HORA(S) E {} MINUTO(S)",
		if t1 == t2 { 24 } else { if t1 < t2 { (t2 - t1) / 60 } else { (1440 + t2 - t1) / 60 } },
		if t1 == t2 { 0 } else { if t1 < t2 { (t2 - t1) % 60 } else { (1440 + t2 - t1) % 60 } });
}