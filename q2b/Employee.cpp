
#include "Employee.hpp"

void Employee::Print() const { Person::Print(); std::cout << Employee::job << std::endl; }