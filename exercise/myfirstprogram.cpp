#include <iostream>
#include <ctime>

int main() {
  std::time_t rawtime;
	std::tm* timeinfo;
	char buffer [80];

	std::time(&rawtime);
	timeinfo = std::localtime(&rawtime);

	std::strftime(buffer,80,"[%Y%m%d_%H%M%S]",timeinfo);
	std::cout << buffer << std::endl;
}