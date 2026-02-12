#include <iostream>
#include <chrono>
using namespace std;

int main(){
    auto s=chrono::steady_clock::now();
    for(int i=0;i<1000000;i++);
    auto e=chrono::steady_clock::now();
    cout<<chrono::duration_cast<chrono::milliseconds>(e-s).count();
}
