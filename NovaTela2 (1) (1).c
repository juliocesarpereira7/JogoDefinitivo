#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <time.h>
#include <conio.h>

//PROCEDIMENTOS:
void TelaMenu();
void TelaCadastro();
void TelaEntrar();
void TelaOpcaoInvalida();
void TelaJogo();
void TelaRkg();
void limpaCasas();
void jogada();
void preencheCampoComDois();
void gotoxy();
void posicionando();

// FUNCOES
int desceNumeros();
int sobeNumeros();
int esquerdaNumeros();
int direitaNumeros();
int verificarJogadas();
// VAR GLOBAIS

int matriz[4][4];
char nome[10]; 
char email[25]; 
char senha[15];
int tecla = 0;
int score = 0;
int opcao = 0;

int main(){
	system("color 09");
	TelaMenu();
}

TelaMenu(){
	system("cls");
	printf("\n\n");
	printf("                                         ____________________________________________________________________________________ \n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                       MENU                                       ||\n");
	printf("                                        ||__________________________________________________________________________________||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                 $$$$$$$$        $$$$$             $$$$      $$$$$$$$             ||\n");
	printf("                                        ||                $$$$  $$$$$   $$$$   $$$$        $$$$$$    $$$$   $$$$            ||\n");
	printf("                                        ||                       $$$$  $$$$$    $$$$      $$$$$$$    $$$$   $$$$            ||\n");
	printf("                                        ||                      $$$$   $$$$     $$$$    $$$$  $$$      $$$-$$$              ||\n");
	printf("                                        ||                    $$$$$    $$$$     $$$$   $$$$   $$$      $$$-$$$              ||\n");
	printf("                                        ||                  $$$$$      $$$$     $$$$  $$$$$$$$$$$$$  $$$$    $$$$           ||\n");
	printf("                                        ||                $$$$$         $$$$   $$$$$ $$$$$$$$$$$$$$ $$$$      $$$$          ||\n");
	printf("                                        ||               $$$$$$$$$$$$    $$$$$$$$$$           $$$    $$$$$$$$$$$            ||\n");
	printf("                                        ||               $$$$$$$$$$$$       $$$$              $$$        $$$$               ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                              1 - NOVO JOGADOR                                    ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                              2 - INICIAR SESSAO                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                              3 - INICIAR JOGO                                    ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                              4 - RANKING                                         ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||__________________________________________________________________________________||\n");
	printf("                                        ||__________________________________________________________________________________||\n"); 
	printf(" Escolha uma opcao: ");

	int opcao = 0;
	do{
		opcao = getch();
		switch(opcao){
			case 49:
				system("cls");
				TelaCadastro();
				opcao = 0;
				break;
			case 50:
				system("cls");
				TelaEntrar();
				opcao = 0;
				break;
			case 51:
				system("cls");
				TelaJogo();
				opcao = 0;
				break;
			case 52:
				system("cls");
				TelaRkg();
				opcao = 0;
				break;
			default:
				printf("\nERRO!");
				break;
		}
	} while (opcao != 0);
}


TelaCadastro(){
	system("cls");
	printf("\n\n");
	printf("                                         ____________________________________________________________________________________ \n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                     CADASTRO                                     ||\n");
	printf("                                        ||__________________________________________________________________________________||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                 $$$$$$$$        $$$$$             $$$$      $$$$$$$$             ||\n");
	printf("                                        ||                $$$$  $$$$$   $$$$   $$$$        $$$$$$    $$$$   $$$$            ||\n");
	printf("                                        ||                       $$$$  $$$$$    $$$$      $$$$$$$    $$$$   $$$$            ||\n");
	printf("                                        ||                      $$$$   $$$$     $$$$    $$$$  $$$      $$$-$$$              ||\n");
	printf("                                        ||                    $$$$$    $$$$     $$$$   $$$$   $$$      $$$-$$$              ||\n");
	printf("                                        ||                  $$$$$      $$$$     $$$$  $$$$$$$$$$$$$  $$$$    $$$$           ||\n");
	printf("                                        ||                $$$$$         $$$$   $$$$$ $$$$$$$$$$$$$$ $$$$      $$$$          ||\n");
	printf("                                        ||               $$$$$$$$$$$$    $$$$$$$$$$           $$$    $$$$$$$$$$$            ||\n");
	printf("                                        ||               $$$$$$$$$$$$       $$$$              $$$        $$$$               ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                               NOME:                                              ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                               EMAIL:                                             ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                               SENHA:                                             ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                             ESC PARA VOLTAR AO INICIO                            ||\n");
	printf("                                        ||__________________________________________________________________________________||\n");
	printf("                                        ||__________________________________________________________________________________||\n");
	
	gotoxy (78,22);
	scanf("%s", &nome);	
	gotoxy (78,24);
	scanf("%s", &email);
	gotoxy (78,26);
	scanf("%s", &senha);

	int opcao = 0;

	do{
		opcao = getch();
		switch(opcao){
			case 27:
				system("cls");
				TelaMenu();
				opcao = 0;
				break;
			default:
				printf("\nERRO!");
				break;
		}
	} while (opcao != 0);
}


