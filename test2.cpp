#include <iostream>
#include <string.h>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main(){

    string mes1{"hello it's start of program"};
    cout << mes1 << endl;
    string mes2 = mes1;
    mes2[3] = '2';
    cout << endl << mes1;
    cout << endl << mes2 << endl;

    for(char& ch: mes2){
        ch = 'l';
    }
    for(char ch: mes2){
        ch = '1';
    }
    cout << mes2 << endl;
    cout << mes1;


    string in_text;
    cout << "\nInput some text later: ";
    getline(cin, in_text);
    system("clear");
    cout << "Put text: " << in_text << endl;

    cout << "end of program..." << endl;
    return 0;
}