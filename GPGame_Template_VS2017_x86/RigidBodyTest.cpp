#include "RigidBodyTest.h"



RigidBodyTest::RigidBodyTest(glm::vec3 posini, glm::vec3 speedini, Shapes shape, Physics* phy, float gameSpeed, float mass) 
{
	this->pos= posini;
	this->speed = speedini;
	this->shape = shape;
	this->phy = phy;
	this->gameSpeed = gameSpeed;
	this->mass = mass;
	
}

void RigidBodyTest::applyForce()
{
	this->speed += *this->phy->getAcc()*this->gameSpeed;
}

void RigidBodyTest::applyPhy()
{
	this->pos+= this->speed*this->gameSpeed;
}

RigidBodyTest::~RigidBodyTest()
{
}
