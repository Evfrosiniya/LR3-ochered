#include "OCHERED.h"
#include <iostream>


queue::queue()
{
	this->head = nullptr;
	this->tail = nullptr;
}


queue::~queue()
{
	while (this->head != nullptr)
	{
		this->pop();
	}
}

/**
* @brief Добавление элемента в конец очереди
*
* @param a значение элемента
*/

void queue::push(int a)
{
	if (this->head != nullptr)
	{
		this->tail->next = new item(a, nullptr);
		this->tail = this->tail->next;
	}
	else
	{
		this->tail = new item(a, nullptr);
		this->head = this->tail;
	}
}

/**
* @brief Удаление элемента из очереди
*/

void queue::pop()
{
	item* p = this->head;
	this->head = p->next;
	p->~item();
}

/**
* @brief Получение значения первого элемента очереди
*/

int queue::peek()
{
	return this->head->get();
}

/**
* @brief Вывод очереди на экран
*/

void queue::print()
{
	while (this->head != nullptr)
	{
		std::cout << this->peek() << " ";
		this->pop();
	}
}