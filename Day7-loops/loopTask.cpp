#include<iostream>

using namespace std;

int main(){
    int TimeTable;

    cout<<"Enter a number for a multiplication table"<<endl;
    cin>>TimeTable;

for(int i=1;i<=12;i++){
    cout<<TimeTable<<"*"<<i<<"="<<TimeTable*i<<endl;
}

 return 0;
 }
