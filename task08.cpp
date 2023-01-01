#include <iostream>
using namespace std;
void userdis(string day,float amount );



main()
{
string day;
float purchaseamount;
 while(true){
 cout<<"Enter your day";
 cin>>day;
 cout <<"Enter your purchase amount";
 cin>> purchaseamount;
 userdis(day,purchaseamount);
           }
  
}
void userdis(string day,float amount )
{ 
  float discount;
 
 if(day =="sunday")
  {
  discount = amount - ((amount*10)/100); 
cout <<"The amount to  be payed is" <<discount;
  }
  if (day!="sunday")
  {
  discount = amount;
  cout <<"The amount is "<<discount;

   }


}