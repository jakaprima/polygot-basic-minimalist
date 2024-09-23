# open terminal
# type: python3 python.py
print("HELLO WORLD")

# -------------------------------------------------------------------------------------check type
a = "string data"
print("type(a)", type(a))

# ------------------------------------------------------------------------------------- number

# operator +, -, *, /
print(2 + 2)  # 4
print(50 - 5 * 6)  # 20
print((50 - 5.0 * 6) / 4)  # 5.0 (Java and Python same result)
print(8 / 5.0)  # 1.6 (to get a float, use .0; otherwise, it will be an int)
print(17 / 3)  # 5.666666666666667 (float)
print(17 / 3.0)  # 5.666666666666667 (float)
print(17 // 3)  # 5 (integer division)
print(17 // 3.0)  # 5.0 (integer division with float result)
print(17 % 3)  # 2 (modulus: remainder of 17 divided by 3)
print(2 ** 3)  # 8 (power: 2 * 2 * 2)

# Execute and store result in variable '_'
_ = 17 / 3.0
print(round(_, 2))  # 5.67 (round to 2 decimal places)




# ---------------------------------------------------------------------- Operator +, *, and escaping quotes
print('spam eggs')  # 'spam eggs' single quotes
print('doesn\'t')  # "doesn't" escape single quotes

a = "baris1\n baris2"  # new line
print(a)
# baris1
# baris2

print(r"C:\\files\name")  # print raw string and escape backslashes

# String with different indentations
print("""\
bebas
    sdgasjdf
     asdf
         afsdf
""")

# Glued + repeat with * (like JavaScript behavior)
print(3 * 'jaka' + 'prima')
# jakajakajakaprima

# Concatenation without operator (like JavaScript behavior)
print('jaka' 'prima')
# jakaprima

# Output string array data (like JavaScript behavior)
a = 'jako'
print(a[2])  # k
print(a[-1])  # o
print(a[1:3])  # ak (string slice from index 1 to 3-1 = 2, takes 2 data)
print(a[:1] + a[3:])  # jo

# Length
print(len(a))  # 4

# Traverse
a = '123456789'
print(a[1::2])  # '2468' (every second character starting from index 1)
print(a[0::2])  # '13579' (every second character starting from index 0)
print(a[::-1])  # '987654321' (reversed string)


# ------------------------------------------------------------------------ LIST
# range menjadi list
print("range menjadi list")
print(list(range(4)))  # output: [0, 1, 2, 3]

array = [1, 2, 3, 4]

# concatenate
print()
print(array + [5, 6, 7, 8, 9, 10])  # [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# mutable (dapat diubah)
array2 = [2, 4, 8, 17]
array2[3] = 16
print(array2)  # [2, 4, 8, 16]

# append / tambah data di akhir item
array3 = [2, 4, 8]
array3.append(2 ** 4)
print(array3)  # [2, 4, 8, 16]

# slices / potong
array4 = [1, 2, 3, 4, 5, 6, 7, 8]
array4[2:5] = []  # dari index 2 5-2 = 3 hapus 3 data
print(array4)  # [1, 2, 6, 7, 8]

array4.reverse()
print(array4)  # [8, 7, 6, 2, 1]

array5 = [4, 2, 1, 5, 6, 7, 4]
array5.sort()
print(array5)  # [1, 2, 4, 4, 5, 6, 7]

l1 = [1, 2, 1, 2, 1]
l2 = [3, 4, 3, 4, 3]

array6 = [l1, l2]  # matrix
print(array6[0])  # [1, 2, 1, 2, 1]
