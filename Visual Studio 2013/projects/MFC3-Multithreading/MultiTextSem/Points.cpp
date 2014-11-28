#include "Points.h"

Points::Points()
{
	itsMaxIndex = 99;
	itsIndex = 0;
	itsStartX = 50;
	itsEndX = 100;
	itsStartY = 50;
	itsEndY = 100;
	for (int i = 0; i<=itsMaxIndex; i++)
	{
		itsX[i]=itsStartX + i*(itsEndX-itsStartX)/itsMaxIndex;
		itsY[i]=itsStartY + i*(itsEndY-itsStartY)/itsMaxIndex;
	}
	itsRGB = RGB(0, 0, 0);
}
Points::Points(int theStartX, int theStartY, int theEndX, int theEndY, COLORREF theRGB)
{
	itsMaxIndex = 99;
	itsIndex = 0;
	itsStartX = theStartX;
	itsEndX = theEndX;
	itsStartY = theStartY;
	itsEndY = theEndY;
	for (int i = 0; i<=itsMaxIndex; i++)
	{
		itsX[i]=itsStartX + i*(itsEndX-itsStartX)/itsMaxIndex;
		itsY[i]=itsStartY + i*(itsEndY-itsStartY)/itsMaxIndex;
	}
	itsRGB = theRGB;
}
int Points::getNextX()
{
	return itsX[++itsIndex];
}
int Points::getNextY()
{
	return itsY[++itsIndex];
}
int Points::getMaxIndex()
{
	return itsMaxIndex;
}
int Points::getCurrentIndex()
{
	return itsIndex;
}
COLORREF Points::getRGB()
{
	return itsRGB;
}