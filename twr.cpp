// (TWR - Terminal Read and Write) Is Made By Nabir14
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

string input;
string filename;

class functions
{
	public:
		void help()
		{
			cout << "[TWR is made by Nabir14]" << endl;
			cout << "[+create --> creates a file]" << endl;
			cout << "[+write --> writes a file]" << endl;
			cout << "[-read --> reads a file]" << endl;
			cout << "[-quit --> exits TWR]" << endl;
			cout << "[-help --> shows credits and commands]" << endl;
		}
		void file(string filename)
		{
			ofstream file(filename);
			if(input == "+write")
			{
				string writeText;
				cout << "text: ";
				cin >> writeText;
				file << writeText;
			}
		}
		void read(string filename)
		{
			string showText;
			ifstream readFile(filename);
			while(getline(readFile, showText))
			{
				cout << "["+filename+"]" << endl;
				cout << showText << endl;
			}
		}
	private:
};

int main()
{
	functions twr;
	cout << "[TWR]" << endl;
	bool isRunning = true;
	while(isRunning)
	{
		cout << ">> ";
		cin >> input;
		if(input == "-help")
		{
			twr.help();
		}
		else if(input == "+create")
		{
			cout << "filename: ";
			cin >> filename;
			twr.file(filename);
		}
		else if(input == "+write")
		{
			cout << "filename: ";
			cin >> filename;
			twr.file(filename);
		}
		else if(input == "-read")
		{
			cout << "filename: ";
			cin >> filename;
			twr.read(filename);
		}
		else if(input == "-quit")
		{
			isRunning = false;
		}
		else if(input == "clear")
		{
			system("cls");
			system("clear");
			cout << "[TWR]" << endl;
		}
		else
		{
			cout << "Invalid Input" << endl;
		}
	}
}
