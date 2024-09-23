<?php 
    # open terminal
    # type: php php.py 

use function PHPSTORM_META\type;

    echo "HELLO WORLD\n";

    $a = "string data";
    echo "CHECK TYPE = ". gettype($a) . "\n";

    // Operator +, -, *, /
    echo 2 + 2 . "\n";  // 4
    echo 50 - 5 * 6 . "\n";  // 20
    echo (50 - 5.0 * 6) / 4 . "\n";  // 5 (Java and Python same result)
    echo 8 / 5.0 . "\n";  // 1.6
    echo 17 / 3 . "\n";  // 5.6666666666667 (float)
    echo 17 / 3.0 . "\n";  // 5.6666666666667 (float)
    echo intdiv(17, 3) . "\n";  // 5 (integer division)
    echo 17 % 3 . "\n";  // 2 (modulus: remainder of 17 divided by 3)
    echo 2 ** 3 . "\n";  // 8 (power: 2 * 2 * 2)

    // Execute and store result in variable '_'
    $_ = 17 / 3.0;
    echo round($_, 2) . "\n";  // 5.67 (round to 2 decimal places)

    // ---------------------------------------------------------------------- Operator +, *, and escaping quotes
    echo 'spam eggs' . "\n";  // 'spam eggs' single quotes
    echo 'doesn\'t' . "\n";  // "doesn't" escape single quotes

    $a = "baris1\n baris2";  // new line
    echo $a . "\n";
    // baris1
    // baris2

    echo "C:\\\\files\\name" . "\n";  // print raw string and escape backslashes

    // String with different indentations
    echo <<<EOL
    bebas
        sdgasjdf
        asdf
            afsdf
    EOL;

    // Glued + repeat
    echo str_repeat('jaka', 3) . 'prima' . "\n";
    // jakajakajakaprima

    // Concatenation without operator in python in php should use .
    echo 'jaka' . 'prima' . "\n";
    // jakaprima

    // Output string array data
    $a = 'jako';
    echo $a[2] . "\n";  // k
    echo $a[-1] . "\n";  // o
    echo substr($a, 1, 2) . "\n";  // ak (string slice from index 1 to 3-1 = 2, takes 2 data)
    echo substr($a, 0, 1) . substr($a, 3) . "\n";  // jo

    // Length
    echo strlen($a) . "\n";  // 4

    // Traverse
    $a = '123456789';
    echo substr($a, 1, strlen($a) - 1) . "\n";  // '23456789' (every second character starting from index 1)
    echo substr($a, 0, strlen($a)) . "\n";  // '13579' (every second character starting from index 0)
    echo strrev($a) . "\n";  // '987654321' (reversed string)


    // ----------------------------------------------------------------------- LIST ARRAY
    // range menjadi list
    echo "range menjadi list\n";
    print_r(range(0, 3));  // output: [0, 1, 2, 3]

    $array = [1, 2, 3, 4];

    // concatenate
    echo "\n";
    print_r(array_merge($array, [5, 6, 7, 8, 9, 10]));  // [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

    // mutable (dapat diubah)
    $array2 = [2, 4, 8, 17];
    $array2[3] = 16;
    print_r($array2);  // [2, 4, 8, 16]

    // append / tambah data di akhir item
    $array3 = [2, 4, 8];
    $array3[] = 2 ** 4;  // 2 ** 4 = 16
    print_r($array3);  // [2, 4, 8, 16]

    // slices / potong
    $array4 = [1, 2, 3, 4, 5, 6, 7, 8];
    array_splice($array4, 2, 3);  // dari index 2 5-2 = 3 hapus 3 data
    print_r($array4);  // [1, 2, 6, 7, 8]

    $array_reverse_exe = array_reverse($array4);
    print_r($array_reverse_exe);  // [8, 7, 6, 2, 1]

    $array5 = [4, 2, 1, 5, 6, 7, 4];
    sort($array5);
    print_r($array5);  // [1, 2, 4, 4, 5, 6, 7]

    $l1 = [1, 2, 1, 2, 1];
    $l2 = [3, 4, 3, 4, 3];

    $array6 = [$l1, $l2];  // matrix
    print_r($array6[0]);  // [1, 2, 1, 2, 1]
?>