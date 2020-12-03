#include "zhan.h"

int main(int argc, char **argv)
{
	List *list = (List *)malloc(sizeof(List));
	initList(list);
	push(list, 2);
	push(list, 3);
	push(list, 5);
	push(list, 6);
	dispList(list);
	Node *tmp = getTop(list);
	printf("getTop result: %d\n", tmp->data);
	pop(list);
	dispList(list);
	pop(list);
	dispList(list);
	printf("the list: %d\n", getLength(list));

	return 0;
}
