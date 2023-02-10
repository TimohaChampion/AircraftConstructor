#pragma once
#include"AircraftBuilder.h"
class Boing :public AircraftBuilder
{
public:
	Boing() {
		aircraft = new Aircraft("Boing 737");
	}

	void BuildFrame() override {
		aircraft->SetPart("frame", "Boing 737");

	};
	void BuildEngine() override {
		aircraft->SetPart("engine", "4 W");

	};
	void BuildWheels() override {
		aircraft->SetPart("wheels", "12");

	};
	void BuildDoors() override {
		aircraft->SetPart("doors", "6");

	};
	void BuildWings() override {
		aircraft->SetPart("wings", "2");

	};
};

