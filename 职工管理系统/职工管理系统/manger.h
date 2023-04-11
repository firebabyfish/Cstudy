#pragma once
#include "worker.h"

class Manger : public Worker
{
public:

	Manger(int id, string name, int depid);

	void ShowInfo();

	string getDepName();

};