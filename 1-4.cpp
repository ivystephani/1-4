#include <iostream>

using namespace std;

main(){
	
setlocale( LC_ALL, "portuguese");

	string nome;
	int idade;

	cout << "Informe seu nome:";	
	cin >> nome;
	
	cout << "Informe a sua idade:";	
	cin >> idade;

if (idade <18) {
	cout << nome<<",Você é menor de idade";
		
} else if (idade >18){
	cout << nome<< ",você é adulto";
	
}else if (idade >65){
	cout << nome<< ",você é idoso";
}
}
	 
