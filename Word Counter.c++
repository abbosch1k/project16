#include <iostream>
#include <sstream>
using namespace std;

int main(){
    string text="hello world from cpp";
    stringstream ss(text);
    string word; int count=0;
    while(ss>>word) count++;
    cout<<count;
}
