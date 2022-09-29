#include "pch.h"
#include "Helix.h"
#include <cmath>

Helix::Helix(const double& radius, const double& step, const double& paramT) : BaseCurve {paramT}
{
	this->SetRadius(radius);
	this->step = step;
}

void Helix::SetRadius(const double& radius)
{
	cadexUtility::SetRadius(this->radius, radius);
}

double Helix::GetRadius() const
{
	return this->radius;
}

double Helix::GetXCoord() const
{
	return this->radius * cos(this->tParam);
}

double Helix::GetZCoord() const
{
	return this->step;
}

double Helix::GetYCoord() const
{
	return this->radius * sin(this->tParam);
}

void Helix::PrintInfoAboutType()
{
	std::cout << "Info about Helix: \n";
	std::cout << "Point at t = " << this->GetParamT() << ", radius = " << this->GetRadius() 
		<< " and step = " << this->GetStep() << "\n";
}

void Helix::SetStep(const double& step)
{
	this->step = step;
}

double Helix::GetStep() const
{
	return this->step;
}

Vector3D Helix::GetFirstDerivativeVector() const
{
	return Vector3D(-1 * sin(this->tParam),
		cos(this->tParam),
		0);
}
