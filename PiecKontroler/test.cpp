#include "funkcje.h"
#include <iostream>
#include <Windows.h>
using namespace std;
void test()
{
	cout << "test wykona sie za 30s" << endl;
	Sleep(2000);
	cout << "TEMPERATURA DOLNA" << endl;
	Sleep(15000);
	cout << "Pozostalo 15s" << endl;
	Sleep(10000);
	cout << "Pozostalo 5s" << endl;
	Sleep(5000);
	cout << "Program rozpoczyna prace..." << endl;
	// dolna temperatura
	int i, x, y;
	x = 504;
	y = 111;
	SetCursorPos(x, y);
	Sleep(10);

	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

	Sleep(2000);
	cout << "TEMPERATURA gorna" << endl;
	Sleep(2000);
	cout << "test gornej temperatur za 30s" << endl;
	Sleep(15000);
	cout << "Pozostalo 15s" << endl;
	Sleep(10000);
	cout << "Pozostalo 5s" << endl;
	Sleep(5000);
	cout << "Program rozpoczyna prace..." << endl;

	// gorna temperatura
	int i1, x1, y1;
	x1 = 504;
	y1 = 90;
	SetCursorPos(x1, y1);
	Sleep(10);

	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	system("cls");
	cout << "koniec testu :)" << endl;
	system("pause");
}