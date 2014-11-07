// Version: V1.0
// Date: 07-11-14
// Name: Jonathan Hassall

// Definition - Animal.h

class Animal
{
	//Use protected to make variables available privately to subclasses
	//If you used private, they would only be available to the base class
	protected:
		char* name;
		int age;

	public:
		Animal();
		Animal(int inputAge);
		~Animal();
		void makeNoise();
		void setName(char*);
		void setAge(int);
		void showName();
		void showAge();

		virtual void describeYourself();
};
