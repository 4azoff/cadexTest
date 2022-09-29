#include "pch.h"
#include "Circle.h"
#include <cmath>

Circle::Circle(const double& radius, const double& paramT) : BaseCurve{paramT}
{
    this->SetRadius(radius);
}

double Circle::GetXCoord() const
{
    return this->radius * cos(this->tParam);
}

double Circle::GetYCoord() const
{
    return this->radius * sin(this->tParam);
}

void Circle::SetRadius(const double& radius)
{
    cadexUtility::SetRadius(this->radius, radius);
}

double Circle::GetRadius() const
{
    return this->radius;
}

Vector3D Circle::GetFirstDerivativeVector() const
{
    return Vector3D(-1 * sin(this->tParam),
                    cos(this->tParam), 
                    0);
}

void Circle::PrintInfoAboutType() 
{
    std::cout << "Info about Circle: \n";
    std::cout << "Point at t = " << this->GetParamT() << " and radius = " << this->GetRadius() << "\n";
}
