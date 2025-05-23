//Q 1. Electricity Bill
Q1.Write a program in C to calculate and print the electricity bill of a given customer. The customer ID and unit consumed by the user should be taken as input. The program should display the total amount to be paid. The charges are as follows:
Unit Range Charge/Unit  
Upto 199 1.20
200 to 400 1.50
401 to 600 1.80
Above 600 2.00
If the bill exceeds Rs. 400, a surcharge of 15% will be applied.

The minimum bill amount is Rs. 100.

Input:
A single integer value representing the number of units consumed.

Output:
A floating-point value representing the total amount, printed to two decimal places.

Input Explanation
Input consists of one integer value as number of units consumed by customer
Output Explanation
Output consists of float value as due amount with two decimal only.

Test case 1 :
 Input:
711
Output:
1635.30
Test case 2 :
Input:
233
Output:
349.50
Test case 3 :
Input:
134
Output:
160.80
Test case 4 :
Input:
468
Output:
968.76
Test case 5 :
Input:
50
Output:
100.00
Test case 6 :
Input:
402
Output:
832.14


#include <stdio.h>
int main(){
    int units;
    float bill;
    scanf("%d", &units);
    if(units <= 199){
       bill = units*1.20; 
    }
    else if(units >= 200 & units <=400){
        bill = units*1.50;
    }
    else if(units >= 401 & units <=600){
        bill = units*1.80;
    }
    else{
        bill = units*2.00;
    }
    if(bill > 400){
        int surcharge = bill * 0.15;
        bill += surcharge;
    }
    if(bill <= 100){
        bill = 100;
    }
    printf("%.2f", bill);
    return 0;
}


