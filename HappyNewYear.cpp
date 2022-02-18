#include<iostream>
#include<Windows.h>
#include<thread>
#include<chrono>
using namespace std;

int main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 1; i <= 6; i++)
	{
		for (int x = 1; x <= 6 - i; x++)
		{
			cout << " ";
			this_thread::sleep_for(chrono::milliseconds(50));
		}
		for (int x = 1; x <= i * 2 - 1; x++)
		{
			SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			cout << "*";
			this_thread::sleep_for(chrono::milliseconds(50));
		}
		for (int x = 1; x <= 13 - 2 * i; x++)
		{
			cout << " ";
			this_thread::sleep_for(chrono::milliseconds(50));
		}
		for (int x = 1; x <= i * 2 - 1; x++)
		{
			cout << "*";
			this_thread::sleep_for(chrono::milliseconds(50));
		}
		for (int x = 1; x <= 13 - 2 * i; x++)
		{
			cout << " ";
			this_thread::sleep_for(chrono::milliseconds(50));
		}
		for (int x = 1; x <= i * 2 - 1; x++)
		{
			cout << "*";
			this_thread::sleep_for(chrono::milliseconds(50));
		}
		for (int x = 1; x <= 13 - 2 * i; x++)
		{
			cout << " ";
			this_thread::sleep_for(chrono::milliseconds(50));
		}
		for (int x = 1; x <= i * 2 - 1; x++)
		{
			cout << "*";
			this_thread::sleep_for(chrono::milliseconds(50));
		}
		for (int x = 1; x <= 13 - 2 * i; x++)
		{
			cout << " ";
			this_thread::sleep_for(chrono::milliseconds(50));
		}
		for (int x = 1; x <= i * 2 - 1; x++)
		{
			cout << "*";
			this_thread::sleep_for(chrono::milliseconds(50));
		}
		for (int x = 1; x <= 13 - 2 * i; x++)
		{
			cout << " ";
			this_thread::sleep_for(chrono::milliseconds(50));
		}
		for (int x = 1; x <= i * 2 - 1; x++)
		{
			cout << "*";
			this_thread::sleep_for(chrono::milliseconds(50));
		}
		cout << endl;
		this_thread::sleep_for(chrono::milliseconds(100));
	}
	
    for(int i = 0; i < 2; i++){
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0006);
        this_thread::sleep_for(chrono::milliseconds(100));
        cout << "    ***";
        this_thread::sleep_for(chrono::milliseconds(100));
        cout << "         ***";
        this_thread::sleep_for(chrono::milliseconds(100));
        cout << "         ***";
        this_thread::sleep_for(chrono::milliseconds(100));
        cout << "         ***";
        this_thread::sleep_for(chrono::milliseconds(100));
        cout << "         ***";
        this_thread::sleep_for(chrono::milliseconds(100));
        cout << "         ***" << endl;
    }
	this_thread::sleep_for(chrono::milliseconds(100));
	SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
	cout << "  _    _                                                                        " << endl;
	this_thread::sleep_for(chrono::milliseconds(100));
	cout << " | |  | |                                                                       " << endl;
	this_thread::sleep_for(chrono::milliseconds(100));
	cout << " | |__| | __ _ _ __  _ __  _   _   _ __   _____      __  _   _  ___  __ _ _ __  " << endl;
	cout << " |  __  |/ _` | '_ \\| '_ \\| | | | | '_ \\ / _ \\ \\ /\\ / / | | | |/ _ \\/ _` | '__| " << endl;
	this_thread::sleep_for(chrono::milliseconds(100));
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << " | |  | | (_| | |_) | |_) | |_| | | | | |  __/\\ V  V /  | |_| |  __/ (_| | |    " << endl;
	this_thread::sleep_for(chrono::milliseconds(100));
	SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
	cout << " |_|  |_|\\__,_| .__/| .__/ \\__, | |_| |_|\\___| \\_/\\_/    \\__, |\\___|\\__,_|_|    " << endl;
	this_thread::sleep_for(chrono::milliseconds(100));
	cout << "              | |   | |     __/ |                         __/ |                 " << endl;
	this_thread::sleep_for(chrono::milliseconds(100));
	cout << "              |_|   |_|    |___/                         |___/                  " << endl;
	this_thread::sleep_for(chrono::milliseconds(100));
	return 0;
}
