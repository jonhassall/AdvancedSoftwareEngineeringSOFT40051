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

		//Multiple functions can have the same name, with different parameters. They are automatically chosen based on parameter types (method overloading)
		void display(char*);
		void display(int);
		void display(bool);

		//Virtual keyword allows a method to be overwritten in a subclass
		//Whenever a class has any virtual functions, it must also have a virtual destructor
		virtual void sayHelloTo(char* name);
};
