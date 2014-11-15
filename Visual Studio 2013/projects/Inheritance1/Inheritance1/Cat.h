// Version: V1.0
// Date: 07-11-14
// Name: Jonathan Hassall

// Definition - Cat.h

class Cat : public Animal
{
private:

public:
	Cat();
	Cat(int inputAge);
	~Cat();
	bool willScratchYou;
	void antagonise();
	void makeNoise();

	//void sayHelloTo(char* name);
};