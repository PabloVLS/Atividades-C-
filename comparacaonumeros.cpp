#include <iostream>

using namespace std;

int soma(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);

int main()
{
    int a,b;
    cout << "Digite o primeiro numero" << endl;
    cin>> a;

    cout << "Digite o segundo numero" << endl;
    cin>> b;

    if(a == b){
        cout << "Resultado da soma � : " << soma(a,b) << endl;
    }
    if(a < b){
        cout << "Resultado da subtr��o: " << subtrair(a,b) << endl;
    }

    if(a > b){
        cout << "Resultado da multiplica��o: " << multiplicar(a, b) << endl;
    }

    return 0;
}

int soma(int a , int b){
    return a + b;
}

int subtrair(int a , int b){
    return a - b;
}

int multiplicar(int a , int b){
    return a * b;
}
