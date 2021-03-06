#pragma once
#include "RigidBody.h"

class Sphere : public RigidBody
{
	
public:

	Sphere(glm::vec2 a_position, glm::vec2 a_velocity, 
		  float a_mass, float a_radius, glm::vec4 a_colour);

	~Sphere();

	virtual void MakeGizmo();

	bool CheckCollision(PhysicsObject* a_pOther);

	float GetRadius() { return m_Radius; }
	glm::vec4 GetColour() { return m_colour; }

protected:

	float m_Radius;

	glm::vec4 m_colour;

};

