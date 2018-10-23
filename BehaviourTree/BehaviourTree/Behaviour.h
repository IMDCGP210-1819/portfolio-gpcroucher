#pragma once

class Behaviour
{
public:
	Behaviour()
	{

	}
	~Behaviour()
	{

	}
	enum class EStates {
		Invalid,
		Success,
		Failure,
		Running
	};
protected:
	virtual void onInitialize() = 0;
	virtual void onTerminate(EStates states) = 0;
private:
	EStates currentStatus;
};

