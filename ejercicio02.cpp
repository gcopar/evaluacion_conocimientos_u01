//Nombre: Gustavo Mario de la Cruz Copa Romero
//Codigo: 2021-177006

#include <iostream>
using namespace std;

int main(){
    int n1, n2, c, i, control;

    do
    {
        cout<<"Ingrese el primer numero: "; cin>>n1;
        cout<<"Ingrese el segundo numero: "; cin>>n2;

        c = 0;
        i = 1;
        if (n1 > 0 and n2 > 0)
        {
            while (i<=n1 and i<=n2)
            {
                if (n1 % i == 0 and n2 % i == 0)
                {
                    c = c + 1;
                }
                i = i + 1;
            }

            if (c > 1)
            {
                cout<<"No son PESI"<<endl;
            }else{
                cout<<"Son PESI"<<endl;
            }
            control = 1;
        }else{
            cout<<"Ingrese numeros iguales o mayores que 1."<<endl;
            control = 0;
        }
        
    } while (control != 1);

    return 0;
}