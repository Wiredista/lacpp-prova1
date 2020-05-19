#include <bits/stdc++.h>
using namespace std;
int main() {
	cout << "SISTEMA DE PERFIL DE CLIENTE\n";
	cout << "----------------------------\n";
	cout << "INFORME OS DADOS DO ÚLTIMO ANO\n";

	int compras;
	float ticket;
	cout << "\nQuantas compras o cliente fez no último ano? ";
	cin >> compras;
	cout << "Qual o ticket médio? ";
	cin >> ticket;

	int atrasos;
	char forma;
	cout << "\nQuantas vezes o cliente atrasou o pagamento? ";
	cin >> atrasos;
	cout << "A maioria das compras foi em dinheiro, cartão ou boleto (D/C/B)? ";
	cin >> forma;

	int score;
	if(compras == 0) score = 0;
	else if(compras <= 2 && compras * ticket <= 3000) score = 20;
	else if(compras > 2 && compras * ticket <= 3000) score = 40;
	else score = 60;
	cout << "\nScore do volume de compras: " << score << " pontos\n\n";

	int scoreInadimplencia;
	int scoreForma;
	if(atrasos > 1 || compras == 0) scoreInadimplencia = 0;
	else if(atrasos == 1) scoreInadimplencia = 15;
	else if(atrasos == 0 && compras > 0) scoreInadimplencia = 30;

	if(forma == 'D') scoreForma = 5;
	else  scoreForma = 10;

	cout << "Score de inadimplência: " << scoreInadimplencia << " pontos \n";
	cout << "Score de forma de pagamento: " << scoreForma << " pontos \n";


	int scoreTotal = score + scoreInadimplencia + scoreForma;
	cout << "\nClassificação final: CLIENTE ";

	if(scoreTotal <= 25) cout << "BRONZE\n";
	else if(scoreTotal <= 75) cout << "PRATA\n";
	else cout << "OURO\n";
}
