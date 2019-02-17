#include "Physics.h"



glm::vec3 * Physics::getAcc()
{
	return acc;
}

Physics::Physics()
{
	this->acc = new glm::vec3(0.0f, -9.0f, 0.0f);
}


Physics::~Physics()
{
}
