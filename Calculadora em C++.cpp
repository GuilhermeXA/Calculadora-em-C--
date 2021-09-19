//Calculadora usando linguagem C++

//Incluindo bibliotecas
#include <iostream>
#include <locale>

using namespace std;

//Função principal
int main()
{
	//Fazendo com que o c++ reconheça os sinais em português (Ex: ~ , ^ , Entre outros)
	setlocale(LC_ALL,"Portuguese");
	
	//Declarando variáveis
	float num1;
	float num2;
	int sinal;
	float soma;
	float subtracao;
	float multiplicacao;
	float divisao;
	
	//Perguntando ao usuário o primeiro valor
	cout << "Digite um valor: \n";
	cin >> num1;
	
	//Perguntando ao usuário o segundo valor
	cout << "Digite outro valor: \n";
	cin >> num2;
	
	//Apresentando ao usuário as opções de operação
	cout << "Escolha uma opção de operação:\n";
	cout << "[ 1 ] Soma\n";
	cout << "[ 2 ] Subtração\n";
	cout << "[ 3 ] Multiplicação\n";
	cout << "[ 4 ] Divisão\n";
	
	//Perguntando ao usuário qual a operação desejada
	cout << "Digite o número correspondente a operação desejada\n";
	cin >> sinal;
	
	//Atribuindo valores as variáveis (Fazendo as contas)
	soma = num1 + num2;
	subtracao = num1 - num2;
	multiplicacao = num1 * num2;
	divisao = num1 / num2;
	
	//Verificando qual a opção o usuário escolheu e Apresentando o resultado ao usuário
	if (sinal == 1){
		cout << "A soma de " << num1 << " + " << num2 << " = " << soma;
	}
	else if (sinal == 2){
		cout << "A subtracao de " << num1 << " + " << num2 << " = " << subtracao;
	}
	else if (sinal == 3){
		cout << "A multiplicação de " << num1 << " x " << num2 << " = " << multiplicacao;
	}
	else if (sinal == 4){
		cout << "A divisão de " << num1 << " / " << num2 << " = " << divisao;
	}
}
