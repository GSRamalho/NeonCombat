#pragma once
#include "Element.h"
template<class TL> class List
{
private:
	Element<TL>* head;
	Element<TL>* tail;
	int length =0;

public:
	List();
	~List();

	int getLength() { return length; }

	TL* getItem(int position) {
		Element<TL>* temp = head;
		if (position == 0)
			return temp->getItem();
		for (int i = 0; i < position; i++) {
			temp = temp->getNext();
		}
		return temp->getItem();
	}

	void push(TL* item) {
		if (head == nullptr) {
			head = new Element<TL>;
			head->setItem(item);
			tail = head;
		}
		else {
			Element<TL>* temp = new Element<TL>;
			temp->setItem(item);
			tail->setNext(temp);
			tail = temp;
		}
		length++;
	}

	void pop(TL* item) {
		Element<TL>* temp = head;
		Element<TL>* tempPrev = nullptr;
		while (temp->getItem() != item) {
			tempPrev = temp;
			temp = temp->getNext();
		}
		if (temp == head) {
			head = temp->getNext();
		}
		else if (temp == tail) {
			tempPrev->setNext(nullptr);
			tail = tempPrev;
		}
		else {
			tempPrev->setNext(temp->getNext());
		}
		delete temp;
		length--;
	}
};

template<class TL>
inline List<TL>::List()
{
	head = nullptr;
	tail = nullptr;
	length = 0;
}

template<class TL>
inline List<TL>::~List()
{
}
