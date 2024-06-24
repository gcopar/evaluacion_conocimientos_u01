//Nombre: Gustavo Mario de la Cruz Copa Romero
//Codigo: 2021-177006

#include <iostream>
using namespace std;

int main(){
    int op1, op2, r, control;
    char op;

    do
    {
        cout<<"Ingresa el primer operando: "; cin>>op1;
        cout<<"Ingresa el segundo operando: "; cin>>op2;
        cout<<"Ingresa la operacion: "; cin>>op;

        switch (op)
        {
        case '+':
            r = op1 + op2;
            control = 1;
            break;
        case '-':
            r = op1 - op2;
            control = 1;
            break;
        case '*':
            r = op1 * op2;
            control = 1;
            break;
        case '/':
            if (op2!=0)
            {
                r = op1 / op2;
                control = 1;
            }else{
                cout<<"Operacion matematica no definida, ingresa un valor diferente a 0 para el denominador."<<endl;
                control = 0;
            }
            break;
        default:
            cout<<"Ingrese un operador valido";
            control = 0;
            break;
        }   
    } while (control != 1);
    
    cout<<"El resultado de "<<op1<<" "<<op<<" "<<op2<<" es: "<<r<<endl;
    return 0;
}