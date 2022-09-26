#include "pch.h"
#include "Circle.h"
#include <cmath>

Circle::Circle(const double& radius, const double& paramT) : BaseCurve{paramT}
{
    if (radius < 0)
    {
        throw radius;
    }
    this->radius = radius;
}

double Circle::GetXPoint() const
{
    return this->radius * cos(this->tParam);
}

double Circle::GetYPoint() const
{
    return this->radius * sin(this->tParam);
}

void Circle::SetRadius(const double& radius)
{
    if (radius < 0)
    {
        throw radius;
    }
    this->radius = radius;
}

double Circle::GetRadius() const
{
    return this->radius;
}