TelaEntrar(){
	system("cls");
	printf("\n\n");
	printf("                                         ____________________________________________________________________________________ \n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                  INICIANDO SESSAO                                ||\n");
	printf("                                        ||__________________________________________________________________________________||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                 $$$$$$$$        $$$$$             $$$$      $$$$$$$$             ||\n");
	printf("                                        ||                $$$$  $$$$$   $$$$   $$$$        $$$$$$    $$$$   $$$$            ||\n");
	printf("                                        ||                       $$$$  $$$$$    $$$$      $$$$$$$    $$$$   $$$$            ||\n");
	printf("                                        ||                      $$$$   $$$$     $$$$    $$$$  $$$      $$$-$$$              ||\n");
	printf("                                        ||                    $$$$$    $$$$     $$$$   $$$$   $$$      $$$-$$$              ||\n");
	printf("                                        ||                  $$$$$      $$$$     $$$$  $$$$$$$$$$$$$  $$$$    $$$$           ||\n");
	printf("                                        ||                $$$$$         $$$$   $$$$$ $$$$$$$$$$$$$$ $$$$      $$$$          ||\n");
	printf("                                        ||               $$$$$$$$$$$$    $$$$$$$$$$           $$$    $$$$$$$$$$$            ||\n");
	printf("                                        ||               $$$$$$$$$$$$       $$$$              $$$        $$$$               ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                               NOME:                                              ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                               SENHA:                                             ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                            ENTER PARA IR AO JOGO                                 ||\n");
	printf("                                        ||                             ESC PARA IR AO MENU                                  ||\n");
	printf("                                        ||__________________________________________________________________________________||\n");
	printf("                                        ||__________________________________________________________________________________||\n");  
	
	gotoxy (78,22);
	scanf("%s", &nome);	
	gotoxy (79,24);
	scanf("%s", &senha);

	int opcao = 0;

	do{
		opcao = getch();
		switch(opcao){
			case 27:
			    system("cls");
				TelaMenu();
				opcao = 0;
				break;
			case 13:
				system("cls");
				TelaJogo();
				opcao = 0;
				break;
			default:
				printf("\nERRO!");
				break;
		}
	} while (opcao != 0);   
}


TelaOpcaoInvalida(){
	system("cls");

	printf("                                         ____________________________________________________________________________________\n");
	printf("                                        ||__________________________________________________________________________________||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                  OPCAO INVALIDA                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||__________________________________________________________________________________||\n");
	printf("                                        ||__________________________________________________________________________________||\n"); 
	
}



