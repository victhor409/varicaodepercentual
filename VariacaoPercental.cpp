#include<iostream>
#include<string>

using namespace std;

struct BolsadeValores{
string nomeCompania, areaAtucao;
float valorAtualdaAcao, valorAnterior,variacao;
};

float variacao(float vi, float vf,float variacaoPercentual){

return variacaoPercentual=(vf/vi-1)*100;

}

int main(){

BolsadeValores bolsa;
cout<<"\t$$$$ Dados da Bolsa de Valores $$$$$"<<endl;

cout<<"\n";

cout<<"\nInforme a empresa: ";
cin>>bolsa.nomeCompania;
cout<<"Informa a area de atuacao: ";
cin>>bolsa.areaAtucao;
cout<<"Valor Anterior: ";
cin>>bolsa.valorAnterior;
cout<<"Valor atual da acao: ";
cin>>bolsa.valorAtualdaAcao;

float vi,vf,variacaoPercentual;

vi=bolsa.valorAnterior;
vf=bolsa.valorAtualdaAcao;

cout<<"\nVariacao do percentual da bolsa: "<<variacao(vi,vf,variacaoPercentual)<<"%";

cout<<"\n";
system("\npause");


return 0;
}