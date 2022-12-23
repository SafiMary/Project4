#include "Cat.h"

Cat::Cat() :_nickname("Piter"), _age(5) {}

Cat::Cat(const std::string& nickname):_nickname(nickname) {}

Cat::Cat(const size_t age):_age(age) {}

const std::string& Cat::getNickname() const {
	return _nickname;
}
void Cat::setNickname(const std::string& nickname) {
	_nickname = nickname;
}

size_t Cat::getAge() const {
	return _age;
}
void Cat::setAge(size_t age) {
	_age = age;
}

bool Cat::operator==(const Cat& other) {
	return _age == other.getAge();
}


