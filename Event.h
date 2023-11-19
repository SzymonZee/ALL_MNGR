#pragma once
#include <iostream>
class Event
{
public:
	struct Location
	{
	
		std::string m_street_name;
		int m_street_number;
		int m_flat_number;
		std::string m_instruction;

	};

	Location getLocation() 
	{
		return this->m_location;
	};

	// change to chrono
	float getStartTime()
	{
		return this-> m_start_time;
	};

	float getEndTime()
	{
		return this-> m_end_time;
	};

	Location m_location;
	double m_start_time;
	double m_end_time;

};

