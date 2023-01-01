#include <iostream>
using namespace std;
void iseven(int number );
main (){

int usernumber;
while(true){cout<<"Enter your number  :";
cin>>usernumber;
iseven(usernumber);
}

}
void iseven(int usernumber)
{
if(usernumber%2==0){
cout <<"Your number is even    :"<<endl;
}
if(usernumber%2 !=0){
cout << "Your number is  odd  : "<<endl;}
}
