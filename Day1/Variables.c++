#include <iostream>
#include <string>
using namespace std;
int main(){
string name;
int age ;
double height;
cout<<"Enter your name,age and height"<<endl;
getline(cin,name);
cin>>age>>height;
cout<<"name: " name<<"age:" age<<"height:" height;
return 0;
}