#include "ScheduleBuilder.h"

void ScheduleBuilder::createSchedule()
{
}

inline void ScheduleBuilder::sortSchedule()
{

	std::sort(m_time_schedule->m_event.begin(), m_time_schedule->m_event.end(), [](const std::unique_ptr<Event>& event, std::unique_ptr<Event>& event_) {
		event->getEndTime

		})


}

inline ScheduleBuilder& ScheduleBuilder::addEvent(std::unique_ptr<Event>& event)
{

	this->m_time_schedule->m_event.push_back(std::move(event));

}
