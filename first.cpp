#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name = "suraj kumar";
    cout<<name<<endl;

    cout<<name.length()<<endl;
    bool val = name.empty();
    cout<<val<<endl;
    cout<<name.at(0)<<endl;
    cout<<name.front()<<endl;
    cout<<name.back()<<endl;


    string str1 = "Ram";
    string str2 = "Shyam";
    cout<<str1.append(str2);
    
    return 0;
}