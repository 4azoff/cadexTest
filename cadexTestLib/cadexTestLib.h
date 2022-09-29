#pragma once
#include "pch.h"
#include "Ellipse.h"
#include "Helix.h"
#include "Utility.h"
#include "Circle.h"
#include <memory>

extern "C" CADEXTESTLIB_API Circle* CreateNewCircle(const double& paramT, const double& radius);
extern "C" CADEXTESTLIB_API Elipse* CreateNewEllipse(const double& paramT, const double& radiusA, const double& radiusB);
extern "C" CADEXTESTLIB_API Helix* CreateNewHelix(const double& paramT, const double& radius, const double& step);