#include <iostream>
#include "Area.h"
using namespace std;

Area::Area()
{
	maxY = 20;
	maxX = 20;
	playerCords.xPos = 0;
	playerCords.yPos = 0;
	for (int rows = 0; rows < maxY; rows++)
	{
		for (int colms = 0; colms < maxX; colms++)
		{
			array1[rows][colms].symbol = ' ';
			array1[rows][colms].playerSymbol = '0';
			array1[rows][colms].player = false;
		}
	}
}

Area::~Area()
{
}

void Area::setHome()
{
	for (int rows = 0; rows < maxY; rows++) //5
	{
		for (int colms = 0; colms < maxX; colms++) //6
		{
			array1[rows][colms].symbol = '.';
			array1[rows][colms].playerSymbol = '0';
			array1[rows][colms].player = false;
		}
	}
	array1[0][4].symbol = '_'; array1[0][5].symbol = '_'; array1[1][4].symbol = '|'; array1[1][5].symbol = '|';
	array1[2][4].symbol = '|'; array1[2][5].symbol = '|'; array1[1][1].symbol = '-'; array1[1][2].symbol = '-';
	array1[2][1].symbol = '-'; array1[2][2].symbol = '-'; array1[2][0].symbol = 'O'; array1[4][1].symbol = 'v'; array1[4][2].symbol = 'v';
}

void Area::setHouse1()
{

}

void Area::setTown1()
{
}

void Area::setLab()
{
}

void Area::setTrainingIsle()
{
}

//-----------------------------------------------------------------------------------------------------

void Area::displayArray()
{
	for (int rows = 0; rows < 5; rows++)
	{
		for (int colms = 0; colms < 6; colms++)
		{
			if (array1[rows][colms].player)
				cout << array1[rows][colms].playerSymbol;
			else
				cout << array1[rows][colms].symbol;
		}
		cout << "\n";
	}
}
