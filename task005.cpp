#include <iostream>
using namespace std;
void greaternumber(int number1, int number2);

main(){

int usernumber1;
int usernumber2;
while(true)
{
    cout<<"Enter your first  number  :";
    cin>>usernumber1;
    cout<<"Enter second number  number  :";
     cin>>usernumber2;
    greaternumber(usernumber1, usernumber2);
}

}
void greaternumber(int usernumber1, int usernumber2)
{
if(usernumber1 >usernumber2){
        cout <<"Your number    :"<<usernumber1<<"is greater"<<endl;
}
if(usernumber2 > usernumber1){
       cout << "Your number is   : "<<usernumber2<<"is greater"<<endl;}

}
