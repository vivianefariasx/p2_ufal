#include <iostream>
#include <string>

using namespace std;

int main()
{
	string PlainText, Chave;
	int i2=0;
	
		for (int i=0; i<PlainText.length(); i++) //Vamos passar caractere por caractere da string
		{
		//Aqui você faz um método criptografico, vou exemplificar com um "xor"

		if (i2 == Chave.length()) i2 = 0; //com isso, você vai repetir a chave pela string

		//Vamos fazer um XOR com os valores ascii do caractere da texto claro, com o caractere da chave correspondente.
		cout << (int(PlainText[i]) ^ int(Chave[i2])) << endl;

		}   
	return 0;
}
