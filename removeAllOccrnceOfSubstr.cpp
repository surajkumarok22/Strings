#include<iostream>
#include<string>
using namespace std;


 string   removeOccurance(string str, string part){
    while(str.find(part) != string::npos ){
        str.erase(str.find(part),part.length());
    }
    return str;
 }
int main()
{
    //    remove all occurance of substring
    // str = "abbabcddabcbbbabc"
    // part = abc;
    // output = abbddbbb;

    string str = "abcabcabcabcabcdef";
    string part = "abc";
    cout<<removeOccurance(str, part);
    return 0;
}