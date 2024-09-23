// for list
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;


public class HelloWorld {
    public static void main(String[] args){
        // open terminal
        // type: java main.java
        System.out.println("Hello World");

        // type
        String a = "string data";
        System.out.println("TYPE = "+ a.getClass().getName());


        // Operator +, -, *, /

        System.out.println(2 + 2);  // 4
        System.out.println(50 - 5 * 6);  // 20
        System.out.println((50 - 5.0 * 6) / 4);  // 5.0 (Java and Python same result)
        System.out.println(8 / 5.0);  // 1.6
        System.out.println(17 / 3.0);  // 5.666666666666667 (float)
        System.out.println((double)17 / 3);  // 5.666666666666667 (float)
        System.out.println(17 / 3);  // 5 (integer division)
        System.out.println(17 % 3);  // 2 (modulus: remainder of 17 divided by 3)
        System.out.println(Math.pow(2, 3));  // 8 (power: 2 * 2 * 2)

        // Execute and store result in variable '_' di java tidak bisa pakai _
        double z = 17 / 3.0;
        System.out.printf("%.2f\n", z);  // 5.67 (round to 2 decimal places)


        // ---------------------------------------------------------------------- Operator +, *, and escaping quotes
        System.out.println("spam eggs");  // 'spam eggs' single quotes di python di java ga boleh
        System.out.println("doesn't");  // "doesn't" escape single quotes

        String b = "baris1\n baris2";  // new line
        System.out.println(b);
        // baris1
        // baris2

        System.out.println("C:\\\\files\\name");  // print raw string and escape backslashes

        // String with different indentations (di python di java tidak bisa)
        System.out.println("bebas\n" +
                           "    sdgasjdf\n" +
                           "     asdf\n" +
                           "         afsdf");

        // Glued + repeat with *
        String repeated = "jaka".repeat(3) + "prima";
        System.out.println(repeated);
        // jakajakajakaprima

        // Concatenation without operator (di python di java tidak bisa)
        System.out.println("jaka" + "prima");
        // jakaprima

        // Output string array data (like JavaScript behavior)
        String str = "jako";
        System.out.println(str.charAt(2));  // k
        System.out.println(str.charAt(str.length() - 1));  // o
        System.out.println(str.substring(1, 3));  // ak (string slice from index 1 to 3-1 = 2, takes 2 data)
        System.out.println(str.substring(0, 1) + str.substring(3));  // jo

        // Length
        System.out.println(str.length());  // 4

        // Traverse
        String numbers = "123456789";
        System.out.println(numbers.chars().skip(1).filter(c -> (c - '0') % 2 == 1).mapToObj(c -> (char) c).collect(StringBuilder::new, StringBuilder::append, StringBuilder::append).toString());  // '2468' (every second character starting from index 1)
        System.out.println(numbers.chars().filter(c -> (c - '0') % 2 == 0).mapToObj(c -> (char) c).collect(StringBuilder::new, StringBuilder::append, StringBuilder::append).toString());  // '13579' (every second character starting from index 0)
        System.out.println(new StringBuilder(numbers).reverse().toString());  // '987654321' (reversed string)
    
        // ------------------------------------------------------------------------ LIST / ARRAY
        // range menjadi list
        System.out.println("range menjadi list");
        List<Integer> rangeList = new ArrayList<>();
        for (int i = 0; i < 4; i++) {
            rangeList.add(i);
        }
        System.out.println(rangeList);  // output: [0, 1, 2, 3]

        List<Integer> array = new ArrayList<>(Arrays.asList(1, 2, 3, 4));

        // concatenate
        System.out.println();
        List<Integer> concatenatedArray = new ArrayList<>(array);
        concatenatedArray.addAll(Arrays.asList(5, 6, 7, 8, 9, 10));
        System.out.println(concatenatedArray);  // [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

        // mutable (dapat diubah)
        List<Integer> array2 = new ArrayList<>(Arrays.asList(2, 4, 8, 17));
        array2.set(3, 16);
        System.out.println(array2);  // [2, 4, 8, 16]

        // append / tambah data di akhir item
        List<Integer> array3 = new ArrayList<>(Arrays.asList(2, 4, 8));
        array3.add((int) Math.pow(2, 4));  // 2 ** 4 = 16
        System.out.println(array3);  // [2, 4, 8, 16]

        // slices / potong
        List<Integer> array4 = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5, 6, 7, 8));
        array4.subList(2, 5).clear();  // dari index 2, hapus 3 data
        System.out.println(array4);  // [1, 2, 6, 7, 8]

        Collections.reverse(array4);
        System.out.println(array4);  // [8, 7, 6, 2, 1]

        List<Integer> array5 = new ArrayList<>(Arrays.asList(4, 2, 1, 5, 6, 7, 4));
        Collections.sort(array5);
        System.out.println(array5);  // [1, 2, 4, 4, 5, 6, 7]

        List<Integer> l1 = new ArrayList<>(Arrays.asList(1, 2, 1, 2, 1));
        List<Integer> l2 = new ArrayList<>(Arrays.asList(3, 4, 3, 4, 3));

        List<List<Integer>> array6 = new ArrayList<>(Arrays.asList(l1, l2));  // matrix
        System.out.println(array6.get(0));  // [1, 2, 1, 2, 1]
    }
}