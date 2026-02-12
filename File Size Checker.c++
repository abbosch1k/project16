#include <iostream>
#include <filesystem>
using namespace std;
namespace fs = std::filesystem;

int main(){
    if(fs::exists("a.txt"))
        cout<<fs::file_size("a.txt");
}
