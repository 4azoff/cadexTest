#pragma once



#ifdef CADEXTESTLIB_EXPORTS
#define CADEXTESTLIB_API __declspec(dllexport)
#else
#define CADEXTESTLIB_API __declspec(dllimport)
#endif

#include "BaseCurve.h"
#include "Circle.h"

extern CADEXTESTLIB_API class BaseCurve;
extern CADEXTESTLIB_API class Circle;

////extern  CADEXTESTLIB_API class BaseClass {
//private:
//	float x, y, z;
//public:
//	BaseClass(float x, float y, float z) { this->x = x; this->z = z; this->y = y; }
//};

//extern "C" CADEXTESTLIB_API void PrintHello();