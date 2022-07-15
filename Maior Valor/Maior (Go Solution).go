package main

import "fmt"

func toSum_digits(number int) int {
	digit_1 := number / 10000
	p := number % 10000
	digit_2 := p / 1000
	p = p % 1000
	digit_3 := p / 100
	p = p % 100
	digit_4 := p / 10
	p = p % 10
	digit_5 := p
	return digit_1 + digit_2 + digit_3 + digit_4 + digit_5
}
func main() {
	var (
		minimum_value, sum, maximum_value, i int
	)
	number := 0
	fmt.Scan(&minimum_value, &maximum_value, &sum)
	for i = minimum_value; i <= maximum_value; i++ {
		if toSum_digits(i) == sum {
			number = i
		}
	}
	if number != 0 {
		fmt.Println(number)
	} else {
		fmt.Println("-1")
	}
}
