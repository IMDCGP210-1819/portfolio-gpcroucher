// FiniteStateMachine.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include "FSM.h"
#define cin std::cin
#define cout std::cout

FSM fsm;
std::string command;

int main()
{
	while (fsm.currentState != FSM::Exiting) 
	{
		cout << "Enter one of the following: begin, end, pause, resume, exit.\n";
		cout << "> ";
		cin >> command;

		if (command == "begin") fsm.Begin();
		else if (command == "end") fsm.End();
		else if (command == "pause") fsm.Pause();
		else if (command == "resume") fsm.Resume();
		else if (command == "exit") fsm.Exit();
		else cout << "invalid command";
	}
	cout << "Exited.";

    return 0;
}


