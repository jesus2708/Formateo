#include "stdafx.h"  //________________________________________ Formatiando.cpp
#include "Formatiando.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	Formatiando app;
	return app.BeginDialog(IDI_Formatiando, hInstance);
}

void Formatiando::Window_Open(Win::Event& e)
{
	const double weight = 123.00000;
	wstring text;
	Sys::Format(text, L"%f", weight);
	this->MessageBoxW(text, L"Formato", MB_OK);

	Sys::Format(text, L"%2f", weight);
	this->MessageBoxW(text, L"Format", MB_OK);

	Sys::Format(text, L"%g", weight);
	this->MessageBoxW(text, L"formato", MB_OK);
}

