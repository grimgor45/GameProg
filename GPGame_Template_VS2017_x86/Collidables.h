#pragma once
#include "RigidBodyTest.h"
class Collidables
{
private:
	vector<RigidBodyTest*> objects;
public:
	Collidables();
	void applyCollisions();
	~Collidables();
};

