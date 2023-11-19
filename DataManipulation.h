#pragma once
#include <fstream>
#include "Rutine.h"
#include <memory>
#include <iostream>
class DataManipulation
{
	std::unique_ptr<Rutine>m_Rutine;

	
	void getSleepdata(std::ifstream sleep_data,std::string file_name)
	{
	

		sleep_data.open(file_name);
		if (sleep_data)
		{
			while (!sleep_data.eof())
		{
				
				m_Rutine->insertData(std::make_unique<Rutine::sleepLog>());

				

		 }

		}
		else
		{

		}
	}

};

