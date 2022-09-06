#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <windows.h>

typedef struct{
	char nome[10];
	float nota;
}aluno;

typedef struct{
	int nasc;
	char sexo;
	int proc;
}motorista;

typedef struct{
	char string[80];
	int N;
}Palavras;

void Ordena(int *v, int TAM){
	int i, j;
	int aux;
	for (i = 0; i < TAM; i++){
		for (j = 0; j < TAM; j++){
			if (v[i] < v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
	}
}
void Insere(int *v, int TAM){
	int i;
	for (i = 0; i < TAM; i++){
		printf("Valor %d: ", i+1);
		scanf("%d", &v[i]);
	}
	printf("\n");
}

int main (){
    char outro;
    int ex;

    void exercicio1(), exercicio2(), exercicio3(), exercicio4(), exercicio5(), exercicio6(), exercicio7(), exercicio8();
    void exercicio9(), exercicio10(), exercicio11(), exercicio12(), exercicio13(), exercicio14(), exercicio15(), exercicio16();

    do{
        system("cls");
        fflush(stdin);
        printf("Qual exercicio deseja ver?\n");
        scanf("%d", &ex);

        switch(ex){
            case 1:
                printf("\n");
                printf("Exercicio 1: \n");
                exercicio1();
                break;
            case 2:
                printf("\n");
                printf("Exercicio 2: \n");
                exercicio2();
                break;
            case 3:
                printf("\n");
                printf("Exercicio 3: \n");
                exercicio3();
                break;
            case 4:
                printf("\n");
                printf("Exercicio 4: \n");
                exercicio4();
                break;
            case 5:
                printf("\n");
                printf("Exercicio 5: \n");
                exercicio5();
                break;
            case 6:
                printf("\n");
                printf("Exercicio 6: \n");
                exercicio6();
                break;
            case 7:
                printf("\n");
                printf("Exercicio 7: \n");
                exercicio7();
                break;
            case 8:
            	printf("\n");
                printf("Exercicio 8: \n");
                exercicio8();
                break;
            case 9:
            	printf("\n");
                printf("Exercicio 9: \n");
                exercicio9();
                break;
            case 10:
            	printf("\n");
                printf("Exercicio 10: \n");
                exercicio10();
                break;
            case 11:
            	printf("\n");
                printf("Exercicio 11: \n");
                exercicio11();
                break;
			case 12:
            	printf("\n");
                printf("Exercicio 12: \n");
                exercicio12();
                break;
            case 13:
            	printf("\n");
                printf("Exercicio 13: \n");
                exercicio13();
                break;
			case 14:
            	printf("\n");
                printf("Exercicio 14: \n");
                exercicio14();
                break;
            case 15:
            	printf("\n");
                printf("Exercicio 15: \n");
                exercicio15();
                break;
            case 16:
            	printf("\n");
                printf("Exercicio 16: \n");
                exercicio16();
                break;
            default:
                printf("Esse exercicio nao existe\n");
        }
        printf("Caso deseje continuar, tecle 's'. Caso nao, tecle qualquer outra coisa: \n");
        outro = getch();

    } while (outro == 's');
    return 0;
}
void exercicio1(){
    int i;

    for (i = 1; i < 10000; i = i + 1){
        if (i % 3 == 2 && i % 5 == 3 && i % 7 == 4){
            printf("O menor numero inteiro positivo que ao ser divido por\n");
            printf("3 da resto 2, 5 da resto 3 e 7 da resto 4 e o numero: ");
            printf("%i\n", i);
            break;
        }
    }
    printf("\n");
}
void exercicio2(){
    int p, j;
    bool primo = false;

    printf("Digite um numero para verificar se e primo: \n");
    scanf("%i", &p);
    if (p < 0){
        p *= -1;
    }
    if (p == 0 || p == 1){
        primo = false;
    }
    for (j = 2; j < p; j++){
        if(p % j == 0){
            primo = false;
            break;
        } else{
            primo = true;
        }
    }
    if (primo == true){
        printf("E primo\n");
    } else{
        printf("Nao e primo\n");
    }
    printf("\n");
}  
void exercicio3(){
    int k, j;
    int aux;

    printf("E possivel verificar 4 numeros inteiros perfeitos entre 1 e 32767, sao eles: \n");

    for (k = 2; k <= 32767; k++){
        aux = 0;
        for (j = 1; j < k; j++){
            if (k % j == 0){
                aux = aux + j;
            }
        } if (aux == k){
            printf("%i\n", k);
        }
    }
    printf("\n");
}
void exercicio4(){
    int p, bora;
    int aux = 1;

    printf("Digite um numero que queira calcular o seu fatorial: ");
    scanf("%i", &p);

    for (bora = 1; bora <= p; bora++){
        aux = aux*bora;
    }
    printf("O fatorial e: %i\n", aux);
    printf("\n");
}
void exercicio5(){
    float cent;
    int qtd[5] = {0, 0, 0, 0, 0};
    
    printf("Entre com seus centavos: ");
    scanf("%f", &cent);
    
    cent = cent*100;
    
    if (cent == 100){
        printf("1 moeda de 1 real");
    } else {
        while (cent > 0){
            if (cent >= 50){
                cent = cent - 50;
                qtd[0] += 1;
            }
            if (cent > 24 && cent < 50){
                cent = cent - 25;
                qtd[1] += 1;
            }
            if (cent > 9 && cent < 25){
                cent = cent - 10;
                qtd[2] += 1;
            }
            if (cent > 4 && cent < 10){
                cent = cent - 5;
                qtd[3] += 1;
            }
            if (cent < 5 && cent > 0) {
                cent = cent - 1;
                qtd[4] += 1;
            }
        }    
    }
    
    if (cent != 100){
        printf("Moedas de 50 centavos: %i\n", qtd[0]);
        printf("Moedas de 25 centavos: %i\n", qtd[1]);
        printf("Moedas de 10 centavos: %i\n", qtd[2]);
        printf("Moedas de 5 centavos: %i\n", qtd[3]);
        printf("Moedas de 1 centavo: %i\n", qtd[4]);
    }
    printf("\n");
}
void exercicio6(){
    float reab, odo;
    float tot, gas, pre, aux;

    printf("Quantos litros de capacidade possui o tanque?\n");
    scanf("%f", &gas);
    printf("\n");

    printf("Quantas vezes abasteceu?\n");
    scanf("%f", &reab);
    printf("\n");

    printf("Quantos quilometros percorreu no total?\n");
    scanf("%f", &odo);
    printf("\n");

    printf("Qual era o preco do litro gasolina?\n");
    scanf("%f", &pre);
    printf("\n");

    if (reab <= 0){
        reab = 1;
    }

    tot = odo/(gas * ((reab - 2)/2));
    printf("A quilometragem por litro de gasolina e ainda a cada par de paradas eh %.2f\n", tot);

    tot = odo/(reab*gas);
    printf("A quilometragem por litro de gasolina a viagem toda eh %.2f\n", tot);

    aux = pre*gas*reab;
    tot = aux/odo;
    printf("O custo do combustivel por quilometro rodada em toda viagem eh %.2f\n", tot);

    printf("\n");

}
void exercicio7(){
    aluno universidade[15], aux; //Utilizando 15 para testar o programa, e deixando para caso 
    int i, j;					//que fique mais f�cil para que outros testem tamb�m.
    float media, soma = 0;
    
    for (i = 0; i < 15; i++){
    	printf("Digite o nome do aluno: ");
    	fflush(stdin);
    	fgets(universidade[i].nome, 15, stdin);
		printf("Digite a nota desse aluno: ");
    	scanf("%f", &universidade[i].nota);
        soma = soma + universidade[i].nota;
    	system("cls");
	}
	
	media = soma/15;
	
	for (i = 0; i < 15; i++){
		for (j = 0; j < 15; j++){
			if (universidade[i].nota < universidade[j].nota){
				aux = universidade[i];
				universidade[i] = universidade[j];
				universidade[j] = aux;
			}
		}
	}

	j = 0;
	printf("Alunos com maiores notas:\n\n");
	for (i = 14; i >= 0; i--){
		if (universidade[i].nota > media && j < 5){
			printf("%s", universidade[i].nome);
			j++;
		}
	}

	printf("\nA media da turma eh: %.2f\n\n", media);
}
void exercicio8(){
	int k, v[12], maior, maior2;
	printf("Vai digitando numeros inteiros para verificar os dois maiores:\n\n");
	for (k = 0; k < 12; k++){
		scanf("%d", &v[k]);
	}
	
	if (v[0] >= v[1]){
		maior = v[0];
		maior2 = v[1];
	} else{
		maior2 = v[0];
		maior = v[1];
	}
	maior = v[0];
	maior2 = v[1];
	
	for (k = 2; k < 12; k++){
		if (v[k] >= maior){
			maior2 = maior;
			maior = v[k];
		} else if(v[k] >= maior2){
			maior2 = v[k];
		}
	}
	
	printf("\n\nOs dois maiores numeros sao: %d\n%d\n\n", maior, maior2);
	
}
void exercicio9(){
	char string[80];
	int i, j, num = 0;
	bool y;
	
	printf("Entre com uma frase para verificar quantos caracteres distintos possui (contando espacos): ");
	fflush(stdin);
	fgets(string, 80, stdin);
	
	printf("%c ", string[0]);
	for (i = 1; string[i] != '\0'; i++){
		for (j = i - 1; j >= 0; j--){
			if (string[i] == string[j]){
				y = false;
				break;
			}else{
				y = true;
			}
		}
		if (y == true){
			printf("%c ", string[i]);
			num = num+1;
		}
	}
	printf("\n\nNumeros de caracteres unicos: %d", num);
	printf("\n\n");
}
void exercicio10(){
	Palavras freq[40];
	int i = 0, k, j = 0, cont = 0;
	char frase[80], palavra[40];
	bool y;
	printf("Entre com a frase para calcular a frequencia de cada palavra utilizada dentro: \n");
	fflush(stdin);
	fgets(frase, 80, stdin);
	while (i < strlen(frase)){
		y = false;
		if (frase[i] == ' ' || frase[i] == '\n'){
			for (k = 0; k < cont; k++){
				if (strcmp(palavra, freq[k].string) == 0){
					freq[k].N++;
					y = true;
				}
			}
			if (y == false){
				strcpy(freq[cont].string, palavra);
				freq[cont].N = 1;
				cont++;
			}
			for (k = 0; k < j; k++){
				palavra[k] = '\0';
			}
			j = 0;
		}else{
			palavra[j] = frase[i];
			j++;
		}
		i++;
	}
	for (i = 0; i < cont; i++){
		printf("\nPalavra: %s\nFrequencia: %d", freq[i].string, freq[i].N);
	}
	printf("\n");
}
void exercicio11(){
	char string[100], palavra[50];
	int i = -1, cont = 0, j = 0, k, l;
	
	printf("Entre com uma string para imprimir as palavras com 3 ou mais vogais: ");
	fflush(stdin);
	fgets(string, 100, stdin);
	
	do {
		i++;
		if (string[i] == 'a' ||string[i] == 'e' ||string[i] == 'i' ||string[i] == 'o' ||string[i] == 'u'){
			cont++;
		}
		if (string[i] == ' ' || string[i] == '\n'){
			if (cont >= 3){
				for (l = 0; l < j; l++){
					printf("%c", palavra[l]);
				}
				cont = 0;
			}else{
				cont = 0;
			}
			for (k = 0; k < j; k++){
				palavra[k] = '\0';
			}
			printf("\n");
			j = 0;
		}else{
			palavra[j] = string[i];
			j++;
		}
	}while(string[i] != '\0');
	
	printf("\n");
}

void exercicio12(){
	int num;
	printf("Insira um numero inteiro ate 1000: ");
	scanf("%d", &num);
	if (num > 1000){
		printf("Voce inseriu um numero maior que 1000, tente novamente.");
		printf("\n");
		return;
	}
	if (num == 0){
		printf("Zero");
		printf("\n\n");
		return;
	}
	if (num <= 10){
		if (num == 1){
			printf("Um");
		}else if(num == 2){
			printf("Dois");
		}else if(num == 3){
			printf("Tres");
		}else if(num == 4){
			printf("Quatro");
		}else if(num == 5){
			printf("Cinco");
		}else if(num == 6){
			printf("Seis");
		}else if(num == 7){
			printf("Sete");
		}else if(num == 8){
			printf("Oito");
		}else if(num == 9){
			printf("Nove");
		}else{
			printf("Dez");
		}
	}else if(num > 10 && num < 20){
		if(num == 11){
			printf("Onze");
		}else if(num == 12){
			printf("Doze");
		}else if(num == 13){
			printf("Treze");
		}else if(num == 14){
			printf("Catorze");
		}else if(num == 15){
			printf("Quinze");
		}else if(num == 16){
			printf("Dezesseis");
		}else if(num == 17){
			printf("Dezessete");
		}else if(num == 18){
			printf("Dezoito");
		}else if(num == 19){
			printf("Dezenove");
		}
	}else if(num >= 20 && num < 100){
		if(num / 10 == 2){
			printf("Vinte");
		}else if(num / 10 == 3){
			printf("Trinta");
		}else if(num / 10 == 4){
			printf("Quarenta");
		}else if(num / 10 == 5){
			printf("Cinquenta");
		}else if(num / 10 == 6){
			printf("Sessenta");
		}else if(num / 10 == 7){
			printf("Setenta");
		}else if(num / 10 == 8){
			printf("Oitenta");
		}else if(num / 10 == 9){
			printf("Noventa");
		}

		if(num % 10 == 1){
			printf(" e um");
		}else if(num % 10 == 2){
			printf(" e dois");
		}else if(num % 10 == 3){
			printf(" e tres");
		}else if(num % 10 == 4){
			printf(" e quatro");
		}else if(num % 10 == 5){
			printf(" e cinco");
		}else if(num % 10 == 6){
			printf(" e seis");
		}else if(num % 10 == 7){
			printf(" e sete");
		}else if(num % 10 == 8){
			printf(" e oito");
		}else if(num % 10 == 9){
			printf(" e nove");
		}
	}else if(num >= 100){
		if (num == 100){
			printf("Cem");
			printf("\n\n");
			return;
		}

		if(num / 100 == 1){
			printf("Cento");
		}else if(num / 100 == 2){
			printf("Duzentos");
		}else if(num / 100 == 3){
			printf("Trezentos");
		}else if(num / 100 == 4){
			printf("Quatrocentos");
		}else if(num / 100 == 5){
			printf("Quinhentos");
		}else if(num / 100 == 6){
			printf("Seiscentos");
		}else if(num / 100 == 7){
			printf("Setecentos");
		}else if(num / 100 == 8){
			printf("Oitocentos");
		}else if(num / 100 == 9){
			printf("Novecentos");
		}

		if(num % 100 > 10 && num % 100 < 20){
			if(num % 100 == 11){
				printf(" e Onze");
			}else if(num % 100 == 12){
				printf(" e Doze");
			}else if(num % 100 == 13){
				printf(" e Treze");
			}else if(num % 100 == 14){
				printf(" e Catorze");
			}else if(num % 100 == 15){
				printf(" e Quinze");
			}else if(num % 100 == 16){
				printf(" e Dezesseis");
			}else if(num % 100 == 17){
				printf(" e Dezessete");
			}else if(num % 100 == 18){
				printf(" e Dezoito");
			}else if(num % 100 == 19){
				printf(" e Dezenove");
			}
		}else if(num % 100 >= 20 && num % 100 < 30){
			printf(" e Vinte");
		}else if(num % 100 >= 30 && num % 100 < 40){
			printf(" e Trinta");
		}else if(num % 100 >= 40 && num % 100 < 50){
			printf(" e Quarenta");
		}else if(num % 100 >= 50 && num % 100 < 60){
			printf(" e Cinquenta");
		}else if(num % 100 >= 60 && num % 100 < 70){
			printf(" e Sessenta");
		}else if(num % 100 >= 70 && num % 100 < 80){
			printf(" e Setenta");
		}else if(num % 100 >= 80 && num % 100 < 90){
			printf(" e Oitenta");
		}else if(num % 100 >= 90 && num % 100 < 100){
			printf(" e Noventa");
		}
		
		if(num % 10 == 1 && (num % 100 > 19 || num % 100 < 11)){
			printf(" e um");
		}else if(num % 10 == 2 && (num % 100 > 19 || num % 100 < 11)){
			printf(" e dois");
		}else if(num % 10 == 3 && (num % 100 > 19 || num % 100 < 11)){
			printf(" e tres");
		}else if(num % 10 == 4 && (num % 100 > 19 || num % 100 < 11)){
			printf(" e quatro");
		}else if(num % 10 == 5 && (num % 100 > 19 || num % 100 < 11)){
			printf(" e cinco");
		}else if(num % 10 == 6 && (num % 100 > 19 || num % 100 < 11)){
			printf(" e seis");
		}else if(num % 10 == 7 && (num % 100 > 19 || num % 100 < 11)){
			printf(" e sete");
		}else if(num % 10 == 8 && (num % 100 > 19 || num % 100 < 11)){
			printf(" e oito");
		}else if(num % 10 == 9 && (num % 100 > 19 || num % 100 < 11)){
			printf(" e nove");
		}
	}
	if(num == 1000){
		printf("Mil");
	}
	printf("\n\n");
}

void exercicio13(){
	int j, TAM = 5;
	int v1[TAM], v2[TAM], v3[TAM];
	Insere(v1, TAM);
	Insere(v2, TAM);
	Insere(v3, TAM);
	Ordena(v1, TAM);
	Ordena(v2, TAM);
	Ordena(v3, TAM);
	printf("v1:\n");
	for (j = 0; j < TAM; j++){
		printf("%d ", v1[j]);
	}
	printf("\n\n");
	printf("v2:\n");
	for (j = 0; j < TAM; j++){
		printf("%d ", v2[j]);
	}
	printf("\n\n");
	printf("v3:\n");
	for (j = 0; j < TAM; j++){
		printf("%d ", v3[j]);
	}
	printf("\n\n");
}

void exercicio14(){
	int h = 0, s = 0, min = 0;
	int loop = 0;

	do{
		system("cls");
		printf("Cronometro:\n\n");
		printf("%d:%d:%d", h, min, s);

		if(s == 60){
			s = 0;
			min++;
		}
		if(min == 60){
			min = 0;
			h++;
		}
		if(h == 24){
			h = 0;
		}
		Sleep(1000);
		s++;
	}while(loop == 0);
}

void exercicio15(){
	int qtd, i, ano, cont21 = 0, contMC = 0, cont60p = 0;
	bool y = false;
	
	printf("Entre com o numero de motoristas: "); 
	scanf("%d", &qtd);							  
	motorista acidente[qtd];					  
	printf("Digite o ano atual para fins matematicos: ");
	scanf("%d", &ano);
	
	system("cls");
	printf("Agora preencha os dados dos motoristas: \n\n");
	for (i = 0; i < qtd; i++){
		printf("Ano de nascimento: ");
		fflush(stdin);
		scanf("%d", &acidente[i].nasc);
		printf("Sexo, M ou F: ");
		fflush(stdin);
		scanf("%c", &acidente[i].sexo);
		printf("Procedencia; 0 - Capital ou 1 - Interior ou 2 - Outro Estado: ");
		fflush(stdin);
		scanf("%d", &acidente[i].proc);
		system("cls");
	}
	
	for (i = 0; i < qtd; i++){
		if (acidente[i].nasc > (ano-21)){
			cont21++;
		}
		if (acidente[i].proc == 0 && acidente[i].sexo == 'F'){
			contMC++;
		}
		if (acidente[i].nasc < (ano-60) && acidente[i].proc == 1){
			cont60p++;
		}
		if (acidente[i].sexo == 'F' && acidente[i].nasc < (ano-60)){
			y = true;
		}
	}
	printf("Porcentagem de motoristas com menos de 21 anos: %f por cento\n\n", (cont21/(float)qtd)*100);
	printf("Quantidade de mulheres que sao da capital: %d\n\n", contMC);
	printf("Motoristas do interior do estado com mais de 60 anos: %d\n\n", cont60p);
	if(y == true){
		printf("Existe uma mulher com mais de 60 anos nesses dados");
	}else{
		printf("Nao existe uma mulher com mais de 60 anos nesses dados");
	}
	printf("\n\n");
}
void exercicio16(){
	int player1[2], player2[2], p1 = 0, p2 = 0, i = 1;
	
	while (i < 12){;
		player1[0] = 0;
		player2[0] = 0;
		player1[1] = 0;
		player2[1] = 0;
		
		printf("Jogador 1, jogue seus dados: \n");
		getch();
		player1[0] = rand() %6 +1;
		player1[1] = rand() %6 +1;
		printf("Dado 1: %d\n", player1[0]);
		printf("Dado 2: %d\n", player1[1]);
		printf("\n\n");
		
		printf("Jogador 2, jogue seus dados: \n");
		getch();
		player2[0] = rand() %6 +1;
		player2[1] = rand() %6 +1;
		printf("Dado 1: %d\n", player2[0]);
		printf("Dado 2: %d\n", player2[1]);
		printf("\n\n");
		
		if (player1[0] == player1[1]){
			if (player2[0] == player2[1]){
				if ((player1[0]*2) > (player2[0]*2)){
					printf("Rodada %d ganha pelo jogador 1", i);
					p1++;
				}else if((player1[0]*2) < (player2[0]*2)){
					printf("Rodada %d ganha pelo jogador 2", i);
					p2++;
				}else{
					printf("Rodada empatada, sem pontos para ninguem");
				}
			}else{
				printf("Rodada %d ganha pelo jogador 1", i);
					p1++;
			}
		}else if(player2[0] == player2[1]){
			printf("Rodada %d ganha pelo jogador 2", i);
			p2++;
		}else{
			if ((player1[0] + player1[1]) > (player2[0] + player2[1])){
				printf("Rodada %d ganha pelo jogador 1", i);
				p1++;
			}else if((player1[0] + player1[1]) < (player2[0] + player2[1])){
				printf("Rodada %d ganha pelo jogador 2", i);
				p2++;
			}else{
				printf("Rodada empatada, sem pontos para ninguem");
			}
		}
		printf("\n");
		system("pause");
		system("cls");
		i++;
	}
	if (p1 > p2){
		printf("Jogador 1 ganhou, parabens!\n");
		printf("Placar final: Jogador 1 (%d  x  %d) Jogador 2", p1, p2);
	}else if(p2 > p1){
		printf("Jogador 2 ganhou, parabens!\n");
		printf("Placar final: Jogador 1 (%d  x  %d) Jogador 2", p1, p2);
	}else{
		printf("Empate.\n");
		printf("Placar final: Jogador 1 (%d  x  %d) Jogador 2", p1, p2);
	}
	printf("\n\n");
}




















