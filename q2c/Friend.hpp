#ifndef FRIEND_HPP_
#define FRIEND_HPP_
#include "Person.hpp"

class Friend : public Person{

public:
	Friend(const std::string name) :Person(name) {}
	~Friend(){}
	void Print() const; 




};

#endif /*FRIEND_HPP_*/