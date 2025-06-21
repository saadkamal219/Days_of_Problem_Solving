package main

import (
	"fmt"
)

func isPalindrome(value int) bool {
	if value < 0 {
		return false
	}

	var original int = value
	var reversed int
	var remainder int = 0

	for value > 0 {
		remainder = value % 10
		reversed = reversed*10 + remainder
		value /= 10
	}

	if original == reversed {
		return true
	} else {
		return false
	}

}

func execute_problem9(palindrome int) {

	var buffer bool = isPalindrome(palindrome)

	if buffer == true {
		fmt.Printf("Palindrome\n")
	} else {
		fmt.Printf("Not Palindrome\n")
	}

}
