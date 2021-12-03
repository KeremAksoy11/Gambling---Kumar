#include "kumar.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;
void kumar::gambling()
{


	cout << "********************* Welcome Your Gambling *********************" << endl;
	/*cout << "Please Enter Your Name: ";
	cin >> user;*/
	/*cout << "Welcome " << user << endl;*/
	cout << "" << endl;
	cout << "Please Enter Your Prediction Value Between 0 - 5" << endl;
	cout << "Please Enter Your Prediction: ";
	cin >> prediction;
	status = 50;

	do
	{
		
		srand(time(NULL));
		pc = rand() % 5;
		if (prediction == pc)
		{
			
			cout << "" << endl;
			cout << "My Computer is Value: " << pc << endl;
			cout << "Congratulations, Prediction True!\nYou won 10 point for your prediction true!" << endl;
			status += 10;
			cout << "Your current standings: " << status << endl;
			cout << "" << endl;
			cout << "Please Enter Your Prediction: ";
			cin >> prediction;
			if (status == 100)
			{
				cout << "Congratulations, All Prediction is True. You won we Gambling!" << endl;
				break;
			}
			
		}
		
		else if (prediction != pc)
		{
			
			cout << "" << endl;
			cout << "My Computer is Value: " << pc << endl;
			cout << "Oww, Prediction False!\nYou lost 10 point for your prediction false!" << endl;
			status -= 10;
			cout << "Your current standings: " << status << endl;
			cout << "" << endl;
			cout << "Please Enter Your Prediction: ";
			cin >> prediction;
			if (status == 0)
			{
				cout << "This is very sad, All Prediction is False. You lost this Gambling!" << endl;
				break;
			}
			
		}
	} while (status != maxvalue || status != minvalue);
};
