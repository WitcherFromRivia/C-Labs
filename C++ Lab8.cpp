

#include "pch.h"
#include <iostream>

struct slist {
	int    num;
	slist* next;
};

bool slist_add(slist*& head, slist*& tail, int num);
void slist_clear(slist*& head, slist*& tail);
void slist_print(std::ostream& hout, const slist* p);

//вставить после нечётного элемента
void slist_insert(slist*& head, slist*& tail, int num) {
	slist* p;
	for (slist* i = head; i != NULL; i = i->next) {
		if (i->num % 2) {
			p = new (std::nothrow) slist();
			if (p == NULL)
				break;
			p->num = num;
			p->next = NULL;

			if (i == tail) {
				tail->next = p;
				tail = p;
				break;
			}
			else {
				p->next = i->next;
				i->next = p;
			}
		}
	}
}

int main(void) {
	slist* head = NULL, *tail = NULL;

	int  a[] = { 1, 3, 5, 7, 9,  8, 11, 512, 333 };
	int i, n = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < n; ++i)
		slist_add(head, tail, a[i]);

	slist_print(std::cout, head);

	int k = 0;
	for (const slist* p = head; p != NULL; p = p->next) {
		if (!(p->num % 2))
			k = p->num;
	}

	slist_insert(head, tail, k);
	slist_print(std::cout, head);
	slist_clear(head, tail);
	return 0;
}

//вставка в конец списка
bool  slist_add(slist*& head, slist*& tail, int num) {
	slist* p = new (std::nothrow) slist();
	if (p != NULL) {
		p->next = NULL;
		p->num = num;
		if (head == NULL)
			head = tail = p;
		else {
			tail->next = p;
			tail = p;
		}
	}
	return (p != NULL);
}

//удаление всего списка
void slist_clear(slist*& head, slist*& tail) {
	slist* t;
	while (head != NULL) {
		t = head;
		head = head->next;
		delete t;
	}
	tail = NULL;
}

//печать списка
void slist_print(std::ostream& _out, const slist* p) {
	for (; p != NULL; p = p->next)
		_out << p->num << ' ';
	_out << std::endl;
}