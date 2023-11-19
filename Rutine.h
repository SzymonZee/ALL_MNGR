#pragma once
#include"PatientProfile.h"

#include <chrono>
class Rutine
{


public:

	float primaryAcitvitytime{};

	struct  sleepLog
	{
		sleepLog() = default;
		float m_sleepLenght;
		
		std::chrono::year_month_day m_date;
		bool operator<(const sleepLog& next_day)const
		{
			if (m_date != next_day.m_date)
			{
				return m_date < next_day.m_date;
			}
		}
	};
	std::unique_ptr<sleepLog>m_sleepEntry;

		


		void insertData(std::unique_ptr<sleepLog>m_log)

		{

			this->m_sleepSchedule.insert(std::move(m_log));

		}

		/*
		void addData()

		{
			for (auto& entry : m_sleepEntries)
			{
				this->insertData(std::move(entry));
			}
		}
		*/


		/// <summary>
		/// data from esp32 microphone when the db is higher than smthng >95 db then i know im awake;
		/// 
		/// </summary>
		/// 
	public:

		std::set <std::unique_ptr<sleepLog>> m_sleepSchedule;







	};

