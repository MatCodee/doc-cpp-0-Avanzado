
#include <iostream>
using namespace std;
void fun(int);
void fun(double);
void fun(int i) { cout << "Value of i is : " << i << endl; }
void fun(double j)
{
    cout << "Value of j is : " << j << endl;
}

//Nota:
//todas las constantes de coma flotante se tratan como dobles, no como flotantes
int main()
{
    fun(12);
    fun(1.2);
    return 0;
}
 