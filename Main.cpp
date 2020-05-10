#include <QApplication>
#include <QPushButton>
#include <stdio.h>

void printHello(char* pName);

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	QPushButton button("Hello, World!");
	button.resize(200, 60);
	button.show();
	// any change
	cout << "BLA BLA BLA" << endl;
	// just for example
	printHello("Dragula");
	// end program
	return app.exec();
}

void printHello(char* pName)
{
	printf("Hello my friend %s\n", pName);
}