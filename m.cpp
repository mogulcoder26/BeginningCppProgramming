#include<iostream>
#include<vector>
#include<cctype>
#include<string>
using namespace std;
int main(){

string s1 = "xandini xinghal";

for(int i=97;i<=122;i++){
    s1[0]=static_cast<char>(i);
    s1[8]=static_cast<char>(i);
    cout<<s1<<endl;
}

return 0;
}