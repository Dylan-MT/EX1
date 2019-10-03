#include <iostream>
#include <fstream> //(File-Stream) needed to use files. (ofstream/ifstream/fstream)
using namespace std;

int main()
{
	ofstream outputFile;
	outputFile.open("demofile.txt"); // Opens the output file.

	cout << "Now writing data to the file. \n";

	outputFile << "Nintendo Switch\n";
	outputFile << "PS4\n";
	outputFile << "XBONE\n";
	outputFile << "PC";

	outputFile.close();

	cout << "DONE!\n";

	system("pause");
	return 0;
}