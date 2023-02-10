#pragma once
#include"Aircraft.h"
class AircraftBuilder
{
protected:
	Aircraft* aircraft = nullptr;

public:
	virtual~AircraftBuilder() {
		if (aircraft)delete aircraft;
	};
	Aircraft* GetAircraft() {
		return aircraft;
	}
	virtual void BuildFrame() = 0;
	virtual void BuildEngine() = 0;
	virtual void BuildWheels() = 0;
	virtual void BuildDoors() = 0;
	virtual void BuildWings() = 0;

};

