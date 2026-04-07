#include <iostream>

using namespace std;
int main(){
    bool headshot = true;
    bool spammer = false;

    if(headshot == spammer)
        {
        cout<<(true)<<endl;
    }
    else
    {
        cout<<(false)<<endl;
    }
    if (spammer!= headshot)
        {
        cout<<(true)<<endl;
    }
    else
    {
        cout<<(false)<<endl;
    }
    if(spammer && headshot)
        {
        cout << (true)<<endl;
    }
    else
    {
        cout<<(false)<<endl;
    }
    if(spammer ! headshot)
        {
        cout<<(false)<<endl;
    }
    else
    {
        cout<<(true)<<endl;
    }
    if(headshot || spammer)
        {
        cout << (true)<<endl;
    }
    else
    {
         cout<<(false)<<endl;
    }

    return 0;
}
