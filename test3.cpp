#include <iostream>


using std::cout;
using std::cin;
using std::endl;

int main(){

    int* p{};
    double* p2{};
    cout << sizeof(p) << " " << sizeof(p2) << endl;

    int num = 123;
    int* p3{&num};
    cout << "adress: " << p3 << " num = " << *p3 << endl;

    int mass[10] {1,2,3,4,5,6,7,8,9,10};
    for(int* pmass = &mass[0]; pmass != &mass[std::size(mass)-1]; pmass++){
        if(*pmass == 7)
            *pmass = 1111;
        cout << *pmass << " ";
    }
    cout << endl;

    cout << "end of the program...\n";
    return 0;
}
