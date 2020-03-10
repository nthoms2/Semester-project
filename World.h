#ifndef World_H
#define World_H

#include<string>
using namespace std;

enum area {home_, house_, town1_, lab_, trainingIsle_};

class World
{
public:
	//Constructor.
	World();

	//Deconstructor.
	~World();

	//
	void adventure();

private:

	//Variable that keeps track of which array the player is in.
	area playerArea;

};

#endif
