#include "PatientBuilder.h"
PatientBuilder::PatientBuilder() : m_Patient(std::make_unique<Patient>())
{

}

PatientBuilder& PatientBuilder::setAge(const int& age)
{
	m_Patient->setAge(age);
	return *this;


}

PatientBuilder& PatientBuilder::setName(const std::string& name)
{
	m_Patient->setName(name);

	return *this;

}

std::unique_ptr<Patient> PatientBuilder::build()
{
	return  std::move(m_Patient);
}