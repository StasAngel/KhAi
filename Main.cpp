//#include <QApplication>
//#include <QPushButton>
#include <iostream>

//void printHello(char* pName);

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	QPushButton button("Hello, World!");
	button.resize(200, 60);
	button.show();
	// any change
	cout << "BLA BLA BLA" << endl;
	// just for example
	cout << "Hello my friend " << "Dragula" << endl;
	// end program
	return app.exec();
}


/*
// changes was comment from MS Visual Studio 2017
void printHello(char* pName)
{
	printf("Hello my friend %s\n", pName);
}
*/