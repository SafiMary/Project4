#include "Person.h"

Person:: Person() {
	_name = "DefaultName";
	_id = -1;
}

Person::Person(const std::string& name) : _name(name), _id(-1) {}
//возвращаемый тип класс::функция и ключевые слова{}
const std::string& Person::getName()const {
	return _name;
}

void Person::setName(const std::string& name) {
	_name = name;
}

size_t Person::getId() const {
	return _id;
}
void Person::setId(size_t id) {
	_id = id;
}
//p1.operator+(p2)
Person Person::operator+(const Person& other) {
	std::string resName = _name + other.getName();
	Person resPerson(resName);
	return resPerson;
}
//p1.operator>(p2)
bool Person::operator>(const Person& other) {
	return _name.size() > other.getName().size();
	/*int mySize = _name.size();
	int otherSize = other.getName().size();
	if (mySize > otherSize) {
		return true;
	}
	return false;*/
}