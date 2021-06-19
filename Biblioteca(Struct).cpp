#include <iostream>
#include <string.h>
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h> // fflush(stdin); gets e do puts
using namespace std;
struct dados_biblioteca
  {
  	int id;
    char genero[30]; //use o gets para ler e puts para imprimir
    int qtde_livros;
    int ano;
  };
dados_biblioteca biblioteca[5]; /*Criando a variável biblioteca que será do tipo struct dados_biblioteca */
int i,qtde;
main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n ==========================================";
	cout<<"\n DADOS BIBLIOTECA";
	cout<<"\n ==========================================";
	cout<<"\n BEM VINDO A PAGINA DE DADOS DA BIBLIOTECA! ";
	cout<<"\n QUANTOS GENEROS VOCÊ DESEJA CADASTRAR OS DADOS? ";
	cin>>qtde;
	for (i=0; i<qtde;i++)
	{
		cout<<"\n ==========================================";
		cout<<"\n INFORME OS DADOS DO "<<i+1<< "º GENERO:";
  		cout<<"\n ==========================================";
  		cout<<"\n ID DO GENERO: ";
		fflush(stdin); //Para limpar o buffer em Windows, use o: fflush(stdin)
		do{ //início validação do id do genero
  		cin>>biblioteca[i].id; 
  		if (biblioteca[i].id<1 || biblioteca[i].id>20 )
  			{
  	  		cout<<"\n FAVOR DIGITAR UMA ID VÁLIDA (NÚMEROS ENTRE 1 E 20 SÃO VÁLIDOS)";
	  		cout<<"\n FAVOR DIGITAR NOVAMENTE A ID:   ";
  	  		cin>>biblioteca[i].id;	 	  	
	 		}
  		}while (biblioteca[i].id<1 || biblioteca[i].id>20 ); //fim validação do id do genero
		cout<<"\n NOME DO GENERO: ";
		fflush(stdin); //Para limpar o buffer em Windows, use o: fflush(stdin)
  		gets(biblioteca[i].genero);
  		cout<<" \n LIVROS LIDOS: ";
 		fflush(stdin);
  		cin>>biblioteca[i].qtde_livros;
  		cout<<" \n ANO: ";
 		fflush(stdin);
 		do{ //início validação do ano
  		cin>>biblioteca[i].ano;
  		if (biblioteca[i].ano<1995 || biblioteca[i].ano>2021 )
  			{
  	  		cout<<"\n SÓ É POSSÍVEL CADASTRAR DADOS A PARTIR DE 1995 E 2021 ";
	  		cout<<"\n FAVOR DIGITAR NOVAMENTE O ANO NOVAMENTE:   ";
  	  		cin>>biblioteca[i].ano;	 	  	
	 		}
  		}while (biblioteca[i].ano<1995 || biblioteca[i].ano>2021 ); //fim validação do ano
	}
	cout<<"\n ==========================================";
  	cout<<"\n\n --------- DADOS DOS GENEROS ---------";
  	cout<<"\n ==========================================";
  		for (i=0; i<qtde;i++)
  			{
  				cout<<"\n\n ____________________________________________________";
  				cout<<"\n ID GENERO: " <<  biblioteca[i].id; 
  				cout<<"\n GENERO: ";
  				puts(biblioteca[i].genero);
  				cout<<"\n QUANTIDADE DE LIVROS LIDOS: " <<biblioteca[i].qtde_livros;
  				cout<<"\n ANO: " << biblioteca[i].ano;
			}
}

