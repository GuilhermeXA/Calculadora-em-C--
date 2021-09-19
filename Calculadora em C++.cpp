//Calculadora usando linguagem C++

//Incluindo bibliotecas
#include <iostream>
#include <locale>

using namespace std;

//Fun��o principal
int main()
{
	//Fazendo com que o c++ reconhe�a os sinais em portugu�s (Ex: ~ , ^ , Entre outros)
	setlocale(LC_ALL,"Portuguese");
	
	//Declarando vari�veis
	float num1;
	float num2;
	int sinal;
	float soma;
	float subtracao;
	float multiplicacao;
	float divisao;
	
	//Perguntando ao usu�rio o primeiro valor
	cout << "Digite um valor: \n";
	cin >> num1;
	
	//Perguntando ao usu�rio o segundo valor
	cout << "Digite outro valor: \n";
	cin >> num2;
	
	//Apresentando ao usu�rio as op��es de opera��o
	cout << "Escolha uma op��o de opera��o:\n";
	cout << "[ 1 ] Soma\n";
	cout << "[ 2 ] Subtra��o\n";
	cout << "[ 3 ] Multiplica��o\n";
	cout << "[ 4 ] Divis�o\n";
	
	//Perguntando ao usu�rio qual a opera��o desejada
	cout << "Digite o n�mero correspondente a opera��o desejada\n";
	cin >> sinal;
	
	//Atribuindo valores as vari�veis (Fazendo as contas)
	soma = num1 + num2;
	subtracao = num1 - num2;
	multiplicacao = num1 * num2;
	divisao = num1 / num2;
	
	//Verificando qual a op��o o usu�rio escolheu e Apresentando o resultado ao usu�rio
	if (sinal == 1){
		cout << "A soma de " << num1 << " + " << num2 << " = " << soma;
	}
	else if (sinal == 2){
		cout << "A subtracao de " << num1 << " + " << num2 << " = " << subtracao;
	}
	else if (sinal == 3){
		cout << "A multiplica��o de " << num1 << " x " << num2 << " = " << multiplicacao;
	}
	else if (sinal == 4){
		cout << "A divis�o de " << num1 << " / " << num2 << " = " << divisao;
	}
}
