#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream file("sometext.txt");
    ofstream file1("sometext(modify).txt");
    string s;
    while(getline(file,s,'\n')){
        for(char c:s){
            char liter_down = c + 32;
            file1<<liter_down;
        }
        file1<<endl;
    }
    file.close();
    file1.close();
    return 0;
}

