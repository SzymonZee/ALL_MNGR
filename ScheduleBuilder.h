#pragma once
#include "Time_Schedule.h"
class ScheduleBuilder
{

 
	void createSchedule();

	void sortSchedule();


	ScheduleBuilder& addEvent(std::unique_ptr<Event>& event);


	std::unique_ptr<Time_Schedule>m_time_schedule;


};


