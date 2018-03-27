/*
Á´±í 
*/


#include <stdio.h>
#include <stdlib.h>

struct node{
	int number;
	struct node* next;
};


struct node* create(){
	struct node* result;	
	
	struct node* n1 = (struct node*)malloc(sizeof(struct node));
	struct node* n2 = (struct node*)malloc(sizeof(struct node));
	struct node* n3 = (struct node*)malloc(sizeof(struct node));
	
	n1->number = 1;
	n2->number = 2;
	n3->number = 3;
	
	result = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;

	return result;
}

void print(struct node* h){
		
	while(h != NULL){
		printf("%d", h->number);		
		h = h->next;
	}

}

void insert(struct node* h, int pos){
	
	
	
}



int main(int argc, char *argv[]) {
	//create
	struct node* head;
	head = create();
	//print
	print(head);
	
	
	system("pause");
	return 0;
}


