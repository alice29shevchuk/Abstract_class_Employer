#pragma once
#include"Employer.h"
#include<iostream>
class Manager:public Employer
{
public:
	void Print()
	{
		std::cout << "I am Manager!\n";
	}
};

