#ifndef EMPLOYEE_HPP_
#define EMPLOYEE_HPP_

#include "Person.hpp"

class Employee : public Person {
public:
	Employee(const std::string & name, const std::string & job) :Person(name) {; } 
	~Employee() { ; } 
	
	void Print() const;

private:
	std::string job;
}



#endif /*EMPLOYEE_HPP_ */