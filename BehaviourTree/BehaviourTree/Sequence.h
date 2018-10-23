#pragma once
#include "Behaviour.h"
class Sequence :
	public Behaviour
{
public:
	Sequence();
	~Sequence();
protected:
	virtual void onInitialize() = 0;
	virtual void onTerminate(EStates states) = 0;
};

