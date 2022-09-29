#pragma once

#ifndef _ELLIPSE_H_
#define _ELLIPSE_H_

#include "BaseCurve.h"

class CADEXTESTLIB_API Elipse : public BaseCurve {
private:
	double radiusA;
	double radiusB;
	double GetXCoord() const override;
	double GetZCoord() const override { return 0; }
	double GetYCoord() const override;
	void PrintInfoAboutType() override;

public:
	Elipse(const double& radiusA, const double& radiusB, const double& paramT);	
	void SetRadiusA(const double& radiusA);
	double GetRadiusA() const;
	void SetRadiusB(const double& radiusB);
	double GetRadiusB() const;
	Vector3D GetFirstDerivativeVector() const override;
};
#endif;