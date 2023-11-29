#include "human.h"

int main()
{
	Human human;
	human.askForHuman();
	cout << endl;
	cout << "Your name is " << human.name << " and your age is " << human.age << ".";
}