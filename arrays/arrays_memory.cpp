#include <iostream>
using namespace std;

void example1() {
    int array[] = {1,2,3,4,5};

    for(int i=0;i<5;i++) {
        cout << array[i]  << " --> " << &array[i] << endl;
    }
}

void example2() {
    int array1[] = {1,2,3,4,5};
    cout << array1[0] << endl;
    cout << array1[1] << endl;
    cout << &array1[0] << endl;
    cout << &*(array1-10)<< endl;
    for(int i=10;i>0;i--){
        cout << *(array1 - i) << "  --> " << &*(array1 - i) << endl;
    }
}


int main() {
    example2();

    return 0;
}