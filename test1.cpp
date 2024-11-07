#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using unsl = unsigned long;
using unsi = unsigned int;

int main(){
    cout << "привет си с классами!!" << endl;

    int age (20.4);
    cout << "age = " << age << endl;
    age = 30;
    cout << "age = " << age << endl;

    int age2 (25);
    cout << "midle age = " << static_cast<unsi>((age+age2)/2) << endl;

    unsl with = 60ul;
    long long height = 80ll;
    cout << "height=" << height << " with=" << with << endl;

    long double ld = 1.7E-311;
    cout << ld << endl;


    bool alpha {false};
    cout << "alpha=" << std::boolalpha << alpha << endl;
    cout << "alpha=false? => " << (alpha == 0) << endl;

    cout << "alpha!=false? => " << ((alpha != false)?true:false) << endl;

    int a[] = {1, 2, 3, 4, 5};
    for(int el: a){
        cout << el << endl;
    }

    cout << "\n\n";

    int mass[9][9];

    for(int i{0}; i<9; i++){
        for(int j{0}; j<9; j++){
            mass[i][j] = (i+1)*(j+1);
            cout << mass[i][j] << "\t";
        }
        cout << "\n";
    }

    int el1{sizeof(mass)/sizeof(mass[0][0])}, el2{std::size(mass)}; 
    cout << (el1/el2 >0&&el1/el2==el2?el1:false) << endl;

    char hello1[]{'h', 'e', 'l', 'l', 'o'};
    cout << hello1 << endl;

    return 0;
}