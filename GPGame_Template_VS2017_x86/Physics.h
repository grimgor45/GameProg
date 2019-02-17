#pragma once
#include <string>
#include "Shapes.h"
class Physics
{
private:
	glm::vec3* acc;

public:
	glm::vec3* getAcc();
	Physics();
	~Physics();
};