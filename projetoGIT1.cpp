#include <iostream>
#include<string>
using namespace std;


/*
	Conta todas as letras 'letra' contidas em 'texto'
*/
int contaLetras(char letra, string texto)
{
    int qtdletras=0, i, qtd;
	qtd=nome_length();
    for(i=0;i<qtd;i++)
    {

		if(texto[i]==letra)
		{
			qtdletras++;
		}
	}
	return qtdletras;
}
}

/*
	Substitui todas as ocorrencias de 'letra1' por 'letra2' contidas em 'texto'
*/
string substituirLetra(char letra1,char letra2, string texto)
{
    int qtd, i;
	qtd=nome.length();
	for(i=0;i<qtd;i++)
	{
		if(texto[i]==letra1)
		{
			texto[i]='letra2';
		}
		return texto;
   }
}

/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
int contaPalavras(string palavra, string texto)
{
    size_t pos = texto.palavra(word, 0);
    while(pos != string::npos)
    {
        cnt++;
        pos = texto.palavra(word, pos+1);
}
    return pos;

}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
string substituirPalavras(string palavra1, string palavra2, string texto)
{
    size_t pos = texto.find(palavra1);
    while(pos != string::npos)
    {
        texto.replace(pos,palavra1.length(),palavra2);
        pos = texto.find(palavra1);
    }
    return texto;

}

int main()
{

	cout << "Entre com o texto para fazer o teste:";
	cout<< "Digite letra:";
	cin.get(letra);
	cin.get(lixo);
	cout<< "Digite texto:";
	getline(cin,texto);
	qtdl=(letra,lixo);
	cout<<"Digite primeira letra:";
	cin.get(letra1);
	cin.get(lixo);
	cout<<"Digite segunda letra:";
	cin.get(letra2);
	cin.get(lixo);
	rtxt=(letra1,letra2,texto);
	cout<<"Digite palavra:";
	getline(cin,palavra);
	qtdls=(palavra,texto);
	cout<<"Digite primeira palavra::";
	getline(cin,palavra1);
	cout<<"Digite segunda palavra::";
	getline(cin,palavra2);
	subs=(palavra1,palavra2,texto);
    return 0;
}
