#include <iostream> <locale> 
using namespace std;


//atv01
/*

int main() {
	setlocale(LC_ALL, "pt_BR.UTF-8");

	int numero;
	cout << "Digite um número: \n";
	cin >> numero;

	switch (numero)
	{
	case 1:
		cout << "Domingo";
		break;
	case 2:
		cout << "Segunda-feira";
		break;
	case 3:
		cout << "Terça-feira";
		break;
	case 4:
		cout << "Quarta-feira";
		break;
	case 5:
		cout << "Quinta-feira";
		break;
	case 6:
		cout << "Sexta-feira";
		break;
	default:
		cout << "Dia Inválido";
		break;
	}
}
*/



//atv02
/*
int main() {

	float numero1;
	float numero2;
	char operacao;
	int result;
	cout << "Informe dois números: \n";
	cout << "Numero 1: ";
	cin >> numero1;
	cout << "Numero 2: ";
	cin >> numero2;
	cout << "\n";
	cout << "Agora, informe qual operação matemática ( +,-,* ou / ) você deseja usar: \n";
	cout << "Operação matemática: ";
	cin >> operacao;

	switch (operacao)
	{
	case '-':
		result = numero1 - numero2;
		cout << "O resultado desta operação matemática é: " << result << ::endl;
		break;
	case '+':
		result = numero1 + numero2;
		cout << "O resultado desta operação matemática é: " << result << ::endl;
		break;
	case '*':
		result = numero1 * numero2;
		cout << "O resultado desta operação matemática é: " << result << ::endl;
		break;
	case '/':
		result = numero1 / numero2;
		cout << "O resultado desta operação matemática é: " << result << ::endl;
		break;
	default:
		cout << "Operação matemática desconhecida.";
		break;
	}
}
*/



//atv03
/*
int main() {
	setlocale(LC_ALL, "pt_BR.UTF-8");

	char letra;

	cout << "Digite uma letra: \n";
	cin >> letra;

	switch (letra) {
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
		cout << "A letra " << letra << " é uma vogal.";
		break;
	default:
		cout << "A letra " << letra << " é uma consoante.";
		break;

	}


	
	//	switch (letra)
	//	{
	//	case 'A':
	//		cout << "A letra " << letra << " é uma vogal.";
	//		break;
	//	case 'E':
	//		cout << "A letra " << letra << " é uma vogal.";
	//		break;
	//	case 'I':
	//		cout << "A letra " << letra << " é uma vogal.";
	//		break;
	//	case 'O':
	//		cout << "A letra " << letra << " é uma vogal.";
	//		break;
	//	case 'U':
	//		cout << "A letra " << letra << " é uma vogal.";
	//		break;
	//	default:
	//		cout << "A letra " << letra << " é uma consoante";
	//		break;
	//	}
	
	
}*/

