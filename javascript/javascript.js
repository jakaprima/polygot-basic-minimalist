// open terminal
// type: node javascript.js

console.log("HELLO WORLD")
// check type
let a = "string data"
console.log("TYPE = "+ typeof(a))

// Operator +, -, *, /
console.log(2 + 2);  // 4
console.log(50 - 5 * 6);  // 20
console.log((50 - 5.0 * 6) / 4);  // 5.0 (Java and Python same result)
console.log(8 / 5.0);  // 1.6
console.log(17 / 3);  // 5.666666666666667 (float)
console.log(17 / 3.0);  // 5.666666666666667 (float)
console.log(Math.floor(17 / 3));  // 5 (integer division)
console.log(17 % 3);  // 2 (modulus: remainder of 17 divided by 3)
console.log(2 ** 3);  // 8 (power: 2 * 2 * 2)

// Execute and store result in variable '_'
let _ = 17 / 3.0;
console.log(_.toFixed(2));  // 5.67 (round to 2 decimal places)


// ---------------------------------------------------------------------- Operator +, *, and escaping quotes
console.log('spam eggs');  // 'spam eggs' single quotes
console.log('doesn\'t');  // "doesn't" escape single quotes

let b = "baris1\n baris2";  // new line
console.log(b);
// baris1
// baris2

console.log("C:\\\\files\\name");  // print raw string and escape backslashes

// String with different indentations
console.log(`\
bebas
    sdgasjdf
     asdf
         afsdf
`);

// Glued + repeat with * (like JavaScript behavior)
console.log('jaka'.repeat(3) + 'prima');
// jakajakajakaprima

// Concatenation without operator (like JavaScript behavior)
console.log('jaka' + 'prima');
// jakaprima

// Output string array data (like JavaScript behavior)
a = 'jako';
console.log(a[2]);  // k
console.log(a[a.length - 1]);  // o
console.log(a.slice(1, 3));  // ak (string slice from index 1 to 3-1 = 2, takes 2 data)
console.log(a.slice(0, 1) + a.slice(3));  // jo

// Length
console.log(a.length);  // 4

// Traverse
a = '123456789';
console.log(a.split('').filter((_, i) => i % 2 === 1).join(''));  // '2468' (every second character starting from index 1)
console.log(a.split('').filter((_, i) => i % 2 === 0).join(''));  // '13579' (every second character starting from index 0)
console.log(a.split('').reverse().join(''));  // '987654321' (reversed string)

// -------------------------------------- LIST / ARRAY
// range menjadi list
console.log("range menjadi list");
console.log(Array.from({ length: 4 }, (_, i) => i));  // output: [0, 1, 2, 3]

let array = [1, 2, 3, 4];

// concatenate
console.log();
console.log(array.concat([5, 6, 7, 8, 9, 10]));  // [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

// mutable (dapat diubah)
let array2 = [2, 4, 8, 17];
array2[3] = 16;
console.log(array2);  // [2, 4, 8, 16]

// append / tambah data di akhir item
let array3 = [2, 4, 8];
array3.push(2 ** 4);  // 2 ** 4 = 16
console.log(array3);  // [2, 4, 8, 16]

// slices / potong
let array4 = [1, 2, 3, 4, 5, 6, 7, 8];
array4.splice(2, 3);  // dari index 2 5-2 = 3 hapus 3 data
console.log(array4);  // [1, 2, 6, 7, 8]

array4.reverse();
console.log(array4);  // [8, 7, 6, 2, 1]

let array5 = [4, 2, 1, 5, 6, 7, 4];
array5.sort((a, b) => a - b);  // sort numerically
console.log(array5);  // [1, 2, 4, 4, 5, 6, 7]

let l1 = [1, 2, 1, 2, 1];
let l2 = [3, 4, 3, 4, 3];

let array6 = [l1, l2];  // matrix
console.log(array6[0]);  // [1, 2, 1, 2, 1]



