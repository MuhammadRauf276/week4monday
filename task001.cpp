#include <iostream>
using namespace std;
void iseligible(int userage);

main (){

int userage;
while(true){cout <<"Enter your age   : ";
cin>>userage;
iseligible(userage);
}





}
 void iseligible(int age)
{
if(age >=18){
cout<<"you are Eligible for vote  "<<endl;
}
if(age <18){
cout <<"You are not eligible  "<<endl;
}


}