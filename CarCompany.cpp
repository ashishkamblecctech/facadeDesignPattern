#include "CarCompany.h"
#include "BuildPart.h"
#include "Engine.h"
#include "Tyre.h"
#include "Color.h"

BuildPart* CarCompany::engine = new Engine();
BuildPart* CarCompany::tyre = new Tyre();
BuildPart* CarCompany::color = new Color();

void CarCompany::getCar()
{
	engine->build();
	tyre->build();
	color->build();

}