package main

import "fmt"

func main() {
	var (
		i, j, number_measureaments, expected_sum, sum, answer int
	)
	fmt.Scan(&number_measureaments)
	fmt.Scan(&expected_sum)
	v := make([]int, number_measureaments)
	for i = 0; i < number_measureaments; i++ {
		fmt.Scan(&v[i])
	}
	for i = 0; i < number_measureaments; i++ {
		sum = v[i]
		for j = i + 1; j < number_measureaments; j++ {
			sum += v[j]
			if sum == expected_sum {
				answer++
			} else if sum > expected_sum {
				break
			}
		}
		if v[i] == expected_sum {
			answer++
		}
	}
	fmt.Println(answer)
}
