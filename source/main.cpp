#include <iostream>
#include <stdio.h>
#include <fstream>

using namespace std;

int main() {
	cout << "C Read File Demo!" << endl;

	char logPath[] = "./output.log";
	printf("log path=%s\n", logPath);

	std::ifstream fin(logPath);
	std::string strLine;
	while (getline(fin, strLine)) {
		printf("strLine=%s length=%d\n", strLine.c_str(), strLine.length());
		fflush(stdout);

		if(strLine.length() <= 0) {
			continue;
		}
	}

	return 0;
}