#pragma once
#include <iostream>
class Patient
{


public:
	
	void setName(std::string name);
	std::string getName() const;
	void setAge(int age);
	int getAge() {
		return this->m_Age;
	}


private:

	std::string m_Name;
	int m_Age;

};

