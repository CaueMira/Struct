#include <iostream>
#include <string.h>
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h> // fflush(stdin); gets e do puts
using namespace std;
struct dados_cliente
  {
  	int id;
    char nome[100]; //use o gets para ler e puts para imprimir
    int dia_nasc;
    int mes_nasc;
    int ano_nasc;
    char email[254];
    char profissao[50];
    char sexo [15];
  };
dados_cliente cliente[51]; /*Criando a vari�vel cliente que ser� do tipo struct dados_cliente */
int i,qtde;
main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n ==========================================";
	cout<<"\n CADASTRO DE CLIENTE";
	cout<<"\n ==========================================";
	cout<<"\n BEM VINDO A PAGINA DE CADASTRO DE CLIENTES! ";
	cout<<"\n QUANTOS CLIENTES VOC� DESEJA CADASTRAR UMA UNICA VEZ? ";
	cin>>qtde;
	for (i=0; i<qtde;i++)
	{
		cout<<"\n ==========================================";
		cout<<"\n INFORME OS DADOS DO "<<i+1<< "� CLIENTE:";
  		cout<<"\n ==========================================";
  		cout<<"\n ID DO CLIENTE: ";
		fflush(stdin); //Para limpar o buffer em Windows, use o: fflush(stdin)
		do{ //in�cio valida��o do id do usu�rio
  		cin>>cliente[i].id; 
  		if (cliente[i].id<1 || cliente[i].id>50 )
  			{
  	  		cout<<"\n FAVOR DIGITAR UMA ID V�LIDA (N�MEROS ENTRE 1 E 50 S�O V�LIDOS)";
	  		cout<<"\n FAVOR DIGITAR NOVAMENTE A ID:   ";
  	  		cin>>cliente[i].id;	 	  	
	 		}
  		}while (cliente[i].id<1 || cliente[i].id>50 ); //fim valida��o do id do usu�rio
		cout<<"\n NOME DO CLIENTE: ";
		fflush(stdin); //Para limpar o buffer em Windows, use o: fflush(stdin)
  		gets(cliente[i].nome);
  		cout<<" \n DIA DE NASCIMENTO: ";
 		fflush(stdin);
 		do{ //in�cio valida��o do dia
  		cin>>cliente[i].dia_nasc;
  		if (cliente[i].dia_nasc<1 || cliente[i].dia_nasc>31 )
  			{
  	  		cout<<"\n FAVOR DIGITAR UM DIA V�LIDO (S�O V�LIDOS DIAS ENTRE 1 E 31)";
	  		cout<<"\n FAVOR DIGITAR NOVAMENTE O DIA DE NASCIMENTO:   ";
  	  		cin>>cliente[i].dia_nasc;	 	  	
	 		}
  		}while (cliente[i].dia_nasc<1 || cliente[i].dia_nasc>31 ); //fim valida��o do dia
  		cout<<" \n M�S DE NASCIMENTO: ";
 		fflush(stdin);
 		do{ //in�cio valida��o do m�s
  		cin>>cliente[i].mes_nasc;
  		if (cliente[i].mes_nasc<1 || cliente[i].mes_nasc>12 )
  			{
  	  		cout<<"\n FAVOR DIGITAR UM M�S V�LIDO (S�O V�LIDOS DE M�S 1 A 12)";
	  		cout<<"\n FAVOR DIGITAR NOVAMENTE O M�S DE NASCIMENTO:   ";
  	  		cin>>cliente[i].mes_nasc;	 	  	
	 		}
  		}while (cliente[i].mes_nasc<1 || cliente[i].mes_nasc>12 ); //fim valida��o do m�s
  		cout<<" \n ANO DE NASCIMENTO: ";
 		fflush(stdin);
 		do{ //in�cio valida��o do ano
  		cin>>cliente[i].ano_nasc;
  		if (cliente[i].ano_nasc<1900 || cliente[i].ano_nasc>2021 )
  			{
  	  		cout<<"\n FAVOR DIGITAR UM ANO V�LIDO (S�O V�LIDOS ANOS ENTRE 1900 E 2021)";
	  		cout<<"\n FAVOR DIGITAR NOVAMENTE O ANO DE NASCIMENTO:   ";
  	  		cin>>cliente[i].ano_nasc;	 	  	
	 		}
  		}while (cliente[i].ano_nasc<1900 || cliente[i].ano_nasc>2021 ); //fim valida��o do ano
  		cout<<" \n E-MAIL: ";
 		fflush(stdin);
  		gets(cliente[i].email);
  		cout<<" \n PROFISS�O: ";
 		fflush(stdin);
  		gets(cliente[i].profissao);
  		cout<<" \n SEXO: ";
 		fflush(stdin);
  		gets(cliente[i].sexo);
	}
	cout<<"\n ==========================================";
  	cout<<"\n\n --------- DADOS DOS CLIENTES ---------";
  	cout<<"\n ==========================================";
  		for (i=0; i<qtde;i++)
  			{
  				cout<<"\n\n ____________________________________________________";
  				cout<<"\n\n ID CLIENTE: " <<  cliente[i].id; 
  				cout<<"\n NOME CLIENTE: ";
  				puts(cliente[i].nome);
  				cout<<"\n DATA DE NASCIMENTO: " << cliente[i].dia_nasc<<"/"<<cliente[i].mes_nasc<<"/"<<cliente[i].ano_nasc;
  				cout<<"\n E-MAIL: " <<  cliente[i].email;
  				cout<<"\n PROFISS�O: " << cliente[i].profissao;
  				cout<<"\n SEXO: " << cliente[i].sexo;
  				cout<<"\n CADASTRO CONCLUIDO COM SUCESSO!";
			}
}

