#include <iostream>
using namespace std;


void moreage(int moreage1);
void lessage(int lessage1);

main(){
int number;
cout<< "Enter your  age  :";
cin>>number;
moreage (number);
lessage (number);




}
void moreage(int moreage1)
{
if(moreage1 >=18)
{cout << "Your are eligible "<<endl;}


}
 void lessage(int lessage1)
{
if(lessage1 < 18){
cout << "you are not eligible  "<<endl;}

}









