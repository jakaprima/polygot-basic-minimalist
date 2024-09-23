package main

import (
	"fmt"
	"math"
	"strings"
	"reflect"
	"sort"
)

func main() {
	// open terminal
	// go mod init example.com/hello
	// go run main.go
	fmt.Println("HELLO WORLD")

	// get type
	a := "string data"
	fmt.Println("TYPE = "+ reflect.TypeOf(a).String())

	// Operator +, -, *, /
    fmt.Println(2 + 2)  // 4
    fmt.Println(50 - 5 * 6)  // 20
    fmt.Println((50 - 5.0 * 6) / 4)  // 5.0 (Java and Python same result)
    fmt.Println(8 / 5.0)  // 1.6
    fmt.Println(17 / 3.0)  // 5.666666666666667 (float)
    fmt.Println(float64(17) / 3)  // 5.666666666666667 (float)
    fmt.Println(17 / 3)  // 5 (integer division)
    fmt.Println(17 % 3)  // 2 (modulus: remainder of 17 divided by 3)
    fmt.Println(math.Pow(2, 3))  // 8 (power: 2 * 2 * 2)

    // Execute and store result in variable '_'
    result := 17 / 3.0
    fmt.Printf("%.2f\n", result)  // 5.67 (round to 2 decimal places)

	// ---------------------------------------------------------------------- Operator +, *, and escaping quotes
	fmt.Println("spam eggs")  // 'spam eggs' single quotes
	fmt.Println("doesn't")     // "doesn't" escape single quotes

	b := "baris1\n baris2"  // new line
	fmt.Println(b)
	// baris1
	// baris2

	fmt.Println(`C:\\files\name`)  // print raw string and escape backslashes

	// String with different indentations
	fmt.Println(`bebas
	sdgasjdf
	asdf
		afsdf`)

	// Glued + repeat with * (like JavaScript behavior)
	repeated := strings.Repeat("jaka", 3) + "prima"
	fmt.Println(repeated)
	// jakajakajakaprima

	// Concatenation without operator (like JavaScript behavior)
	fmt.Println("jaka" + "prima")
	// jakaprima

	// Output string array data (like JavaScript behavior)
	str := "jako"
	fmt.Println(string(str[2]))          // k
	fmt.Println(string(str[len(str)-1])) // o
	fmt.Println(str[1:3])                // ak (string slice from index 1 to 3-1 = 2, takes 2 data)
	fmt.Println(str[:1] + str[3:])       // jo

	// Length
	fmt.Println(len(str)) // 4

	// Traverse
	c := "123456789"
	fmt.Println(everyNthChar(c, 2, 1))  // '2468' (every second character starting from index 1)
	fmt.Println(everyNthChar(c, 2, 0))  // '13579' (every second character starting from index 0)
	fmt.Println(reverse(c))             // '987654321' (reversed string)

	// --------------------------------------------- LIST ARRAY
	// range menjadi list
	fmt.Println("range menjadi list")
	rangeList := make([]int, 4)
	for i := range rangeList {
		rangeList[i] = i
	}
	fmt.Println(rangeList)  // output: [0, 1, 2, 3]

	array := []int{1, 2, 3, 4}

	// concatenate
	fmt.Println()
	concatenatedArray := append(array, 5, 6, 7, 8, 9, 10)
	fmt.Println(concatenatedArray)  // [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

	// mutable (dapat diubah)
	array2 := []int{2, 4, 8, 17}
	array2[3] = 16
	fmt.Println(array2)  // [2, 4, 8, 16]

	// append / tambah data di akhir item
	array3 := []int{2, 4, 8}
	array3 = append(array3, 1<<4)  // 2 ** 4 = 16
	fmt.Println(array3)  // [2, 4, 8, 16]

	// slices / potong
	array4 := []int{1, 2, 3, 4, 5, 6, 7, 8}
	array4 = append(array4[:2], array4[5:]...)  // dari index 2, hapus 3 data
	fmt.Println(array4)  // [1, 2, 6, 7, 8]

	reverseArray(array4)
	fmt.Println(array4)  // [8, 7, 6, 2, 1]

	array5 := []int{4, 2, 1, 5, 6, 7, 4}
	sort.Ints(array5)
	fmt.Println(array5)  // [1, 2, 4, 4, 5, 6, 7]

	l1 := []int{1, 2, 1, 2, 1}
	l2 := []int{3, 4, 3, 4, 3}

	array6 := [][]int{l1, l2}  // matrix
	fmt.Println(array6[0])  // [1, 2, 1, 2, 1]

}
// Helper function to reverse a string
func reverse(s string) string {
	r := []rune(s)
	for i, j := 0, len(r)-1; i < j; i, j = i+1, j-1 {
		r[i], r[j] = r[j], r[i]
	}
	return string(r)
}

// Helper function to reverse a slice
func reverseArray(slice []int) {
    for i, j := 0, len(slice)-1; i < j; i, j = i+1, j-1 {
        slice[i], slice[j] = slice[j], slice[i]
    }
}

// Helper function to get every nth character from a string starting from a given index
func everyNthChar(s string, step, start int) string {
	var result strings.Builder
	for i := start; i < len(s); i += step {
		result.WriteByte(s[i])
	}
	return result.String()
}