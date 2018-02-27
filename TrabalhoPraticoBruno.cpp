#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main(void){
	//Idioma
			setlocale(LC_ALL,"Portuguese");
	//Variavel 
 	char nome[120], repetir[02];
 	int matricula, Quantidadedefilhos, Conjuge, planodeSaude, planoodontologico, horastrabalhadas;
	int filho, filho5, filho4, filho3, filho2, filho1, classeescolha, filho51, filho41, filho31, filho21, filho11;
	int conjuge1, filhoincluir, quan, classeescolha1, filhoincluir2, Quantidadedefilhos5;
	float SalarioBruto, Salario1, Salario2, planofixo2, planofixo3, planodesaude, planofixo=21.90, planodeDsaude, Salario11;
 	float Valordahoratrabalhada, planoodonto, SalarioLiquido, Desconto, SalarioR, PlanosF;
	//Entrada de dados
do{
	system("color 1F");
 	cout<<"***** EMPRESA *****\n";
 	cout<<"--------------------------------------------------------------\n";
 	cout<<"Colaborador .......................:";
 	cin>>nome;
do{
 	cout<<"Matrícula..............................:";
 	cin>>matricula;
 	while(matricula<0){ cout<<"Erro 013...... Numero tem que ser inteiro\n"; break; }
}while(matricula<0);
 	cout<<"Horas trabalhadas............:";
 	cin>>horastrabalhadas;
 	cout<<"Valor da hora (R$)............:";
 	cin>>Valordahoratrabalhada;
 	cout<<"Quantidade de Filhos......:";
 	cin>>Quantidadedefilhos;
 	while(Quantidadedefilhos>0){
		switch(Quantidadedefilhos){
			case 5:{ filho=5; printf("Qual idade do filho %d :",filho); cin>>filho5; if(filho5>14){ filho51=filho4; }}
			case 4:{ filho=4; printf("\nQual idade do filho %d :",filho); cin>>filho4; if(filho4>14){ filho41=filho4;}}
			case 3:{ filho=3; printf("\nQual idade do filho %d :",filho); cin>>filho3; if(filho3>14){ filho31=filho3; }}
			case 2:{ filho=2; printf("\nQual idade do filho %d :",filho); cin>>filho2; if(filho2>14){ filho21=filho2; }}
			case 1:{ filho=1; printf("\nQual idade do filho %d :",filho); cin>>filho1; if(filho1>14){ filho11=filho1; }}
			}
			break;	}
    do{
 	cout<<"\nCônjuge.................................: [1] - Sim / [2] - Não \n";
 	cin>>Conjuge;
 	}while(Conjuge<=0||Conjuge>=3);
 	switch(Conjuge){
					case 1:{conjuge1=Conjuge;break; }
					default:break;}
     do{
	 cout<<"Plano de saúde...................: [1] - Sim / [2] - Não \n";
	 cin>>planodeSaude;
	// planofixo=21.90;
	 }while(planodeSaude<=0||planodeSaude>=3);
	 switch(planodeSaude){
	 	case 1:{
 			do{
	 		cout<<"Incluir....... Cônjuge: [1] - Sim / [2] - Não \n";
	 		cin>>classeescolha;
	 		}while(classeescolha<=0||classeescolha>=3);
	 						  switch(classeescolha){
	 						  	case 1:{
	 						  		planofixo2=80.90;
									break;
								   }
						        default:break;}	   
						}
			while(Quantidadedefilhos>0){
				do{
			     cout<<"Incluir....... Filhos: [1] - Sim / [2] - Não \n";
			     cin>>filhoincluir;
			     }while(filhoincluir<=0||filhoincluir>=3);
			     while(filho11>=12||filho21>=12||filho31>=12||filho41>=12||filho51>=12){
				 switch(filhoincluir){
	 						  	case 1:{
	 						  		cout<<"Quantos filhos maior de 12:";
	 						  		cin>>quan;
	 						  		do{quan++;
									   planofixo3=65.90+planofixo2;
   									}while(quan>=3);
									break;
								   }
						        default:break;}
							   }
						        default:break;}}
	 do{
	 cout<<"Plano Odontálgico............: [1] - Sim / [2] - Não \n";
	 cin>>planoodontologico;
	 }while(planoodontologico>3);
	 switch(planoodontologico){
	 	case 1:{
	 		planoodonto=40.00;
	 		while(conjuge1==1){
		    conjuge1++;
 			do{
	 		cout<<"Incluir....... Cônjuge: [1] - Sim / [2] - Não \n";
	 		cin>>classeescolha1;
	 		}while(classeescolha1<=0||classeescolha1>=3);
	 						  switch(classeescolha){
	 						  	case 1:{
	 						  		planoodonto=35.00;
									break;
								   }
						        default:break;}	   
						}
			while(Quantidadedefilhos>0){
				do{
			     cout<<"Incluir....... Filhos: [1] - Sim / [2] - Não \n";
			     cin>>filhoincluir2;
			     }while(filhoincluir2<=0||filhoincluir2>=3);
				 switch(filhoincluir2){
	 						  	case 1:{
	 						  		do{Quantidadedefilhos5=Quantidadedefilhos-1;
										planoodonto=planoodonto-5.00;
									   }while(Quantidadedefilhos>Quantidadedefilhos5);
									break;
								   }
						        case 2:{break;}
							   }
    	 	}
			break;
		 }
		 case 2:{break;}
	 }
	 system("Pause");
//Processamento de dados
     SalarioBruto=horastrabalhadas*Valordahoratrabalhada;
     //INSS
     if(SalarioBruto<1174.86){ Salario1=SalarioBruto+0.08; Salario11=SalarioBruto-Salario1; }
     else if(SalarioBruto>=1174.86 || SalarioBruto<1958.10) { Salario1=SalarioBruto+0.09; Salario11=SalarioBruto-Salario1;}
     else if(SalarioBruto>=1958.11 || SalarioBruto<3916.20) { Salario1=SalarioBruto+0.11; Salario11=SalarioBruto-Salario1;}
     else if(SalarioBruto>3916.20){ Salario1=430.78; }
     //IR
     if(SalarioBruto<1313.69){Salario2=0;}
     else if(SalarioBruto>=1313.69 || SalarioBruto<2625.12) { Salario2 = 197.05; }
     else if(SalarioBruto>2625.12){ Salario2 = 525.19; }
     //Desconto
     planodeDsaude=planofixo2+planofixo3;
     planofixo=planofixo+planodeDsaude;
     PlanosF=planodeDsaude+planoodonto;
     SalarioR=Salario2+Salario1;
     Desconto=SalarioR+PlanosF;
     SalarioLiquido=SalarioBruto-Desconto;
//Saida de dados
     system("cls");
     cout<<"***** EMPRESA *****\n\n\n";
     cout<<"Relatório do mensal:\n\n\n";
     cout<<"--------------------------------------------------------------\n";
     cout<<"Dados do colaborador\n";
     cout<<"--------------------------------------------------------------\n";
     printf("Colaborador ......................................: %s \n",nome);
     printf("Matrícula ............................................: %d \n\n\n",matricula);
     cout<<"--------------------------------------------------------------\n";
     cout<<"Descontos\n";
     cout<<"--------------------------------------------------------------\n";
     printf("Desconto INSS ...................................: %f \n",Salario11);
     printf("Desconto IRRF ...................................: %f \n",Salario2);
     printf("Desconto Plano de Saúde..............: %f \n",planofixo);
     printf("Desconto Plano Odontológico.....: %.2f \n\n\n",planoodonto);
     cout<<"--------------------------------------------------------------\n";
     cout<<"Vantagens\n";
     cout<<"--------------------------------------------------------------\n";
     printf("Salário Família....................................: %2.f \n");
     printf("Quantidade filhos .............................: %d \n\n\n",Quantidadedefilhos);
     cout<<"--------------------------------------------------------------\n";
     cout<<"Salário:\n";
     cout<<"-------------------------------------------------------------- \n";
     printf("Salário Bruto ......................................: %2.f \n",SalarioBruto);
     printf("Salário Líquido ..................................: %2.f \n\n\n\n\n",SalarioLiquido);
     system("date/t");
     system("time/t");
     printf("Digite [S] para continuar...");
     scanf("%s",&repetir);
}while(repetir=="S");
     return 0;
}

