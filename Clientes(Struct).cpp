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
dados_cliente cliente[51]; /*Criando a variável cliente que será do tipo struct dados_cliente */
int i,qtde;
main()
{
	setlocale(LC_ALL, "Portuguese");
	cout<<"\n ==========================================";
	cout<<"\n CADASTRO DE CLIENTE";
	cout<<"\n ==========================================";
	cout<<"\n BEM VINDO A PAGINA DE CADASTRO DE CLIENTES! ";
	cout<<"\n QUANTOS CLIENTES VOCÊ DESEJA CADASTRAR UMA UNICA VEZ? ";
	cin>>qtde;
	for (i=0; i<qtde;i++)
	{
		cout<<"\n ==========================================";
		cout<<"\n INFORME OS DADOS DO "<<i+1<< "º CLIENTE:";
  		cout<<"\n ==========================================";
  		cout<<"\n ID DO CLIENTE: ";
		fflush(stdin); //Para limpar o buffer em Windows, use o: fflush(stdin)
		do{ //início validação do id do usuário
  		cin>>cliente[i].id; 
  		if (cliente[i].id<1 || cliente[i].id>50 )
  			{
  	  		cout<<"\n FAVOR DIGITAR UMA ID VÁLIDA (NÚMEROS ENTRE 1 E 50 SÃO VÁLIDOS)";
	  		cout<<"\n FAVOR DIGITAR NOVAMENTE A ID:   ";
  	  		cin>>cliente[i].id;	 	  	
	 		}
  		}while (cliente[i].id<1 || cliente[i].id>50 ); //fim validação do id do usuário
		cout<<"\n NOME DO CLIENTE: ";
		fflush(stdin); //Para limpar o buffer em Windows, use o: fflush(stdin)
  		gets(cliente[i].nome);
  		cout<<" \n DIA DE NASCIMENTO: ";
 		fflush(stdin);
 		do{ //início validação do dia
  		cin>>cliente[i].dia_nasc;
  		if (cliente[i].dia_nasc<1 || cliente[i].dia_nasc>31 )
  			{
  	  		cout<<"\n FAVOR DIGITAR UM DIA VÁLIDO (SÃO VÁLIDOS DIAS ENTRE 1 E 31)";
	  		cout<<"\n FAVOR DIGITAR NOVAMENTE O DIA DE NASCIMENTO:   ";
  	  		cin>>cliente[i].dia_nasc;	 	  	
	 		}
  		}while (cliente[i].dia_nasc<1 || cliente[i].dia_nasc>31 ); //fim validação do dia
  		cout<<" \n MÊS DE NASCIMENTO: ";
 		fflush(stdin);
 		do{ //início validação do mês
  		cin>>cliente[i].mes_nasc;
  		if (cliente[i].mes_nasc<1 || cliente[i].mes_nasc>12 )
  			{
  	  		cout<<"\n FAVOR DIGITAR UM MÊS VÁLIDO (SÃO VÁLIDOS DE MÊS 1 A 12)";
	  		cout<<"\n FAVOR DIGITAR NOVAMENTE O MÊS DE NASCIMENTO:   ";
  	  		cin>>cliente[i].mes_nasc;	 	  	
	 		}
  		}while (cliente[i].mes_nasc<1 || cliente[i].mes_nasc>12 ); //fim validação do mês
  		cout<<" \n ANO DE NASCIMENTO: ";
 		fflush(stdin);
 		do{ //início validação do ano
  		cin>>cliente[i].ano_nasc;
  		if (cliente[i].ano_nasc<1900 || cliente[i].ano_nasc>2021 )
  			{
  	  		cout<<"\n FAVOR DIGITAR UM ANO VÁLIDO (SÃO VÁLIDOS ANOS ENTRE 1900 E 2021)";
	  		cout<<"\n FAVOR DIGITAR NOVAMENTE O ANO DE NASCIMENTO:   ";
  	  		cin>>cliente[i].ano_nasc;	 	  	
	 		}
  		}while (cliente[i].ano_nasc<1900 || cliente[i].ano_nasc>2021 ); //fim validação do ano
  		cout<<" \n E-MAIL: ";
 		fflush(stdin);
  		gets(cliente[i].email);
  		cout<<" \n PROFISSÃO: ";
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
  				cout<<"\n PROFISSÃO: " << cliente[i].profissao;
  				cout<<"\n SEXO: " << cliente[i].sexo;
  				cout<<"\n CADASTRO CONCLUIDO COM SUCESSO!";
			}
}

