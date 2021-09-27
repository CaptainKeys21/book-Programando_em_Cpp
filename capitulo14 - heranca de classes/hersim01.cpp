//herism01.cpp
#include <iostream>
#include <cstring>
using namespace std;
class carro                     //Declaração da classe-base carro
{
    public:
        carro(char *, char *);  //Protótipo do construtor
        char marca[12];
        char modelo[7];
};
class novo_carro : public carro //Declaração da classe derivada novo_carro
{
    public:
        novo_carro(char *, char*, int, char *, float);  //Protótipo do construtor
        void exibe_tudo();
    private:
        int anofab;
        char placa[9];
        float valor;
};
int main()
{
    //Cria o objeto ncarro1, chamando o construtor
    novo_carro ncarro1("Ford", "Focus", 2002, "NUL-3333", 35000.00);
    //Método da classe derivada exibe variáveis públicas da classe-base
    ncarro1.exibe_tudo();
    return 0;
}
//Métodos da classe-base carro
carro :: carro (char * marca1, char * modelo1)  //Definição do construtor
{
    strcpy(marca, marca1);
    strcpy(modelo, modelo1);
}
//Métodos da classe derivada novo_carro
void novo_carro :: exibe_tudo()     //Definição do método exibe_tudo()
{
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Ano: " << anofab << endl;
    cout << "Placa: " << placa << endl;
    cout << "Valor: " << valor << endl;
}
//Definição do construtor. Chama o construtor da classe-base
novo_carro :: novo_carro(char * marca1, char * modelo1, int ano1, char * placa1, float valor1) : carro(marca1, modelo1)
{
    anofab = ano1;
    strcpy(placa, placa1);
    valor = valor1;
}