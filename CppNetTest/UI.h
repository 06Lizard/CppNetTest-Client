#pragma once
#include <iostream>
#include "Client.h"
#include "SocketHandler.h"

class UI : public SocketHandler
{
private:
	bool running;
	Client* client = new Client("127.0.0.1", 12345);

	/// <summary>
	/// Brings the user to the chat screen.
	/// </summary>
	void ChatBox();

	/// <summary>
	/// Brings the user to the log in screen.
	/// </summary>
	void LogIn();

public:
	UI(); // Constructor (unused)

	/// <summary>
	/// Start the program.
	/// </summary>
	void Run();

};
