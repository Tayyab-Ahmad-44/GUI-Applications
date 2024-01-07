//---------------------------------------------------------------------------

#pragma hdrstop

#include "myHeader.h"
#include "ReisterationForm.h"
#include "ServicesProvider.h"
#include "InputCnic.h"
#include "Garage.h"
#include "InputLocation.h"
#include "Details.h"
#include <algorithm>
#include <iostream>
#include <fstream>
#include <vcl.h>
#include <unordered_map>
//---------------------------------------------------------------------------
#pragma package(smart_init)

using namespace std;

class ServiceProviders
{
public:
	bool lights;
	bool thermostat;
	bool security;
	bool cameras;
	bool assistant;
	bool speakers;

    ServiceProviders()
	{
		lights = false;
		thermostat = false;
		security = false;
		cameras = false;
		assistant = false;
		speakers = false;
	}

	void subscribeService(bool lights, bool thrmostat, bool security, bool cameras,	bool assistant,	bool speakers)
	{
		this->lights = lights;
		this->thermostat = thrmostat;
		this->security = security;
		this->cameras = cameras;
		this->assistant = assistant;
		this->speakers = speakers;
	}
};

class User : public ServiceProviders
{
public:
    User *lChild;
    User *rChild;
	int height;
    int bf;

    long long key;
	string phoneNumber;
	string firstName;
    string lastName;
	bool hasCar;
	string location;

    User()
    {
		lChild = rChild = NULL;
	}

	User(long long cnic, string phoneNumber, string firstName, string lastName, bool hasCar = false, bool lights = false, bool thrmostat = false, bool security = false, bool cameras = false, bool assistant = false, bool speakers = false)
	{
        this->key = cnic;
        this->phoneNumber = phoneNumber;
        this->firstName = firstName;
        this->lastName = lastName;
        this->hasCar = hasCar;
		this->location = "Street";
        this->height = 0;
		this->bf = 0;
		lChild = rChild = NULL;

		subscribeService (lights, thrmostat, security, cameras, assistant, speakers);
	}
};

class Home
{
public:
//	myMap users; // TODO: replacce with <key, value> = <id, User>

	unordered_map<long long, User*> users;
	int carsPresent;

	Home()
	{
		carsPresent = 0;
//		users.insert(new User(9999, "01234567891", "Sohail", "Khan", 1, 1, 1, 1, 1, 1, 1));
		users[9999] = new User(9999, "01234567891", "Sohail", "Khan", 1, 1, 1, 1, 1, 1, 1);
	}

	long long newUser()
	{
		registerationForm->ShowModal();

//		fstream myFile;
//		myFile.open("userData.txt", ios::in);

		string fN = registerationForm->getFn();
		string lN = registerationForm->getLn();
		string pN = registerationForm->getPn();
		long long cnic = stoll(registerationForm->getCnic());
		bool hasCar = (registerationForm->getCar() == "1") ? true: false;
		bool checkLights;
		bool checkThrmostat;
		bool checkSecurity;
		bool checkCameras;
		bool checkAssistant;
		bool checkSpeakers;

//		myFile >> fN;
//		myFile >> lN;
//		myFile >> pN;
//		myFile >> cnic;
//		myFile >> hasCar;

		if (users.find(cnic) != users.end())
		{
			ShowMessage("Your are already part of this home Sirr!!!");
			return false;
		}


		serviceProviderForm->ShowModal();

		fstream myFile;

		myFile.open("userData.txt", ios::in);

		myFile >> checkLights;
		myFile >> checkThrmostat;
		myFile >> checkSecurity;
		myFile >> checkCameras;
		myFile >> checkAssistant;
		myFile >> checkSpeakers;

//		users.insert(new User(cnic, pN, fN, lN, hasCar, checkLocks, checkLights, checkSpeakers, checkCurtains, checkHeating, checkCameras));

		users[cnic] = new User(cnic, pN, fN, lN, hasCar, checkLights, checkThrmostat, checkSecurity, checkCameras, checkAssistant, checkSpeakers);

		myFile.close();
	}

	// TODO: Garage Implementation
	void carParking()
    {
		inputCnicForm->ShowModal();

		long long cnic = inputCnicForm->getCnic();

		if(users.find(cnic) == users.end())
			ShowMessage("User is not part of this home");
		else
		{
			User *user = users[cnic];
			if(user == NULL)
			{
				ShowMessage("NULL");
			}

			if(!user->hasCar)
				ShowMessage("You dont have any car to park Dude!!!");
			else
			{
				if (carsPresent >= 2)
					ShowMessage("No Space in Garage. Park it OutSide");
				else
				{
					if(user->location == "Home")
						ShowMessage("Your Car is already in Home.");
					else
					{
						carsPresent++;
						user->location = "Home";
						if(carsPresent == 1)
							garageForm->carImage1->Visible = true;
						else
							garageForm->carImage2->Visible = true;
					}
				}

			}
		}
	}

	void takingCarOut()
	{
		if (carsPresent < 1)
		{
			ShowMessage("There isn't any car present in Garage.");
			return;
		}

		inputCnicForm->ShowModal();

		long long key = inputCnicForm->getCnic();

		if (users.find(key) == users.end())
			ShowMessage("You aren't part of this home Sirrr!! Moye Moye");
		else
		{
			if (!users[key]->hasCar)
				ShowMessage("You Don't have any car Sirrrr...");
			else
			{
				if (users[key]->location == "Street")
					ShowMessage("Your Car is Standing Outside on Street Mannnn!!!");
				else if(users[key]->location == "Home")
				{
					locationInputForm->ShowModal();

                    if(carsPresent == 2)
						garageForm->carImage2->Visible = false;
					if(carsPresent == 1)
						garageForm->carImage1->Visible = false;

					carsPresent--;

					users[key]->location = locationInputForm->getLocation();
				}
				else
				{
				   ShowMessage("You car is already on a ride Sir!!!");
				}
			}
        }
	}

	void userLocation()
	{
		inputCnicForm->ShowModal();

		long long key = inputCnicForm->getCnic();

		if (users.find(key) == users.end())
            ShowMessage("Sorry! User with this cnic is not part of this Home.");
		else
        {
			if (!users[key]->hasCar)
				ShowMessage("This user is not having a car and is in Home.");
			else if(users[key]->location == "Home" || users[key]->location == "Street")
				ShowMessage("User is at home");
			else
			{
				string str = users[key]->location;
				AnsiString loc = str.c_str();

				ShowMessage("User is off to " + loc);
			}
		}
	}

	void userInfo()
	{
		userDetailssForm->ShowModal();
	}

};