TelaJogo(status){
	int i, y, z;
	
	system ("cls");
	printf("\n\n");
	
	if(status == 0 && verificarJogadas() == 0){
		printf("\tGAME OVER - SCORE: %d\n", score);
	} else {
		printf("\tSCORE: %d\n", score);
	}
	for(i = 0; i < 4; i++){
	  printf("\t-----------------------------------------------------------------\n");
	  printf("\t|");
		for(y = 0; y < 4; y++){
			if(matriz[i][y] == 0)
				printf("\t \t|");
			else
				printf("\t%d\t|", matriz[i][y]);
		}
		printf("\n\t-----------------------------------------------------------------\n");
	}
	printf("\tUSE AS SETAS DO TECLADO                 <R> PARA REINICIAR O JOGO\n");

	do{
		limpaCasas();
		jogada(1);
		score = 0;
			do{
				tecla = getch();
			
				switch (tecla) {
					case 75: //Seta para esquerda
						jogada(esquerdaNumeros());
						break;
					case 72: //Seta para cima
						jogada(sobeNumeros());
						break;
					case 77: //Seta para direita
						jogada(direitaNumeros());
						break;
					case 80: //Seta para baixo
						jogada(desceNumeros());
						break;
					default:
						printf("\n");
						break;
				}	
			}while(tecla != 114); // Sai se apertar a tecla R ou se resultado for Game Over	

	}while(tecla != 27); // Sai se apertar a tecla ESC
}

TelaRkg(){
	system("cls");
	
	printf("\n\n");
	printf("                                        ||_____________________________________RANKING______________________________________||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||  1 -                                                                             ||\n");
	printf("                                        ||__________________________________________________________________________________||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||  2 -                                                                             ||\n");
	printf("                                        ||__________________________________________________________________________________||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||  3 -                                                                             ||\n");
	printf("                                        ||__________________________________________________________________________________||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||  4 -                                                                             ||\n");
	printf("                                        ||__________________________________________________________________________________||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||  5 -                                                                             ||\n");
	printf("                                        ||__________________________________________________________________________________||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||  6 -                                                                             ||\n");
	printf("                                        ||__________________________________________________________________________________||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||  7 -                                                                             ||\n");
	printf("                                        ||__________________________________________________________________________________||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||  8 -                                                                             ||\n");
	printf("                                        ||__________________________________________________________________________________||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||  9 -                                                                             ||\n");
	printf("                                        ||__________________________________________________________________________________||\n");
	printf("                                        ||                                                                                  ||\n");
	printf("                                        ||  10 -                                                                            ||\n");
	printf("                                        ||__________________________________________________________________________________||\n");
	printf("                                        ||                                                                                  ||\n"); 
}		
			
limpaCasas(){
int i, y, cont = 2; // 2 aleatorio e limpando 
	for (i = 0; i < 4; i++) {
		for (y = 0; y < 4; y++) {
			matriz[i][y] = 0;
		}
	}
}

posicionando(){
	int c, l = 0;
	c = 49;  //posicionando com gotoxy
    l = 14;
	for(int linha = 0;linha < 4; linha++){
		for(int coluna = 0;coluna < 4; coluna++){
			gotoxy(c, l);
			if (matriz[linha][coluna] != 0){
				printf("%i ", matriz[linha][coluna]);
				c = c + 21;
			}
		}
		printf("\n");
		l  =  l + 7;
		c = 49;
	}
}
			
			
desceNumeros(){
int c, l, jogada = 0; // Criando variavel c, l e jogada em todos os movimentos
	for(c = 0; c < 4; c++){ // Coluna
		for(l = 3; l >= 1; l--){ // Linha
			if(matriz[l][c] == 0 && matriz[l-1][c] > 0){
				matriz[l][c] = matriz[l-1][c];
				matriz[l-1][c] = 0;
				l = 4;
				jogada = 1;
			}
		}

	for(l = 3; l >= 1; l--){
		if(matriz[l][c] == matriz[l-1][c]){
			matriz[l][c] += matriz[l-1][c];
			matriz[l-1][c] = 0;
			score += matriz[l][c];
		}
	}

		for(l = 3; l >= 1; l--){
			if(matriz[l][c] == 0 && matriz[l-1][c] > 0){
				matriz[l][c] = matriz[l-1][c];
				matriz[l-1][c] = 0;
				l = 4;
				jogada = 1;
			}
		}
	}
	return jogada;
}
			
