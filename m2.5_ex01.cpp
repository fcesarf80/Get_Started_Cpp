#include <iostream>
using namespace std;
int main(){
    //declaração de variáveis
    float base, altura, perimetro, area;
    //Leitura dos dados de entrada
    cout<<"How height is it?";
    cin>>altura;

    cout<<"base?";
    cin>>base;
    //Calcular a área e o perímetro
    area=base*altura;
    perimetro=2*base+2*altura;

    //Imprimir o resultado
    cout<<"A área é ="<<area<<endl;
    cout<<"O perímetro é ="<<perimetro;

        return 0;
}