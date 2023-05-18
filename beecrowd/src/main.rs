use std::io;

fn main() {
	let mut line = String::new();

	io::stdin().read_line(&mut line).unwrap();

	let inputs: Vec<i32> = line.split_whitespace().map(|x| x.parse().unwrap()).collect();

	let t1 = inputs[0] * 60 + inputs[1];
	let t2 = inputs[2] * 60 + inputs[3];

	let h = if t1 == t2 { 24 } else { if t1 < t2 { (t2 - t1) / 60 } else { (1440 + t2 - t1) / 60 } };
	let m = if t1 == t2 { 0 } else { if t1 < t2 { (t2 - t1) % 60 } else { (1440 + t2 - t1) % 60 } };
	
	println!("O JOGO DUROU {} HORA(S) E {} MINUTO(S)", h, m);
}