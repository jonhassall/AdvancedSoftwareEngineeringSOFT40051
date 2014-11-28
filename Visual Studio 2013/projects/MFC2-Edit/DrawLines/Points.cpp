#include "Points.h"

#include <cmath>

using namespace std;

Points::Points()
{
	itsMaxIndex = 0;
	itsIndex = 0;

	// one point to be used if no circle is added
	itsX[0] = 100;
	itsY[0] = 100;
}

void Points::incrementIndex()
{
	if(itsIndex<itsMaxIndex) itsIndex++;
	if(itsIndex>=itsMaxIndex) itsIndex=0;
}

float Points::getNextX()
{
	return itsX[itsIndex];
}

float Points::getNextY()
{
	return itsY[itsIndex];
}

void Points::drawArc(int startX, int startY,
	float centreX, float centreY, int radius,
	float xPoints[], float yPoints[], int noPoints)
{
	float startAngle;		// angles are in radians
	float endAngle;
	float angle;			// current value of angle
	float X;				// current value of x
	float Y;				// current value of y
	float aInc;				// increment in angle
	const float twoPi = atan2(0.0, -1.0) * 2;
	// 2*pi needed to adjust angles

	if (radius != 0)
	{ // Otherwise error

		aInc = twoPi / (noPoints - 1);  //  2*pi = c/r  or angle(radians) = arc distance / radius
		startAngle = atan2(startY - centreY, startX - centreX);
		endAngle = startAngle + twoPi;
		// first point
		xPoints[0] = centreX - radius * cos(startAngle);
		yPoints[0] = centreY - radius * sin(startAngle);

		int count = 0;

		// next noPoints
		for (angle = startAngle + aInc; angle < endAngle; angle += aInc)
		{
			count++;
			X = centreX - radius * cos(angle);
			Y = centreY - radius * sin(angle);
			xPoints[count] = X;
			yPoints[count] = Y;
			//Sleep(50);
		}
	}
}

void Points::addCirclePoints()
{
	itsMaxIndex = 59;
	itsIndex = 0;

	drawArc(200, 0, 200, 200, 100, itsX, itsY, 60);
}
