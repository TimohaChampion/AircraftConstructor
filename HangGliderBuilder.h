#pragma once
#include"AircraftBuilder.h"
class HangGliderBuilder :public AircraftBuilder
{
public:
	HangGliderBuilder() {
		aircraft = new Aircraft("Hang Glider");
	}

	void BuildFrame() override {
		aircraft->SetPart("frame", "Hang Glider frame");

	};
	void BuildEngine() override {
		aircraft->SetPart("engine", "no engine");

	};
	void BuildWheels() override {
		aircraft->SetPart("wheels", "no wheels");

	};
	void BuildDoors() override {
		aircraft->SetPart("doors", "no doors");

	};
	void BuildWings() override {
		aircraft->SetPart("wings", "1");

	};
};

