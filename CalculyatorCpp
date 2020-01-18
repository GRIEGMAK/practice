#include <iostream>
#include <math.h>
using namespace std;
float factorial(float a)
{
    int x=1, i;
    for(i=1;i<=a;i++){x = x*i;}
    a = x;
    x = 1;
    return a;
}
float log10x(float a)
{
    a = log10(a);
    return a;
}
float ln(float a)
{
    a = log(a);
    return a;
}
int main()
{
    float a, b;
    char z;
    int j = 1, x, k=0;
    while (k!=1){
        cout << "\n2 - calculator \n1 - exit\n";
        cin >> x;
    if (x==1){
        return 0;}
    else{
        cout << "\n2 - calculate \n1 - menu\n";
        cin >> x;
        if(x == 1)
            {
                cout << "press key 1 if ln(a) = x, \n press any key if log10(a) = x\n";
                cin >> j;
            }
        else
        {
            cout << "Input: l(log)/!/+/-/*//\n";
            cin >> z;
            switch(z)
            {
            case 'l':
                if (j = 1){cout << "ln(";cin >> a; cout << ") = " << ln(a) << ";";}
                else{cout << "log10(";cin >> a; cout << ") = " << log10x(a) << ";";}
                break;
            case '!':
                cin >> a; cout << "! = " << factorial(a) << "\n";
                break;
            case '-':
                cin >> a; cout << " - "; cin >> b; cout << " = "<< a - b <<"\n";
                break;
            case '+':
                cin >> a; cout << " + "; cin >> b; cout << " = "<< a + b <<"\n";
                break;
            case '*':
                cin >> a; cout << " * "; cin >> b; cout << " = "<< a * b <<"\n";
                break;
            case '/':
                cin >> a; cout << " / "; cin >> b; cout << " = "<< a / b <<"\n";
                break;
            default:
                cout << "Error\n";
            }
        }
    }}
    return 0;
}

