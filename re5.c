#include <stdio.h>
#include <stdlib.h>

struct node{
	struct node *next;
	int data;
};

struct list{
	struct node *head;
	struct node *tail;

};

int list_printall(struct list *temp){
	struct node *temp_node = temp->head;
	
	while(temp_node != NULL){
		printf("%d\n", temp_node->data);
	}	
}

int list_init(struct list *temp){
	temp->tail = NULL;
	temp->head = temp->tail;
}

int list_add_to_tail(struct list *temp, int i){
	
}


int main(){

	struct node node1;
	list_init(&node1);
	list_add_to_tail(&node1,1);
	list_add_to_tail(&node1,2);
	list_add_to_tail(&node1,3);

	list_printall(&node1);
		
	return 0;
}
