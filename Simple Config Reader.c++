#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream f("config.txt");
    string line;
    while(getline(f,line))
        cout<<line<<"\n";
}
