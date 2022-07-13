// 8_ферзей.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#define bool int
#define true 1
#define false 0

using namespace std;
class queen

{

public:


	queen(int, queen*);

	bool findSolution();

	bool advance();

	void print();

private:

	// поля данных

	int row;

	const int column;

	queen* neighbor;

	// внутренний метод

	bool canAttack(int, int);

};

queen::queen(int col, queen* ngh) : column(col), neighbor(ngh)

{

	row = 1;

}




void main()

{



}

