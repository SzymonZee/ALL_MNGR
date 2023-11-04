#include "PatientBuilder.h"

PatientBuilder& PatientBuilder::setAge(const int& age)

{
	//method chaining   By returning a reference to the builder with each method, you're 
	//effectively saying "after you've done this action, here's the builder back to you for further actions if needed." 
		//By utilizing the . operator, you can keep chaining these calls for as many configurations as necessary, all in one line.
	// example builder.SetName("John").SetAge(30).SetMedicalHistory("None");
	m_Patient->age = age;
	return *this;


}

PatientBuilder& PatientBuilder::setName(const std::string& name)
{
	m_Patient->m_Name = name;

	return *this;

}
std::unique_ptr<Patient> PatientBuilder::build()
{
	return  std::move(m_Patient);
}