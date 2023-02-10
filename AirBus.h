#pragma once
#include"AircraftBuilder.h"
class AirBus :public AircraftBuilder
{
public:
	AirBus() {
		aircraft = new Aircraft("AirBus");
	}

	void BuildFrame() override {
		aircraft->SetPart("frame", "AirBus");

	};
	void BuildEngine() override {
		aircraft->SetPart("engine", "6 8W");

	};
	void BuildWheels() override {
		aircraft->SetPart("wheels", "8");

	};
	void BuildDoors() override {
		aircraft->SetPart("doors", "4");

	};
	void BuildWings() override {
		aircraft->SetPart("wings", "4");

	};
};

