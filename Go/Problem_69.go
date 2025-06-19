package main

import (
	"fmt"
)

func mySqrt(x int) int {
	if x < 0 {
		panic("Negetive numbers not allowed")
	} else {
		start := 0
		end := x
		ans := -1

		for start <= end {
			mid := (start + end) / 2
			square := mid * mid

			if square == x {
				return mid
			} else if square < x {
				ans = mid
				start = mid + 1
			} else {
				end = mid - 1
			}
		}

		return ans

	}
}

func main() {
	value := 101

	fmt.Printf("Root: %d\n", mySqrt(value))
}
