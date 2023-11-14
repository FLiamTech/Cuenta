#include <iostream>
#include<cuenta.h>

using namespace std;

int main(){
    cout << "= = = MI BANCO = = =\n" << endl;
    cuenta cuenta01("Juan Perez", 50);
    cuenta cuenta02("Andrea Boca", 200);
    cuenta01.ingreso(10);
    cuenta02.ingreso(-150);
    cuenta01.balance();
    cout<<endl;
    cuenta02.balance();
    cout << "\n-----------------------\n";
    cuenta01.retiro(100);
    cuenta02.retiro(120);
    cuenta01.balance();
    cout<<endl;
    cuenta02.balance();
    return 0;
}