sobeNumeros(){
int c, l, jogada = 0;
	for(c = 0; c < 4; c++){ // Coluna
		for(l = 0; l < 3; l++){ // Linha
			if(matriz[l][c] == 0 && matriz[l+1][c] > 0){
				matriz[l][c] = matriz[l+1][c];
				matriz[l+1][c] = 0;
				l = -1;
				jogada = 1;
			}
		}

	for(l = 0; l < 3; l++){
		if(matriz[l][c] == matriz[l+1][c]){
		matriz[l][c] += matriz[l+1][c];
		matriz[l+1][c] = 0;
		score += matriz[l][c];
		}
	}

		for(l = 0; l < 3; l++){
			if(matriz[l][c] == 0 && matriz[l+1][c] > 0){
				matriz[l][c] = matriz[l+1][c];
				matriz[l+1][c] = 0;
				l = -1;
				jogada = 1;
			}
		}
	}
		return jogada;
}
			
esquerdaNumeros(){
int c, l, jogada = 0;
	for(l = 0; l < 4; l++){ // Coluna
		for(c = 0; c < 3; c++){ // Linha
			if(matriz[l][c] == 0 && matriz[l][c+1] > 0){
				matriz[l][c] = matriz[l][c+1];
				matriz[l][c+1] = 0;
				c = -1;
				jogada = 1;
			}
		}

	for(c = 0; c < 3; c++){
		if(matriz[l][c] == matriz[l][c+1]){
			matriz[l][c] += matriz[l][c+1];
			matriz[l][c+1] = 0;
			score += matriz[l][c];
		}
	}

		for(c = 0; c < 3; c++){
			if(matriz[l][c] == 0 && matriz[l][c+1] > 0){
				matriz[l][c] = matriz[l][c+1];
				matriz[l][c+1] = 0;
				c = -1;
				jogada = 1;
			}
		}
	}
		return jogada;
}
			
direitaNumeros(){
int c, l, jogada = 0;
	for(l = 0; l < 4; l++){ // Coluna
		for(c = 3; c >= 1; c--){ // Linha
			if(matriz[l][c] == 0 && matriz[l][c-1] > 0){
				matriz[l][c] = matriz[l][c-1];
				matriz[l][c-1] = 0;
				c = 4;
				jogada = 1;
			}	
		}

	for(c = 3; c >= 1; c--){
		if(matriz[l][c] == matriz[l][c-1]){
			matriz[l][c] += matriz[l][c-1];
			matriz[l][c-1] = 0;
			score += matriz[l][c];
		}
	}

		for(c = 3; c >= 1; c--){
			if(matriz[l][c] == 0 && matriz[l][c-1] > 0){
				matriz[l][c] = matriz[l][c-1];
				matriz[l][c-1] = 0;
				c = 4;
				jogada = 1;
			}
		}
	}
		return jogada;
}
			
			
			
			
verificarJogadas(){
	int c, l;

		for(c = 0; c < 4; c++){  // verificando as jogadas
			for(l = 0; l < 4; l++){
				if (matriz[l][c] == 0) {
					return 1;
				}
			}
		for(l = 3; l >= 1; l--){
			if(matriz[l][c] == matriz[l-1][c] || matriz[l][c] == matriz[l][c-1]){
				return 1;
			}
		}
			for(l = 0; l < 3; l++){
				if(matriz[l][c] == matriz[l+1][c] || matriz[l][c] == matriz[l][c+1]){
					return 1;
				}
			}
		}
			return 0;
}
		
		
jogada(int status) {
	int i = 0, y = 0, cont = 0; //linha e coluna com i e y e contador

	for (i = 0; i < 4; i++) {
		for (y = 0; y < 4; y++) {
			if (matriz[i][y] == 0) {
				cont++;
			}
		}
	}

	if(status != 0){
		preencheCampoComDois(cont);
		TelaJogo(1);
	} else {
		if(verificarJogadas() == 1){
		TelaJogo(1);
		} else {
		TelaJogo(0);
		}
	}
}
	
preencheCampoComDois(int cont){
	int i, y, auxCont; // linha coluna e aux p contador

		srand(time(NULL));
		auxCont = rand() % cont;  // sorteando num
		cont = 0;

	for (i = 0; i < 4; i++) {
		for (y = 0; y < 4; y++) {
			if (matriz[i][y] == 0) {
			if (cont == auxCont) {
				matriz[i][y] = 2;
			}
				cont++;
			}
		}
	}
}

gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
