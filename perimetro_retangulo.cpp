#include <iostream>
using namespace std;
//Programa cálculo de perímetro de um retângulo

//Variáveis
float b, h, perimetro;

//constantes
const int lados = 4;
const float conversao = 0.01;

int main(){
    //Coletando as medidas do retângulo
    cout<<"Informe o tamanho da base em cm: ";
    cin>>b;
        if (b <= 0){
            cout<<"erro, o valor deve ser positivo e maior que zero\n";
            return 0;
        }
    cout<<"Informe o tamanho da altura em cm: ";
    cin>>h;
        if (h <= 0){
            cout<<"erro, o valor deve ser positivo e maior que zero\n";
            return 0;
        }
    //Cálculo de perímetro
    perimetro = 2 * (b+h);

    cout<<"perimetro do retangulo em cm: "<<perimetro<<"cm\n";
    cout<<"Perimetro do retangulo em M: "<<perimetro * conversao<<"m\n";
    return 0;
}

