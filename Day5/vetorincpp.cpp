#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<string>cars={"toyota","mazda","vw","benz","lambo"};
    cout<<cars[0]<<" "<<cars[4]<<endl;
    cout<<endl;
    cars.push_back("bmw");
    cars.push_back("volvo");
    cars.pop_back();

    for(const string& brand : cars){
        cout<<brand<<" "<<endl;
    }
    cout<<endl;
    string fruits[3]={"mango","banana","melon"};
    for (string arrays : fruits){
        cout << arrays<< " "<<endl;
    }
    cout<<fruits[0]<<" ";
    return 0;
}
