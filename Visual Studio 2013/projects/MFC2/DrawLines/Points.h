#if !defined(Points_h_INCLUDED)
#define Points_h_INCLUDED

using namespace std;

class Points
{
public:
	Points();
	void incrementIndex();
	float getNextX();
	float getNextY();
	void drawArc(int startX, int startY,
		float centreX, float centreY, int radius,
		float xPoints[], float yPoints[], int noPoints);
	void addCirclePoints();

private:
	float itsX [60];
	float itsY [60];
	int itsIndex;
	int itsMaxIndex;
};

#endif	//#if !defined(Points_h_INCLUDED)