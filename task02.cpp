#include <iostream>
using namespace std;


void add(int number1,int number2);
void multiply(float number1,float number2);
void division(float number1,float number2);
void sub(int number1,int number2);

main(){
char operation;
int number1,number2;
while(true){
cout<< "Enter your  1st number  :";
cin>>number1;
cout<<"Enter your 2nd number";
cin>>number2 ;
cout <<"enter your operation (+, -, *, /, ) :  ";
cin>>operation;
if(operation=='+'){
add (number1,number2);
}
if(operation=='-'){
sub (number1,number2);

}
if(operation=='*')
{

multiply(number1,number2);
}
if(operation=='/'){
division(number1,number2);
}

}



}
void add(int number1,int number2){
int sum = number1 + number2;
cout <<"your sum is  "<<sum <<endl;
}
void multiply(float number1,float number2)
{
int multi = number1 * number2;
cout <<"your multiply is  "<<multi <<endl;
}
void division(float number1,float number2)
{
int divi = number1 / number2;
cout <<"your division is  "<<divi <<endl;
}
void sub(int number1,int number2)
{
int subtract = number1 - number2;
cout <<"your subtraction is is  "<<subtract <<endl;
}











