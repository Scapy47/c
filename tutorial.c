#include <stdio.h>

int main()
{
        // ##### into #####

        // comments are line of text ignored in excution of code
        // in c single in  comments start with 2 slash { // }

        /*
                slash with two star and another slash is multilne comment
                everthing under those star is ignored
        */

        // printf is function that gives outputs
        printf("Hello world\n");
        /*
                everthing under those double quotation mark is string and \n is escape sequences
                escape sequences are sequence of text that is used to print thing thing like newline
                with \n or tab with \t or backslash with \\ there are some other escape sequences that
                you can look on the web
        */

        // ##### variable and data type #####

        // createding a virable is two step process

        int a;  // declaration
        a = 10; // initialization
        // or combined
        int b = 12;

        // how to display variable with format format specifier
        printf("a:%i\nb:%i\n", a, b); // there are other format specifiers like %i %d %s for intiger,decimal and string data types

        // # Data types
        int x = 365;       // integer (4 bytes)
        short xs = 123;    // short or short int (2 bytes)
        long xl = 100000L; // long or long long int (8 bytes)
        // two times long because int is log by default

        float y = 3.14;   // floating point number (4 bytes)
        double yd = 3.14; // float with more precision (8 bytes)

        char z = 'S';                   // single character
        char massage[] = "hello world"; // string or array of character
        char ascii = 120;               // number can be stored in char

        printf("As a num %d\n", ascii);  // %d can be used to print number
        printf("As a char %c\n", ascii); // %c to get string that is based on ascii Standard

        // C IS NOT OBJECT ORIENTED
        /*
        so there is no string data type only why to write strings is character array sting
        and there are no buildin functions to manipulate strings char array stings
        so there is header file that is used for that <string.h>
        */

        // ## unsigned and signed
        /*
        every data type that stores number in c is signed by default
        which means that they can store both negative and positive numbers
        and half devided for negative and positive
        but unsigned data types can only store natural number or positive number
        which doubles the range of data type
        unsigned data types have there own format specifiers
        */
        return 0;
}
