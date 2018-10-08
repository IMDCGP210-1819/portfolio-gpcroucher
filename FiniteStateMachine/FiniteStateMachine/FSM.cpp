#include <iostream>
#include "FSM.h"
#define cin std::cin
#define cout std::cout

enum States
{
		Inactive,
		Active,
		Paused,
		Exiting
};

States currentState;

void FSM::Begin() {
		switch (currentState)
		{
		case Inactive:
			cout << "changing state to Active\n";
			currentState = Active;
			break;
		case Active:
			cout << "can't begin when active\n";
			break;
		case Paused:
			cout << "can't begin when paused\n";
			break;
		case Exiting:
			cout << "can't begin when exiting\n";
			break;
		default:
			break;
		}
	}

void FSM::End() {
		switch (currentState)
		{
		case Inactive:
			cout << "can't end when inactive\n";
			break;
		case Active:
			cout << "changing state to Inactive\n";
			currentState = Inactive;
			break;
		case Paused:
			cout << "changing state to Inactive\n";
			currentState = Inactive;
			break;
		case Exiting:
			cout << "can't end when exiting\n";
			break;
		default:
			break;
		}
	}

void FSM::Pause() {
		switch (currentState)
		{
		case Inactive:
			cout << "can't pause when inactive\n";
			break;
		case Active:
			cout << "changing state to Paused\n";
			currentState = Paused;
			break;
		case Paused:
			cout << "can't pause when paused\n";
			break;
		case Exiting:
			cout << "can't pause when exiting\n";
			break;
		default:
			break;
		}
	}

void FSM::Resume() {
		switch (currentState)
		{
		case Inactive:
			cout << "can't resume when inactive\n";
			break;
		case Active:
			cout << "can't resume when active\n";
			break;
		case Paused:
			cout << "changing state to Active\n";
			currentState = Active;
			break;
		case Exiting:
			cout << "can't resume when exiting\n";
			break;
		default:
			break;
		}
	}

void FSM::Exit() {
		switch (currentState)
		{
		case Inactive:
			cout << "changing state to Exiting\n";
			currentState = Exiting;
			break;
		case Active:
			cout << "can't exit while active\n";
			break;
		case Paused:
			cout << "can't exit while paused\n";
			break;
		case Exiting:
			cout << "can't exit while exiting\n";
			break;
		default:
			break;
		}
	}
