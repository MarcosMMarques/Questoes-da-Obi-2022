package main

import "fmt"

func main() {
	var (
		value_day, value_elevating, arrived, payment, day_missing int
	)
	fmt.Scan(&value_day, &value_elevating, &arrived)
	day_missing = 31 - (arrived - 1)
	if arrived >= 14 {
		value_elevating *= 14
	} else if arrived == 1 {
		value_elevating = 0
	} else {
		value_elevating *= arrived
	}
	payment = (value_day + value_elevating) * day_missing
	fmt.Println(payment)
}
