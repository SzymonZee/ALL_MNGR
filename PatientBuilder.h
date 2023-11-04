#pragma once
#include <iostream>
#include <memory>
#include "Patient.h"
class PatientBuilder
{

	PatientBuilder& setName(const std::string& name);
	PatientBuilder& setAge(const int& age);
	std::unique_ptr<Patient> build();
private:

	std::unique_ptr<Patient>m_Patient;
	
};

