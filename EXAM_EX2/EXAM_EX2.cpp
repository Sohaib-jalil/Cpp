// EXAM_EX2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//




#include<iostream>
using namespace std;
class Server {
public: void show() { cout << "In Server"; }
};
class Server_ST : public Server { // abstract class
		  int x;
public: Server_ST() { x = 10; }
public: void fun() { cout << x; }
public: void show() { cout << "In Server ST"; }
public: virtual void vert()const = 0; // abstract method
};
int main() {
	Server* bp;
	Server b;
	Server_ST d;
	bp = &d;
	bp->show();
	cout << bp->fun(); return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
