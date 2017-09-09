// SampleDLL32.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "SampleDLL32.h"

void __stdcall Func1()
{
	printf("Func1 from SampleDLL32\n\r");
}


void __stdcall Func2()
{
	printf("Func2 from SampleDLL32\n\r");
}

