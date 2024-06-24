//Nombre: Gustavo Mario de la Cruz Copa Romero
//Codigo: 2021-177006

#include <iostream>
using namespace std;

float suma(int a);
int factorial(int b);

int main(){
    int n, control;
    char rpt;
    float sum;
    do
    {
        cout<<"Ingrese la cantidad de sumando: "; cin>>n;
        sum = suma(n);
        cout<<"La sumatoria es: "<<sum<<endl;

        cout<<"¿Quieres calcular otra sumatoria? (S/N): "; cin>>rpt;

        switch (rpt)
        {
        case 'S':
        case 's':
            control = 1;
            break;
        case 'N':
        case 'n':
            control = 0;
            break;
        default:
            cout<<"Ingresaste una respuesta no valida, se cerrara el programa.";
            control = 0;
            break;
        }
    } while (control != 0);
    

    return 0;
}

float suma(int a){
    float s;
    s = 0;

    for (int i = 1; i <= a; i++)
    {
        s = s + float(factorial(i))/(2*i);
    }
    return s;
}

int factorial(int b){
    int f;

    f = 1;
    for (int i = 2; i <= b; i++)
    {
        f = f * i;
    }
    return f;
}