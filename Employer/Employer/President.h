#pragma once
#include"Employer.h"
#include<iostream>
class President:public Employer
{
public:
	void Print()
	{
		std::cout << "I am President!\n";
	}
};

