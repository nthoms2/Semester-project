#ifndef Area_H
#define Area_H

#include<string>
using namespace std;

struct worldChunk
{
	char symbol;
	char playerSymbol;
	bool player;
};

struct coordinates
{
	int xPos;
	int yPos;
};



class Area
{
public:
	//Constructor.
	Area();

	//Deconstructor.
	~Area();

	//Set functions for arrays.
	void setHome();
	void setHouse1();
	void setTown1();
	void setLab();
	void setTrainingIsle();

	//Functions that display each area to screen.
	void displayArray();

private:

	//Constant ints for the array
	int maxY;
    int maxX;

	//Dynamically allocated array.
	
	//Keeps track of player's speciffic coordinates
	coordinates playerCords;
};

#endif