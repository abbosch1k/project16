#include <iostream>
using namespace std;

int main(){
    string s="hello";
    for(char& c:s) c=toupper(c);
    cout<<s;
}
