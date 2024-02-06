#pragma once
#include "BuildPart.h"

class CarCompany
{
public:
	static void getCar();
	
private:
	static BuildPart* engine;
	static BuildPart* tyre;
	static BuildPart* color;

};

