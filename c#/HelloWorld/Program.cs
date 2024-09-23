using System;
using System.Collections.Generic;

// check readme.md
Console.WriteLine("Hello World");
Console.WriteLine("(50-5.0*6) / 4 = "+(50-5.0*6) / 4);

// check type
string a = "string data";
Console.WriteLine("TYPE = "+ a.GetType().ToString());

// Operator +, -, *, /
Console.WriteLine(2 + 2);  // 4
Console.WriteLine(50 - 5 * 6);  // 20
Console.WriteLine((50 - 5.0 * 6) / 4);  // 5.0 (Java and Python same result)
Console.WriteLine(8 / 5.0);  // 1.6
Console.WriteLine(17 / 3.0);  // 5.666666666666667 (float)
Console.WriteLine((double)17 / 3);  // 5.666666666666667 (float)
Console.WriteLine(17 / 3);  // 5 (integer division)
Console.WriteLine(17 % 3);  // 2 (modulus: remainder of 17 divided by 3)
Console.WriteLine(Math.Pow(2, 3));  // 8 (power: 2 * 2 * 2)

// Execute and store result in variable 'result'
double result = 17 / 3.0;
Console.WriteLine(result.ToString("F2"));  // 5.67 (round to 2 decimal places)


// ---------------------------------------------------------------------- Operator +, *, and escaping quotes
Console.WriteLine("spam eggs");  // 'spam eggs' single quotes
Console.WriteLine("doesn't");     // "doesn't" escape single quotes

string b = "baris1\n baris2";  // new line
Console.WriteLine(b);
// baris1
// baris2

Console.WriteLine(@"C:\\files\name");  // print raw string and escape backslashes

// String with different indentations
Console.WriteLine(@"bebas
    sdgasjdf
    asdf
        afsdf");

// Glued + repeat with * (like JavaScript behavior)
string baseString = "jaka";
int repeatCount = 3;
string repeated = new string(' ', 0); // Initialize with empty string

for (int i = 0; i < repeatCount; i++)
{
    repeated += baseString;
}

repeated += "prima";
Console.WriteLine(repeated);
// Output: jakajakajakaprima

// Concatenation without operator (like JavaScript behavior)
Console.WriteLine("jaka" + "prima");
// jakaprima

// Output string array data (like JavaScript behavior)
string s = "jako";
Console.WriteLine(s[2]);       // k
Console.WriteLine(s[s.Length - 1]); // o
Console.WriteLine(s.Substring(1, 2)); // ak (string slice from index 1 to 3-1 = 2, takes 2 data)
Console.WriteLine(s.Substring(0, 1) + s.Substring(3)); // jo

// Length
Console.WriteLine(s.Length); // 4

// Traverse
string t = "123456789";
Console.WriteLine(GetEveryNthCharacter(t, 1, 2)); // '2468' (every second character starting from index 1)
Console.WriteLine(GetEveryNthCharacter(t, 0, 2)); // '13579' (every second character starting from index 0)
Console.WriteLine(ReverseString(t)); // '987654321' (reversed string)


// ---------------------------------------------- LIST / ARRAY
// range menjadi list
Console.WriteLine("range menjadi list");
List<int> rangeList = new List<int> { 0, 1, 2, 3 };
PrintList(rangeList);  // output: [0, 1, 2, 3]

List<int> array = new List<int> { 1, 2, 3, 4 };

// concatenate
Console.WriteLine();
List<int> additionalElements = new List<int> { 5, 6, 7, 8, 9, 10 };
List<int> concatenatedArray = new List<int>(array);
concatenatedArray.AddRange(additionalElements);
PrintList(concatenatedArray);  // [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

// mutable (dapat diubah)
List<int> array2 = new List<int> { 2, 4, 8, 17 };
array2[3] = 16;
PrintList(array2);  // [2, 4, 8, 16]

// append / tambah data di akhir item
List<int> array3 = new List<int> { 2, 4, 8 };
array3.Add((int)Math.Pow(2, 4));  // 2 ** 4 = 16
PrintList(array3);  // [2, 4, 8, 16]

// slices / potong
List<int> array4 = new List<int> { 1, 2, 3, 4, 5, 6, 7, 8 };
array4.RemoveRange(2, 3);  // from index 2, remove 3 elements
PrintList(array4);  // [1, 2, 6, 7, 8]

array4.Reverse();
PrintList(array4);  // [8, 7, 6, 2, 1]

List<int> array5 = new List<int> { 4, 2, 1, 5, 6, 7, 4 };
array5.Sort();
PrintList(array5);  // [1, 2, 4, 4, 5, 6, 7]

List<int> l1 = new List<int> { 1, 2, 1, 2, 1 };
List<int> l2 = new List<int> { 3, 4, 3, 4, 3 };

List<List<int>> array6 = new List<List<int>> { l1, l2 };  // matrix
PrintList(array6[0]);  // [1, 2, 1, 2, 1]


// Helper method to get every nth character
static string GetEveryNthCharacter(string input, int start, int step)
{
    string result = "";
    for (int i = start; i < input.Length; i += step)
    {
        result += input[i];
    }
    return result;
}

// Helper method to reverse a string
static string ReverseString(string input)
{
    char[] array = input.ToCharArray();
    Array.Reverse(array);
    return new string(array);
}

// Function to print a list
static void PrintList<T>(List<T> list)
{
    Console.Write("[");
    for (int i = 0; i < list.Count; i++)
    {
        Console.Write(list[i]);
        if (i < list.Count - 1) Console.Write(", ");
    }
    Console.WriteLine("]");
}