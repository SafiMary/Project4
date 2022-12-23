#include <iostream>
#include "Person.h"
#include "Cat.h"
int main() {
	setlocale(LC_ALL, "Russian");
	Person p1("Alex");
	Person p2("John");
	std::cout << p1.getName() << std::endl;
	std::cout << p2.getName() << std::endl;

	Person p3 = p1 + p2;
	std::cout << "=========================" << std::endl;
	std::cout << p3.getName() << std::endl;
	std::cout << "Больше ли р1, чем р2 ?--->" << (p1 > p2) << std::endl;


	Cat a(5);
	Cat b(7);
	std::cout << a.getAge() << std::endl;
	std::cout << b.getAge() << std::endl;

	std::cout << "Равен ли возраст котов?" << (a == b) << std::endl;

}