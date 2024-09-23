#include <iostream>
#include <typeinfo>
#include <iomanip>  // For std::fixed and std::setprecision
#include <cmath>    // For std::pow
#include <string>
#include <algorithm>
#include <vector> // for list

// Function to print a vector
void printVector(const std::vector<int>& vec) {
    std::cout << "[";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i < vec.size() - 1) std::cout << ", ";
    }
    std::cout << "]" << std::endl;
}

// Function to reverse a vector
void reverseVector(std::vector<int>& vec) {
    std::reverse(vec.begin(), vec.end());
}

int main(){
    // open terminal
    // type: g++ hello.cpp -o hello
    // type: ./hello

    std::cout << "HELLO WORLD" << std::endl;
    // check type
    std::string a = "string data";
    std::cout << "TYPE = " << typeid(a).name() << std::endl;

    // Operator +, -, *, /
    std::cout << 2 + 2 << std::endl;  // 4
    std::cout << 50 - 5 * 6 << std::endl;  // 20
    std::cout << (50 - 5.0 * 6) / 4 << std::endl;  // 5.0 (Java and Python same result)
    std::cout << 8 / 5.0 << std::endl;  // 1.6
    std::cout << 17 / 3.0 << std::endl;  // 5.666666666666667 (float)
    std::cout << static_cast<double>(17) / 3 << std::endl;  // 5.666666666666667 (float)
    std::cout << 17 / 3 << std::endl;  // 5 (integer division)
    std::cout << 17 % 3 << std::endl;  // 2 (modulus: remainder of 17 divided by 3)
    std::cout << std::pow(2, 3) << std::endl;  // 8 (power: 2 * 2 * 2)

    // Execute and store result in variable 'result'
    double result = 17 / 3.0;
    std::cout << std::fixed << std::setprecision(2) << result << std::endl;  // 5.67 (round to 2 decimal places)


    // ---------------------------------------------------------------------- Operator +, *, and escaping quotes
    std::cout << "spam eggs" << std::endl;  // 'spam eggs' single quotes
    std::cout << "doesn't" << std::endl;     // "doesn't" escape single quotes

    std::string b = "baris1\n baris2";  // new line
    std::cout << b << std::endl;
    // baris1
    // baris2

    std::cout << "C:\\\\files\\name" << std::endl;  // print raw string and escape backslashes

    // String with different indentations
    std::cout << "bebas\n"
              << "    sdgasjdf\n"
              << "     asdf\n"
              << "         afsdf\n";

    // Glued + repeat with * (like JavaScript behavior)
    std::string base = "jaka";
    std::string repeated;
    for (int i = 0; i < 3; ++i) {
        repeated += base;
    }
    repeated += "prima";
    std::cout << repeated << std::endl;
    // jakajakajakaprima

    // Concatenation without operator (like JavaScript behavior)
    std::cout << "jaka" "prima" << std::endl;
    // jakaprima

    // Output string array data (like JavaScript behavior)
    std::string s = "jako";
    std::cout << s[2] << std::endl;       // k
    std::cout << s[s.size() - 1] << std::endl; // o
    std::cout << s.substr(1, 2) << std::endl; // ak (string slice from index 1 to 3-1 = 2, takes 2 data)
    std::cout << s.substr(0, 1) + s.substr(3) << std::endl; // jo

    // Length
    std::cout << s.size() << std::endl; // 4

    // Traverse
    std::string t = "123456789";
    for (size_t i = 1; i < t.size(); i += 2) {
        std::cout << t[i];
    }
    std::cout << std::endl; // '2468' (every second character starting from index 1)

    for (size_t i = 0; i < t.size(); i += 2) {
        std::cout << t[i];
    }
    std::cout << std::endl; // '13579' (every second character starting from index 0)

    std::reverse(t.begin(), t.end());
    std::cout << t << std::endl; // '987654321' (reversed string)


    // ---------------------------------------- LIST & ARRAY
    // range menjadi list
    std::cout << "range menjadi list" << std::endl;
    std::vector<int> rangeList = {0, 1, 2, 3};
    printVector(rangeList);  // output: [0, 1, 2, 3]

    std::vector<int> array = {1, 2, 3, 4};

    // concatenate
    std::cout << std::endl;
    std::vector<int> elementsToAdd = {5, 6, 7, 8, 9, 10};
    std::vector<int> concatenatedArray = array;
    concatenatedArray.insert(concatenatedArray.end(), elementsToAdd.begin(), elementsToAdd.end());
    printVector(concatenatedArray);  // [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

    // mutable (dapat diubah)
    std::vector<int> array2 = {2, 4, 8, 17};
    array2[3] = 16;
    printVector(array2);  // [2, 4, 8, 16]

    // append / tambah data di akhir item
    std::vector<int> array3 = {2, 4, 8};
    array3.push_back(1 << 4);  // 2 ** 4 = 16
    printVector(array3);  // [2, 4, 8, 16]

    // slices / potong
    std::vector<int> array4 = {1, 2, 3, 4, 5, 6, 7, 8};
    array4.erase(array4.begin() + 2, array4.begin() + 5);  // dari index 2, hapus 3 data
    printVector(array4);  // [1, 2, 6, 7, 8]

    reverseVector(array4);
    printVector(array4);  // [8, 7, 6, 2, 1]

    std::vector<int> array5 = {4, 2, 1, 5, 6, 7, 4};
    std::sort(array5.begin(), array5.end());
    printVector(array5);  // [1, 2, 4, 4, 5, 6, 7]

    std::vector<int> l1 = {1, 2, 1, 2, 1};
    std::vector<int> l2 = {3, 4, 3, 4, 3};

    std::vector<std::vector<int>> array6 = {l1, l2};  // matrix
    printVector(array6[0]);  // [1, 2, 1, 2, 1]

    return 0;
}