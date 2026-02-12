#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream f("data.csv");
    string line;
    while(getline(f,line))
        cout<<line<<"\n";
}
