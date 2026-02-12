#include <iostream>
#include <thread>
using namespace std;

int main(){
    for(int i=5;i>0;i--){
        cout<<i<<"\n";
        this_thread::sleep_for(chrono::seconds(1));
    }
}
