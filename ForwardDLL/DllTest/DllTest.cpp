// DllTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	
	HMODULE hSampleDLL32 = LoadLibraryEx(L"SampleDLL32.dll", NULL, NULL);
	HMODULE hForwardDLL = LoadLibraryEx(L"ForwardDLL.dll", NULL, NULL);
	//typedef Status (__stdcall * pfnNCRPdQueryForContentEx)(LPCWSTR, LPCWSTR, SupplyPointType, DataContent*);

	typedef void (_stdcall *pfnFunc1)();
	pfnFunc1 fFunc1 = NULL;
	pfnFunc1 fFunc3 = NULL;
	pfnFunc1 fFuncForward = NULL;

	fFunc1 = (pfnFunc1)GetProcAddress(hSampleDLL32, "Func1");
	fFuncForward = (pfnFunc1)GetProcAddress(hForwardDLL, "ForwardFunc1");
	fFunc3 = (pfnFunc1)GetProcAddress(hForwardDLL, "Func3");


	fFunc1();
	fFuncForward();
	fFunc3();


	FreeLibrary(hSampleDLL32);
	FreeLibrary(hForwardDLL);

	return 0;
}

