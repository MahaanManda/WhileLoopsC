/* Write a program that uses while loops to perform the following steps: 

Prompt the user to input two integers: firstNum and secondNum (firstNum must be less than secondNum).

Output all odd numbers between firstNum and secondNum.

Output the sum of all even numbers between firstNum and secondNum.

Output the numbers and their squares between 1 and 10.

Output the sum of the square of the odd numbers between firstNum and secondNum.

Output all uppercase letters.
*/

#include <iostream>

using namespace std;

int main(){
    //variables
    int firstNum = 0;
    int secondNum = 0;
    int count = 1; //count for the while loop
    int sumEven = 0;
    int sumSquareOdd = 0;
    //Prompt the user to input two integers: firstNum and secondNum (firstNum must be less than secondNum).
        //loop to constantly check for least to greatest order
    while (firstNum == 0){
        cout << "Enter two integers (least to greatest order): ";
        cin >> firstNum >> secondNum;

        if (firstNum > secondNum) {
            cout << "Please enter again in LEAST TO GREATEST ORDER" << endl;
            firstNum = 0;
            secondNum = 0;
        }
        else if (firstNum == secondNum) {
            cout << "Cannot have equal numbers. Please try again" << endl;
            firstNum = 0;
            secondNum = 0;
        }
        else {
            //continue to program
            break;
        }
    }
   

   //Output all odd numbers between firstNum and secondNum.
   //Output the sum of all even numbers between firstNum and secondNum.
    cout << "Odd Numbers between firstNum and secondNum: ";
    while (firstNum + count < secondNum) {
        int i = firstNum + count;
        if (i % 2 == 0) {
            // even number
            sumEven += i;
        } else {
            // odd number
            cout << i << " ";
            // Calculate the sum of the square of odd numbers
            sumSquareOdd += (i * i);
        }
        count++;
    }
    cout << endl;
    cout << "Sum of all even numbers between firstNum and secondNum: " << sumEven << endl;
   
   //Output the numbers and their squares between 1 and 10.
   cout << "Numbers and their squares between 1 and 10:" << endl;
   count = 2; // reset count for the next while loop
   while (count < 10) {
        cout << "Number: " << count << ", Square: " << (count * count) << endl;
        count++;
    }

   //Output the sum of the square of the odd numbers between firstNum and secondNum.
   cout << "Sum of the square of odd numbers between firstNum and secondNum: " << sumSquareOdd << endl;

   //Output all uppercase letters.
   cout << "Uppercase letters: ";
   char uppercaseLetter = 'A';
   while(uppercaseLetter <= 'Z'){
        cout << uppercaseLetter << " ";
        uppercaseLetter ++;
   }

    return 0;
}