#pragma once

class FSM {
public:
	enum States
	{
		Inactive,
		Active,
		Paused,
		Exiting
	};
	States currentState;
	void Begin();
	void End();
	void Pause();
	void Resume();
	void Exit();

};