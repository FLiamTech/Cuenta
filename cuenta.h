#ifndef CUENTA_H
#define CUENTA_H
#include<string>

using namespace std;
class cuenta
{
private:
    string titular;
    double monto;
public:
    cuenta();
    cuenta(string t, double m);
    void ingreso(double cantidad);
    void retiro(double cantidad);
    void balance();
};

#endif // CUENTA_H
