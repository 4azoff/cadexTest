#include "pch.h"
#include "Ellipse.h"
#include <cmath>

Elipse::Elipse(const double& radiusA, const double& radiusB, const double& paramT) : BaseCurve {paramT}
{
    this->SetRadiusA(radiusA);
    this->SetRadiusB(radiusB);
}

double Elipse::GetXCoord() const
{
    return this->radiusA * cos(this->tParam);
}

double Elipse::GetYCoord() const
{
    return this->radiusB * sin(this->tParam);
}

void Elipse::PrintInfoAboutType()
{
    std::cout << "Info about Ellipse: \n";
    std::cout << "Point at t = " << this->GetParamT() << ", first radius = " << this->GetRadiusA()
        <<" and second radius = " << this->GetRadiusB() << "\n";
}

void Elipse::SetRadiusA(const double& radiusA)
{
    cadexUtility::SetRadius(this->radiusA, radiusA);
}

double Elipse::GetRadiusA() const
{
    return this->radiusA;
}

void Elipse::SetRadiusB(const double& radiusB)
{
    cadexUtility::SetRadius(this->radiusB, radiusB);
}

double Elipse::GetRadiusB() const
{
    return this->radiusB;
}

Vector3D Elipse::GetFirstDerivativeVector() const
{
    return Vector3D(-1 * sin(this->tParam),
                    cos(this->tParam),
                    0);
}
