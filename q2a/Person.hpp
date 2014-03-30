#ifndef PERSON_HPP_
#define PERSON_HPP_

#include <string>
#include <iostream>


class Person {

	std::string name;

public:
	Person(const std::string &Name = "Anonymous") :name(Name){}
	~Person(){}
	void setName(const std::string &newName){ name = newName; }
	std::string getName(){ return name; }
	void Print() const;




};



#endif /* PERSON_HPP_ */