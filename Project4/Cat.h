#pragma once
#include <string>

class Cat
{
public:
	Cat();
	Cat(const std::string& nickname);
	Cat(const size_t age);
	
	const std::string& getNickname() const;
	void setNickname(const std::string& nickname);

	size_t getAge() const;
	void setAge(size_t age);
	
	bool operator==(const Cat& other);

private:
	std::string _nickname;
	size_t _age;
};

