/*
nama:Ratipah
nim :2020302052
matkul:struktur data
*/
#include <stdio.h> 
#include <stdlib.h>

struct node { 
		int n;
		struct node *next;
};
struct node *head = NULL, *tail, *curr;

void insertAkhir(int n); 

main()
{
	int n, x;
	//struct node *head = NULL;
	printf(".. persyaratan : 2 < banyak data >= 5 ..");
	printf("\n");
	printf("Masukkan jumlah node yang ingin ditambah: ");
	scanf("%d", &n); 
	if ((n>2)&&(n<=5)){
		while(n-- > 0)
		{
			printf("Masukkan data yang ingin dimasukkan ke dalam node: ");
			scanf("%d", &x); 
			insertAkhir(x);
		}
			
		printf("Data linked list: "); 
		curr = head;
		while(curr != NULL )
		{
			printf("%d ",curr->n); 
			curr = curr->next;
		}
		printf("\n");
	}
	else if(n<=2)
	{
		printf("\n Banyaknya data yang anda masukkan kurang dari persyaratan \n");
	
	}
	else if(n>5)
	{
		printf("\n Banyaknya data yang anda masukkan melebihi persyaratan \n");
	}
	printf("\n");
	system("PAUSE"); 
	return 0;
}


void insertAkhir(int n)
{
	curr = (struct node *)malloc(sizeof(struct node)); 
	curr->n = n;
	if ( head == NULL ){
		head =tail = curr; 
	}
	else
	{
		tail->next = curr; 
		tail = curr;
	}
	tail ->next = NULL; 
}
