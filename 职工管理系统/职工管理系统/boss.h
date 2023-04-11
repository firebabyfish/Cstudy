#pragma once
#pragma once
#include "worker.h"

class Boss : public Worker
{
public:

	Boss(int id, string name, int depid);

	void ShowInfo();

	string getDepName();

};