#include <iostream>


int	main(){
    
    int num1, num2, soma;

    
    std::cout<<"Bem-vindos a calculadora de Edu F. Barreto!"<<std::endl;

    std::cout<<"Digite um valor para num1: ";
    std::cin>>num1;

    std::cout<<"Digite um valor para num2: ";
    std::cin>>num2;

    //Blocos de cálculos
    soma = num1 + num2;
    
    //Blocos de resultados para o usuário
    std::cout<<"\n";
    std::cout<<"O resultado da soma e: "<<resultadoSoma<<std::endl;
    std::cout<<"\n"<<std::endl;

    return 0;
}
