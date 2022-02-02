#include <iostream>
#include "Employer.h"
#include"Manager.h"
#include"President.h"
#include"Worker.h"
int main()
{
	Manager manager;
	manager.Print();
	President president;
	president.Print();
	Worker worker;
	worker.Print();
}
