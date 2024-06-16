//Estudiante: Cifuentes González Elian
//Fecha de entrega: 16/06/2024
//Curso: 1ro de TI

//1) Diseñe la función que devuelva el resultado de la serie siguiente: 1 -2 + 3 - 4 + 5  - 6 + 7 .... n

#include <iostream>

using namespace std;

//Función que calcula la serie 1 - 2 + 3 - 4 + 5 - 6 + 7 ....n
int SumaAlterna(int n)
{
int resultado;

    for (int k = 1; k <= n; k++)
    {
        if (k % 2 == 0)
        {
        resultado -= k;
        }
        else 
        { 
           resultado += k;

        }
    }
    return resultado;

}

int main() 
{
    int limite = 7;
    int resultado = SumaAlterna (limite);
    cout << endl << "El resultado de la serie es: " << resultado;


    return 0;
}
