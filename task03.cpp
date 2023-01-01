#include <iostream>
using namespace std;


void pass(int pass);
void fail(int fail);

main(){
int number;
cout<< "Enter your  number   :";
cin>>number;
pass (number);
fail (number);


}
void pass(int pass)
{
if(pass >=50)
{cout << "Your are pass "<<endl;}


}
 void fail(int fail)
{
if(fail < 50){
cout << "you are fail  "<<endl;}

}









