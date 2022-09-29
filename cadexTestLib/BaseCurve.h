#pragma once

#ifndef _BASECURVE_H_
#define _BASECURVE_H_

#include "pch.h"
#include "Utility.h"
#include <iostream>

using namespace cadexUtility;

class CADEXTESTLIB_API BaseCurve {
protected:
	double tParam;
	virtual double GetXCoord() const = 0;
	virtual double GetYCoord() const = 0;
	virtual double GetZCoord() const = 0;
	virtual void PrintInfoAboutType() = 0;

public:
	BaseCurve(const double& _tParam) : tParam{ _tParam } {};
	double GetParamT() const { return tParam; };
	void SetParamT(const double& tParam) { this->tParam = tParam; };
	Point3D Get3DPoint() const { return Point3D(GetXCoord(), GetYCoord(), GetZCoord()); };
	virtual Vector3D GetFirstDerivativeVector() const = 0;

	void PrintInfo()
	{
		auto point = this->Get3DPoint();
		auto vector = this->GetFirstDerivativeVector();
		std::cout << "==============================================\n";
		this->PrintInfoAboutType();
		std::cout << "3Dpoint:\nx:" << point.x << "\ny:" << point.y << "\nz:" << point.z
			<< "\nFirstDerivativeVector:\nx:" << vector.x << "\ny:" << vector.y << "\nz:" << vector.z << "\n";		
		std::cout << "==============================================\n";
	};
};
#endif;