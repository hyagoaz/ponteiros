int main() 
{
	// criacao e inicializacao de variaveis
	int Variavel_1 = 1, Variavel_2 = 2;
	char Controle = 'n', Descarga;
	
	// criacao de ponteiros
	int *Ponteiro_1, *Ponteiro_2;
	
	// enquanto 
	while (1)
	{
	// inicializacao de ponteiros
	Ponteiro_1 = &Variavel_1; // Ponteiro_1 recebe o endereço de Variavel_1
	Ponteiro_2 = &Variavel_2; // Ponteiro_2 recebe o endereço de Variavel_2
	
	// exibe o valor contido em cada variavel a partir do endereco contido
	// nos ponteiros
	printf ("\nVariavel_1 = %i", *Ponteiro_1);
	printf ("\nVariavel_2 = %i", *Ponteiro_2);

	// troca
	int aux = *Ponteiro_1;
	*Ponteiro_1 = *Ponteiro_2;
	*Ponteiro_2 = aux;
	
	// exibe o valor contido em cada variavel a partir do endereco contido
	// nos ponteiros, apos efetuar a troca
	printf ("\n\nVariavel_1 depois do swap = %i", *Ponteiro_1);
	printf ("\nVariavel_2 depois do swap = %i", *Ponteiro_2);
		
	// exibe a solicitacao de controle
	printf ("\n\nDeseja finalizar o programa? (s/n): ");
	// efetua a leitura do comando
	scanf ("%c", &Controle);
	// se o comando indicar a finalizacao, finaliza o loop
	if (Controle == 's')break;
	
	// exibe a solicitacao de um valor
	printf ("\nDigite um valor para a Variavel_1: ");
	// efetua a leitura do valor e tranfere o valor para a Variavel_1
	scanf ("%i", Ponteiro_1);
		// exibe a solicitacao de um valor
	printf ("Digite um valor para a Variavel_2: ");
	// efetua a leitura do valor e tranfere o valor para a Variavel_2
	scanf ("%i%c", Ponteiro_2, &Descarga);
		
	}
	// retorna 0;
}
