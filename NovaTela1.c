#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <time.h>
#include <conio.h>

int main(){
	int matriz [4] [4];
	char nome [10]; 
	char email [25]; 
	char senha [15]; 
	char tecla;
	int score = 0;
	int opcao = 0;

	void gotoxy(int x, int y)
	{
		COORD coord;
  		coord.X = x;
  		coord.Y = y;
  		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	}
		system("color 9");


void TelaMenu(){
	system("cls");
	printf("                ____________________________________________________________________________________ \n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                       MENU                                       ||\n");
	printf("               ||__________________________________________________________________________________||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                 $$$$$$$$        $$$$$             $$$$      $$$$$$$$             ||\n");
	printf("               ||                $$$$  $$$$$   $$$$   $$$$        $$$$$$    $$$$   $$$$            ||\n");
	printf("               ||                       $$$$  $$$$$    $$$$      $$$$$$$    $$$$   $$$$            ||\n");
	printf("               ||                      $$$$   $$$$     $$$$    $$$$  $$$      $$$-$$$              ||\n");
	printf("               ||                    $$$$$    $$$$     $$$$   $$$$   $$$      $$$-$$$              ||\n");
	printf("               ||                  $$$$$      $$$$     $$$$  $$$$$$$$$$$$$  $$$$    $$$$           ||\n");
	printf("               ||                $$$$$         $$$$   $$$$$ $$$$$$$$$$$$$$ $$$$      $$$$          ||\n");
	printf("               ||               $$$$$$$$$$$$    $$$$$$$$$$           $$$    $$$$$$$$$$$            ||\n");
	printf("               ||               $$$$$$$$$$$$       $$$$              $$$        $$$$               ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                              1 - NOVO JOGADOR                                    ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                              2 - INICIAR SESSAO                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                              3 - INICIAR JOGO                                    ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                              4 - RANKING                                         ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||__________________________________________________________________________________||\n");
	printf("               ||__________________________________________________________________________________||\n"); 
	printf(" Escolha uma opcao: ");
}


void TelaCadastro(){
	system("cls");
	printf("                ____________________________________________________________________________________ \n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                     CADASTRO                                     ||\n");
	printf("               ||__________________________________________________________________________________||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                 $$$$$$$$        $$$$$             $$$$      $$$$$$$$             ||\n");
	printf("               ||                $$$$  $$$$$   $$$$   $$$$        $$$$$$    $$$$   $$$$            ||\n");
	printf("               ||                       $$$$  $$$$$    $$$$      $$$$$$$    $$$$   $$$$            ||\n");
	printf("               ||                      $$$$   $$$$     $$$$    $$$$  $$$      $$$-$$$              ||\n");
	printf("               ||                    $$$$$    $$$$     $$$$   $$$$   $$$      $$$-$$$              ||\n");
	printf("               ||                  $$$$$      $$$$     $$$$  $$$$$$$$$$$$$  $$$$    $$$$           ||\n");
	printf("               ||                $$$$$         $$$$   $$$$$ $$$$$$$$$$$$$$ $$$$      $$$$          ||\n");
	printf("               ||               $$$$$$$$$$$$    $$$$$$$$$$           $$$    $$$$$$$$$$$            ||\n");
	printf("               ||               $$$$$$$$$$$$       $$$$              $$$        $$$$               ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                               NOME:                                              ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                               EMAIL:                                             ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                               SENHA:                                             ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                             ESC PARA VOLTAR AO INICIO                            ||\n");
	printf("               ||__________________________________________________________________________________||\n");
	printf("               ||__________________________________________________________________________________||\n");
	
	
	gotoxy (54,20);
	scanf("%s", &nome);	
	gotoxy (54,22);
	scanf("%s", &email);
	gotoxy (54,24);
	scanf("%s", &senha);
}


void TelaEntrar(){
	system("cls");
	printf("                ____________________________________________________________________________________ \n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                  INICIANDO SESSAO                                ||\n");
	printf("               ||__________________________________________________________________________________||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                 $$$$$$$$        $$$$$             $$$$      $$$$$$$$             ||\n");
	printf("               ||                $$$$  $$$$$   $$$$   $$$$        $$$$$$    $$$$   $$$$            ||\n");
	printf("               ||                       $$$$  $$$$$    $$$$      $$$$$$$    $$$$   $$$$            ||\n");
	printf("               ||                      $$$$   $$$$     $$$$    $$$$  $$$      $$$-$$$              ||\n");
	printf("               ||                    $$$$$    $$$$     $$$$   $$$$   $$$      $$$-$$$              ||\n");
	printf("               ||                  $$$$$      $$$$     $$$$  $$$$$$$$$$$$$  $$$$    $$$$           ||\n");
	printf("               ||                $$$$$         $$$$   $$$$$ $$$$$$$$$$$$$$ $$$$      $$$$          ||\n");
	printf("               ||               $$$$$$$$$$$$    $$$$$$$$$$           $$$    $$$$$$$$$$$            ||\n");
	printf("               ||               $$$$$$$$$$$$       $$$$              $$$        $$$$               ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                               NOME:                                              ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                               SENHA:                                             ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                            ENTER PARA IR AO JOGO                                 ||\n");
	printf("               ||                             ESC PARA IR AO MENU                                  ||\n");
	printf("               ||__________________________________________________________________________________||\n");
	printf("               ||__________________________________________________________________________________||\n");  
	
	
	gotoxy (54,20);
	scanf("%s", &nome);	
	gotoxy (54,22);
	scanf("%s", &senha);      
}


void TelaOpcaoInvalida(){
	system("cls");

	printf("                ____________________________________________________________________________________\n");
	printf("               ||__________________________________________________________________________________||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                  OPCAO INVALIDA                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||__________________________________________________________________________________||\n");
	printf("               ||__________________________________________________________________________________||\n"); 
	
}



void TelaJogo(){
	system ("cls");
	
	printf("                ___________________________________________________________________________________ \n");
	printf("               |                                                       |         RANKING           |\n");
	printf("               |    SCORE:                 RETORNAR                    |___________________________|\n");
	printf("               |                                                       |                           |\n");
	printf("               |                                                       |___________________________|\n");
	printf("               |                                                       |                           |\n");
	printf("               |                                                       |___________________________|\n");
	printf("               |                                                       |                           |\n");
	printf("               |_______________________________________________________|___________________________|\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |____________________|_____________________|____________________|___________________|\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |____________________|_____________________|____________________|___________________|\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |____________________|_____________________|____________________|___________________|\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |                    |                     |                    |                   |\n");
	printf("               |____________________|_____________________|____________________|___________________|\n");
	
}

void TelaRkg(){
	system("cls");
	
	printf("               ||_____________________________________RANKING______________________________________||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||  1 -                                                                             ||\n");
	printf("               ||__________________________________________________________________________________||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||  2 -                                                                             ||\n");
	printf("               ||__________________________________________________________________________________||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||  3 -                                                                             ||\n");
	printf("               ||__________________________________________________________________________________||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||  4 -                                                                             ||\n");
	printf("               ||__________________________________________________________________________________||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||  5 -                                                                             ||\n");
	printf("               ||__________________________________________________________________________________||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||  6 -                                                                             ||\n");
	printf("               ||__________________________________________________________________________________||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||  7 -                                                                             ||\n");
	printf("               ||__________________________________________________________________________________||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||  8 -                                                                             ||\n");
	printf("               ||__________________________________________________________________________________||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||  9 -                                                                             ||\n");
	printf("               ||__________________________________________________________________________________||\n");
	printf("               ||                                                                                  ||\n");
	printf("               ||  10 -                                                                            ||\n");
	printf("               ||__________________________________________________________________________________||\n");
	printf("               ||                                                                                  ||\n"); 
}



	
	while (opcao != 9){
		
	    TelaMenu();    
		scanf("%i", &opcao);
		
		if (opcao == 1){
			TelaCadastro();
			
			do  // COLOCA O GETCH EM LOOP PARA FICAR LENDO AS TECLAS ATÉ QUE UMA ABAIXO SEJA DIGITADA
			{
			opcao = getch();  // SERVE PARA LER A TECLA QUE O USUARIO DIGITOU E GUARDA O CODIGO ASCII DA TECLA NA VARIAVEL OPCAO
			if (opcao == 27){ // SE A OPCAO FOR IGUAL A 27 CODIGO ASCII DA TECLA ESC
			system ("cls");
			TelaMenu();
			opcao = 0;  // RECEBE O VALOR 0 PARA TERMINAR O LOOP
			} 
				} while (opcao != 0); // DEIXA EM LOOP ATÉ QUE SEJA DIGITADO 0
	 	}
	 	
	 	
	 	else if(opcao == 4){
			TelaRkg();
		}
		
		
		else if(opcao == 3){
			
			char tecla;
			TelaJogo();
			
		do{
				limpaCasas();
				score = 0;
				tecla = getch();
				jogada(1);
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
					}	
					}while(tecla != 114); // Sai se apertar a tecla R ou se resultado for Game Over	
			}while(tecla != 27); // Sai se apertar a tecla ESC
		
			return 0;
			//system pause
			
			
			void limpaCasas(){
			int i, y, cont = 2; // 2 aleatorio e limpando 
				for (i = 0; i < 4; i++) {
					for (y = 0; y < 4; y++) {
						matriz[i][y] = 0;
					}
				}
			}
			
			
			int desceNumeros(){
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
			
			int sobeNumeros(){
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
			
			int esquerdaNumeros(){
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
			
			int direitaNumeros(){
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
			
			
			
			
		int verificarJogadas(){
			int c, l;

				for(c = 0; c < 4; c++){
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
		
		
	void jogada(int status) {
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
			   desenha(1);
            } else {
				if(verificarJogadas() == 1){
			     	desenha(1);
				} else {
					desenha(0);
				  }
			  }
	}
	
	void preencheCampoComDois(int cont){
		int i, y, auxCont; // linha coluna e aux p contador

			srand(time(NULL));
			auxCont = rand() % cont;
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
	
	
	}
	
	
	
		
		
		 if (opcao == 2){
			TelaEntrar();
			
			do  
			{
				opcao = getch();  
				if (opcao == 27){ 
				system ("cls");
				TelaMenu();
				opcao = 0;  
				} 	else if (opcao == 13){ 
					system("cls");
					TelaJogo();
					opcao = 0;
					}
			} while (opcao != 0); 	
		}
		
		else if (opcao != 9){
			TelaOpcaoInvalida();
		}
		
		getch();
	}
	
}
