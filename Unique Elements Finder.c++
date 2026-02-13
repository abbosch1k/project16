#include <iostream>
#include <set>
using namespace std;

int main(){
    int arr[]={1,2,2,3,3,4};
    set<int> s(arr, arr+6);
    for(int x:s) cout<<x<<" ";
}
