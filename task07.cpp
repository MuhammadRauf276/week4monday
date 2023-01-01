#include <iostream>
using namespace std;
void greaternumber(int number1, int number2);
void lessnumber(int usernumber1, int usernumber2);
void equalnumber(int usernumber1, int usernumber2);

main(){

int usernumber1;
int usernumber2;
int choise;
while(true)
{
    cout<<"Enter choise (1_3)";
    cin>>choise;
    cout<<"Enter your first  number  :";
    cin>>usernumber1;
    cout<<"Enter second number  number  :";
     cin>>usernumber2;
    
    if(choise ==1){
     
    greaternumber(usernumber1, usernumber2);}
    if (choise ==2) 
    {lessnumber(usernumber1, usernumber2);}
    if (choise ==3)
   {equalnumber(usernumber1, usernumber2);}
}

}
void greaternumber(int usernumber1, int usernumber2)
{
if(usernumber1 >usernumber2){
        cout <<"Your number    :"<<usernumber1<<"     is greater"<<endl;
}
if(usernumber2 > usernumber1){
       cout << "Your number is   : "<<usernumber2<<"    is greater"<<endl;}

}
void lessnumber(int usernumber1, int usernumber2)
{
if(usernumber1 <usernumber2){
        cout <<"Your number    :"<<usernumber1<<"     is lesser"<<endl;
}
if(usernumber2 < usernumber1){
       cout << "Your number is   : "<<usernumber2<<"    is lesser"<<endl;}

}

void equalnumber(int usernumber1, int usernumber2)
{
if(usernumber1 = usernumber2){
        cout <<"Your number    :"<<usernumber1<<"     is equal"<<endl;}
}
