#include <iostream>
#include <string>
#include "headers.h"

using namespace std;

string hi;

int main() {
        hello();
        cout<<endl;
        string cut = hi.substr(0, 7);
        string name;
        while (name != "stop"){
             cin>>name;
             cout << cut << name << "!" << endl;    
        }
        return 0;
}  
