package main

import (
	"fmt"
	"time"
)

/**
 * 斐波那数列 递归测试
 * 40 420.6252ms
 * 45 4.6168056s
 */

func main() {
	var fib int = 45
	start := time.Now()
	var ret int = fibonacci(fib)
	end := time.Since(start)

	fmt.Printf("fib %v = %v\n", fib, ret)
	fmt.Println("time = ", end)
}

func fibonacci(num int) int {
	if num <= 2 {
		return 1
	}
	return fibonacci(num-1) + fibonacci(num-2)
}
