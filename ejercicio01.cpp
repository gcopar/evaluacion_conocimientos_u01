//Nombre: Gustavo Mario de la Cruz Copa Romero
//Codigo: 2021-177006

#include <iostream>
using namespace std;

int main(){
    int op1, op2, r;
    char op;

    cout<<"Ingresa el primer operando: "; cin>>op1;
    cout<<"Ingresa el segundo operando: "; cin>>op2;
    cout<<"Ingresa la operacion: "; cin>>op;

    switch (op)
    {
    case '+':
        r = op1 + op2;
        break;
    case '-':
        r = op1 - op2;
        break;
    case '*':
        r = op1 * op2;
        break;
    case '/':
        r = op1 / op2;
        break;
    default:
        cout<<"Ingrese un operador valido";
        break;
    }

    cout<<"El resultado de "<<op1<<" "<<op<<" "<<op2<<" es: "<<r<<endl;
    return 0;
}