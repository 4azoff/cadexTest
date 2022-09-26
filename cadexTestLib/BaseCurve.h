#pragma once
#include "cadexTestLib.h"

class CADEXTESTLIB_API BaseCurve {

protected:
	double tParam;	

public:
	BaseCurve(const double& _tParam) : tParam{ _tParam } {};
	virtual ~BaseCurve() = default;

	virtual double GetXPoint() const = 0;
	virtual double GetYPoint() const = 0;
	virtual double GetZPoint() const = 0;
	double GetParamT() const { return tParam; };
	void SetParamT(const double& tParam) { this->tParam = tParam; };
};