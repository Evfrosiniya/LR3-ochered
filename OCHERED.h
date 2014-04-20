/** @class queue
@brief  Класс, реализующий очередь элементов

Содержит методы добавления элемента в конец очереди, удаления вершины, получения значения вершины и вывода всех элементов очереди на экран
*/

#pragma once
class queue
{
private:
	class item
	{
	private:
		int info;
	public:
		item* next;
		item(int info_, item* next_)
		{
			this->info = info_;
			this->next = next_;
		}
		~item()
		{
		}
		int get()
		{
			return this->info;
		}
	};
	item* head;
	item* tail;
public:
	queue();
	~queue();
	void push(int a);
	void pop();
	int peek();
	void print();
};