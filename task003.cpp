#include <iostream>
using namespace std;
void printname(string name);
main(){

string username;
while(true){
cout<<"Enter your name  :";
cin>>username;
printname(username);
}



}
void printname(string name)
{
cout<<"your name is" <<name<<endl;
}