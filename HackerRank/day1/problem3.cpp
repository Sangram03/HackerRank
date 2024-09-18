/*
* A for loop is a programming language statement which allows code to be repeatedly executed.

? The syntax is

* for ( <expression_1> ; <expression_2> ; <expression_3> )
!    <statement>
* expression_1 is used for intializing variables which are generally used for controlling the terminating flag for the loop.
* expression_2 is used to check for the terminating condition. If this evaluates to false, then the loop is terminated.
* expression_3 is generally used to update the flags/variables.
!A sample loop is

? for(int i = 0; i < 10; i++) {
    ...
*}
* In this challenge, you will use a for loop to increment a variable through a range.

!Input Format

* You will be given two positive integers,  and  (), separated by a newline.

!Output Format

* For each integer  in the inclusive interval :

* If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
* Else if  and it is an even number, then print "even".
* Else if  and it is an odd number, then print "odd".
* Note: 

! Sample Input

? 8
? 11
!Sample Output

? eight
? nine
? even
? odd
? Language
? C++11
? More
? 12345678910111213141516171819202122232425
? Line: 30 Col: 1

*Test against custom input

*/

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    // Input two integers
    cin >> a >> b;
    
    // Array to store the English words for numbers from 1 to 9
    string numbers[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    // Loop from a to b (inclusive)
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            // Print the English representation of numbers between 1 and 9
            cout << numbers[i] << endl;
        } else {
            // If greater than 9, check for even or odd
            if (i % 2 == 0) {
                cout << "even" << endl;
            } else {
                cout << "odd" << endl;
            }
        }
    }
    return 0;
}