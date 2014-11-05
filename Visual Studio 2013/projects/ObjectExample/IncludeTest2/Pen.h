//Definition

class Pen
{
private:
	char make[15];
	float value;
	int year;
	int storedInt;

public:
	Pen();

	Pen(int myInt);

	~Pen();

	//Access
	void print();

	//Modify
	void setValue(float pValue);

	void write(int myInt);

	void store(int myInt);

	void outputStored();

	int outputStoredByReturn();

	void callMyself1();
	void callMyself2();
};