#include <stdio.h>
#include <stdlib.h>


typedef struct _list{
	struct _node *head;
	struct _node *tail;
}list;

typedef struct _node{
	int data;
	struct _node *next;
}node;


int list_init(list *temp){
	temp->tail = NULL;
	temp->head = temp->tail;
}

int list_add_to_tail(list *temp, int n){
	
	if(!temp->tail){
		temp->tail = malloc(sizeof(node));
		temp->tail->data = n;
		temp->tail->next = NULL;
		temp->head = temp->tail;
	}else{
		temp->tail->next = malloc(sizeof(node));
		temp->tail->next->data = n;
		temp->tail->next->next = NULL;
		temp->tail = temp->tail->next;
	}
}

int list_printall(list *temp){
	node *temp_node = temp->head;
	while(temp_node != NULL){
		printf("%d\n",temp_node->data);
		temp_node = temp_node->next;
	}	
}


int main(void){
	list my_list;
	list_init(&my_list);
	
	list_add_to_tail(&my_list,1);
	list_add_to_tail(&my_list,2);
	list_add_to_tail(&my_list,3);
	
	list_printall(&my_list);

	return 0;
}
