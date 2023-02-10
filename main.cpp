#include"AircraftConstructor.h"
#include"AircraftBuilder.h"
#include"HangGliderBuilder.h"
#include"Aircraft.h"
#include"Boing.h"
#include"AirBus.h"
#include <iostream>
using namespace std;


int main() {
	try {
		AircraftBuilder* builder;
		AircraftConstructor* constructor = new AircraftConstructor();
		
		builder = new HangGliderBuilder();

		constructor->Construct(builder);
		Aircraft* aircraft = builder->GetAircraft();
		aircraft->Show();
		delete builder;
		//
		builder = new Boing();
		constructor->Construct(builder);
		aircraft = builder->GetAircraft();
		aircraft->Show();
		delete builder;
		//
		builder = new AirBus();
		constructor->Construct(builder);
		aircraft = builder->GetAircraft();
		aircraft->Show();
		delete builder;
		//
		
		delete constructor;
	}
	catch (...) {
		cout << "error" << endl;

	}
	
}
