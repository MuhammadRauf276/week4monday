#include <iostream>
using namespace std;
void usernumber(int number1);
main(){
int number1;

cout<<"Enter your number"<<endl;
cin>> number1;
usernumber(number1);


}
void usernumber(int number1)
{if (number1 %2 ==0){
cout<<"even";}
if (number1 %2 !=0){
cout<<"odd";

}

}