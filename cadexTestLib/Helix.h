#pragma once

#ifndef _HELIX_H_
#define _HELIX_H_

#include "Circle.h"

class CADEXTESTLIB_API Helix : public BaseCurve {
private:
	double step;
	double radius;
	double GetXCoord() const override;
	double GetZCoord() const override;
	double GetYCoord() const override;
	void PrintInfoAboutType() override;

public:
	Helix(const double& radius, const double& step, const double& paramT);
	void SetRadius(const double& radius);
	double GetRadius() const;
	void SetStep(const double& step);
	double GetStep() const;	
	Vector3D GetFirstDerivativeVector() const override;
};
#endif;