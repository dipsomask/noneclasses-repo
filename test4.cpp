#include <iostream>
#include <string.h>

using unsi = unsigned int;
using std::cout;
using std::cin;
using std::endl;
using str = std::string;

void print_out();
int elem_on_index(int*, unsi);



int main(int argc, char* argv[]){

    cout << "count of arguments=" << argc;
    for(auto i = 0; i < argc; i++){
        cout << argv[i] << " ";
    }

    cout << endl << argv[1] << endl;

    cout << endl << (str(argv[1]) == str("png")?"png format picture":"none type of picture format") << endl;

    print_out();

    int mass[] = {1, 2, 3, 4, 5};
    cout << "mass[3]=" << elem_on_index(&(mass[0]), 3) << endl;


    int size{};
    cout << "\nInput mass2 size: "; cin >> size;
    int* mass2 = new int[(size==0?10:size)];
    cout << endl;
    for(int i = 0; i<size; i++){
        cout << mass2[i] << " ";
    }
    delete[] mass2;
    cout << endl << mass2 << endl;
    mass2 = nullptr;
    cout << endl << mass2 << endl;

    int rows = 4;
    int cols = 12;
    int** table = new int*[rows];
    for(int i = 0; i < rows; i++){
        table[i] = new int[cols];
        for(int j = 0; j<cols; j++){
            table[i][j] = i*j;
            cout << table[i][j] << "\t";
        }
        cout << endl;
    }

    for(int i = 0; i < rows; i++){
        delete[] table[i];
        table[i] = nullptr;
    }
    delete[] table;
    table = nullptr;

    cout << "end of the program...\n";
    return 0;
}

void print_out(){
    cout << 1 << endl;
}

int elem_on_index(int* mass, unsi index){
    return *(mass + index); 
}
