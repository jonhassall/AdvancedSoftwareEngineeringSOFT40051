#if !defined(Points_h_INCLUDED)
#define Points_h_INCLUDED

#include "Windows.h"

using namespace std;

class Points
{
public:
	Points();
	Points(int theStartX, int theStartY, int theEndX, int theEndY, COLORREF theRGB);
	int getNextX();
	int getNextY();
	int getMaxIndex();
	int getCurrentIndex();
	COLORREF getRGB();

private:
	int itsX [100];
	int itsY [100];
	int itsIndex;
	int itsMaxIndex;
	int itsStartX;
	int itsEndX;
	int itsStartY;
	int itsEndY;
	COLORREF itsRGB;
};

#endif	//#if !defined(Points_h_INCLUDED)