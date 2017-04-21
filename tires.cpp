/*
 * tires.cpp
 *
 *  Created on: Apr 21, 2017
 *      Author: MizzouRacing
 */

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include "tires.h"
using namespace std;


Tire::Tire(void) {
	//todo: finish this
}

Tire::Tire(location tireLoc, char* fileLoc) { //opens file, inputs data into temp vectors, closes file
	//file format: outer,middle,inner
	string line;
	char *token;
	ifstream file(fileLoc);
	if(file.is_open()) { //opening input file

		while(getline(file,line)) { //tokenize lines of input over 'c' and add to proper vector
			token = strtok((char*)line.c_str(),",");
			this->addTemp(atoi(token),'o');
			token = strtok(NULL,",");
			this->addTemp(atoi(token),'m');
			token = strtok(NULL,",");
			this->addTemp(atoi(token),'i');
		}
		file.close();
	}
	else {
		cout << "Unable to open file";
		exit(0);
	}
}

Tire::~Tire() { //default destructor
	//todo
}

void Tire::addTemp(int temperature, char tempLocation) {
	switch(tempLocation) {
		case 'o': tempOuterArray.push_back(temperature); break;
		case 'm': tempMiddleArray.push_back(temperature); break;
		case 'i': tempInnerArray.push_back(temperature); break;
		default: cout << "Error in addTemp" << endl;
			exit(0);
			break;
	}
}

void Tire::printTemps() {
	int i;
	for(i=0;i<tempOuterArray.size();i++)
		cout << tempOuterArray[i] << "," << tempInnerArray[i]  << "," << tempMiddleArray[i] << endl;
}
