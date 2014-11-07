// Version: V1.0
// Date: 07-11-14
// Name: Jonathan Hassall

// Definition - Monkey.h

class Monkey : public Animal
{
private:

public:
	Monkey();
	Monkey(int inputAge);
	~Monkey();
	bool willScratchYou;
	void antagonise();
	void makeNoise();

	/*void describeYourself();*/
};