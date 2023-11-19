#pragma once
#include "Event.h"
#include <algorithm>
#include <vector>
#include <winsock2.h>
class Time_Schedule
{



public:
     

	bool saveSchedule();


	std::vector<std::unique_ptr<Event>>m_event;


};

