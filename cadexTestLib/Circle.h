#pragma once
#include "BaseCurve.h"
#include "cadexTestLib.h"

class CADEXTESTLIB_API Circle : public BaseCurve {
private:
	double radius;
	
public:
	Circle(const double& radius, const double& paramT);
	double GetXPoint() const override;
	double GetZPoint() const override { return 0; }
	double GetYPoint() const override;
	void SetRadius(const double& radius);
	double GetRadius() const;

};