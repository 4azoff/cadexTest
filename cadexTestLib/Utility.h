#pragma once
#include "pch.h"
#include <stdexcept>

#ifndef _UTILITY_H_
#define _UTILITY_H_

namespace cadexUtility {

	struct CADEXTESTLIB_API Point3D
	{
		double x;
		double y;
		double z;
		Point3D(double _x, double _y, double _z) : x{ _x }, y{ _y }, z{ _z } {};
	};

	struct CADEXTESTLIB_API Vector3D : public Point3D
	{
		Vector3D(double _x, double _y, double _z) : Point3D{ _x, _y, _z }{};
	};

	static bool CheckRadius(const double& radius) { return radius >= 0; };
	static void SetRadius(double& instalable, const double& input)
	{
		if (!CheckRadius(input))
			throw std::invalid_argument("Radius cannot be negative");
		instalable = input;
	}
}
#endif