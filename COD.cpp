#include "OCHERED.h"
#include <iostream>

void main() {
	int N, ak;
	std::cin >> N;
	queue A = queue();
	for (int i = 0; i < N; i++)
	{
		std::cin >> ak;
		A.push(ak);
	}
	A.print();
}