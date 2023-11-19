#include "Patient.h"


void Patient::setName(std::string name)
{
	this->m_Name = name;
}

void Patient::setAge(int age)
{
	this->m_Age = age;
}

std::string Patient::getName() const
{
	return this->m_Name;
}