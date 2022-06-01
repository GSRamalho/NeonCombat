#pragma once
template <class TE> class Element
{
private:
	Element<TE>* next;
	TE* item;
public:
	Element();
	~Element();
	void setNext(Element<TE>* next) { this->next = next; }
	void setItem(TE* item) { this->item = item; }
	Element<TE>* getNext() { return next; }
	TE* getItem() { return item; }
};

template<class TE>
inline Element<TE>::Element()
{
	next = nullptr;
	item = nullptr;
}

template<class TE>
inline Element<TE>::~Element()
{
}
