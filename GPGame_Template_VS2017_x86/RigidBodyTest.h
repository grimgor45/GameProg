#pragma once
#include "Shapes.h"
#include "Physics.h"

class RigidBodyTest
{
public:
	Shapes shape;
	glm::vec3 pos;
	glm::vec3 speed;
	Physics *phy;
	float gameSpeed;
	
	float mass;
	bool collidable;

	bool fixed;
	int ttl;

public:
	RigidBodyTest(glm::vec3 posini, glm::vec3 speed, Shapes shape, Physics *phy, float gameSpeed, float mass);
	void applyForce();
	void applyPhy();
	~RigidBodyTest();
};

