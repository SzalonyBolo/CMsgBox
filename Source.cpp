#include <string>
#include <Windows.h>
#include <iostream>


extern "C" __declspec(dllexport) void ShowMessageBox()
{
	MessageBoxA(NULL, "Hello, World!", "1337", MB_OK);
}