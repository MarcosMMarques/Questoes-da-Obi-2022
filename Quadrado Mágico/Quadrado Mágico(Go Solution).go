package main

import "fmt"

func main() {
	var proportion int
	fmt.Scanln(&proportion)
	var (
		i, j, x, column, line, sum, total int
		matrix                            [10][10]int
	)

	for i = 0; i < proportion; i++ {
		for j = 0; j < proportion; j++ {
			fmt.Scan(&matrix[i][j])
		}
	}
	for i = 0; i < proportion; i++ {
		x = 0
		total = 0
		for j = 0; j < proportion; j++ {
			if matrix[i][j] != 0 {
				total += matrix[i][j]
				x++
			}
			if x == proportion {
				break
			}
		}
	}
	for i = 0; i < proportion; i++ {
		for j = 0; j < proportion; j++ {
			if matrix[i][j] == 0 {
				line = i
				column = j
				for x = 0; x < proportion; x++ {
					sum += matrix[i][x]
				}
			}
		}
	}
	fmt.Println(total - sum)
	fmt.Println(line + 1)
	fmt.Println(column + 1)
}
