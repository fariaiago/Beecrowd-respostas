use std::io;

fn main() {
	loop {
		let mut line = String::new();
		match io::stdin().read_line(&mut line) {
			Ok(_) => {
				let mut inputs: Vec<i32> = line.split_whitespace().map(|x| x.parse().unwrap()).collect();
				inputs.sort();
				if inputs.clone().into_iter().nth(0).unwrap() <= 0 { break; }
				let mut sum = 0;
				for n in inputs.clone().into_iter().nth(0).unwrap()..=inputs.clone().into_iter().nth(1).unwrap() {
					sum += n;
					print!("{} ", n);
				}
				println!("Sum={}", sum);
			},
			_ => ()
		};
	}
}