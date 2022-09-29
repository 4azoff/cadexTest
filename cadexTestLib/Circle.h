#pragma once
#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include "BaseCurve.h"

class CADEXTESTLIB_API Circle : public BaseCurve {
protected:
	double radius;
	double GetXCoord() const override;
	double GetZCoord() const override { return 0; }
	double GetYCoord() const override;
	void PrintInfoAboutType() override;

public:
	Circle(const double& radius, const double& paramT);	
	void SetRadius(const double& radius);
	double GetRadius() const;
	Vector3D GetFirstDerivativeVector() const override;
};
#endif;