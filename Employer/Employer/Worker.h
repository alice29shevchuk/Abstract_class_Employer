#pragma once
#include"Employer.h"
#include<iostream>
class Worker:public Employer
{
public:
	void Print()
	{
		std::cout << "I am Worker!\n";
	}
};

