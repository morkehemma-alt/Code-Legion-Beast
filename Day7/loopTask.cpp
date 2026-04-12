#include<iostream>

using namespace std;

int main(){
    int TimeTable;
    int numguess;
    cout<<"Enter a number for a multiplication table"<<endl;
    cin>>TimeTable;

for(int i=1;i<=12;i++){
    cout<<TimeTable<<"*"<<i<<"="<<TimeTable*i<<endl;
}
    cout<<"Guess a number"<<endl;
do{

    cin>>numguess;

}while(numguess != 5);
cout<<"Bingo"<<endl;

    return 0;
}
