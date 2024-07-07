#include<iostream>
#include<string>
using namespace std;

string removeDublicates(string str1){
    string ans = "";
    int index = 0;

    while(index < str1.length()){
        // ans ka right most character and string ka current character

        if(ans.length() > 0 && ans[ans.length()-1] == str1[index]){
                // pop from answer 
                ans.pop_back();
        }
       else{
         ans.push_back(str1[index]);
       }
        index++;
    }
    return ans;
}

int main()
{
   // reomove all Adjacent Dublicates in a string

    string str1 = "abbaca"; // -> ca

    string answer = removeDublicates( str1);
    cout<<"answer is "<<answer;

    return 0;
}