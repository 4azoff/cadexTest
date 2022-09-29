#include "pch.h"
#include "cadexTestLib.h"
#include "Circle.h"
#include "Helix.h"
#include "Ellipse.h"

CADEXTESTLIB_API Circle* CreateNewCircle(const double& paramT, const double& radius)
{
	return new Circle(radius, paramT);
}

CADEXTESTLIB_API Elipse* CreateNewEllipse(const double& paramT, const double& radiusA, const double& radiusB)
{
	return new Elipse(radiusA, radiusB, paramT);
}

CADEXTESTLIB_API Helix* CreateNewHelix(const double& paramT, const double& radius, const double& step)
{
	return new Helix(radius, step, paramT);
}
