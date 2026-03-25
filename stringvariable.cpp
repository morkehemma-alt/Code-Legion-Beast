#include <iostream>
#include <string>
using namespace std;

int main(){
    string name = "Emmanuel";
    name.length();
    cout << name[0]<<" "<<name[2]<<endl;
    name.substr();
    cout <<name.substr(0,3)<<" "<<name.substr(5,3)<< endl;


    return 0;
}
