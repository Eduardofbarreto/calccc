#include <iostream>

    int soma(int num1, int num2){
        return num1 + num2;
    }

    int subt(int num1, int num2){
        return num1 - num2;
    }

int	main(){
    
    int num1, num2, resultadoSoma, resultadoSubtracao;

    
    std::cout<<"Bem-vindos a calculadora de Edu F. Barreto!"<<std::endl;

    std::cout<<"Digite um valor para num1: ";
    std::cin>>num1;

    std::cout<<"Digite um valor para num2: ";
    std::cin>>num2;

    //Blocos de cálculos
    resultadoSoma = soma(num1, num2);
    resultadoSubtracao = subt(num1, num2);
    
    //Blocos de resultados para o usuário
    std::cout<<"\n";
    std::cout<<"O resultado da soma e: "<<resultadoSoma<<std::endl;
    std::cout<<"O resultado da subtracao e: "<<resultadoSubtracao<<std::endl;
    std::cout<<"\n"<<std::endl;

    return 0;
}

