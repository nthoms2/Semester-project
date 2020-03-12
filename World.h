#ifndef World_H
#define World_H
#include<vector>
#include<string>
using namespace std;

enum area {home_, house_, town1_, lab_, trainingIsle_};

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

class World
{
public:
	//Constructor.
	World();

	//Deconstructor.
	~World();

	//Set functions for arrays.
	void setHome();
	void setHouse1();
	void setTown1();
	void setLab();
	void setTrainingIsle();

	//Functions that display each area to screen.
	void displayArray();

	//
	void adventure();

private:

	//Variable that keeps track of which array the player is in.
	area playerArea;

	//Keeps track of player's speciffic coordinates
	coordinates playerCords;

	//Vectors that I will need:
	vector<worldChunk> homeColms; //need 6
	vector<vector<worldChunk> > homeRows; //need 5

	vector<worldChunk> house1Colms; //need 4
	vector<vector<worldChunk> > house1Rows; //need 3

	vector<worldChunk> dumTownColms; //need 15
	vector<vector<worldChunk> > dumTownRows; //need 11

		vector<worldChunk> LabColms; //need 7
	vector<vector<worldChunk> > LabRows; //need 6

	vector<worldChunk> tIsleColms; //need 12
	vector<vector<worldChunk> > tIsleRows; //need 9

	vector<vector<vector<worldChunk> > > areas; 
};

#endif
