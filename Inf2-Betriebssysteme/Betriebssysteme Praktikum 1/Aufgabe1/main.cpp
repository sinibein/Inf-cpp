#include <iostream>
#include <thread>

int main() {
	std::cout << "Informatik 2 - Betriebssysteme - Praktikum 1 - Aufgabe 1" << std::endl;
	std::cout << "Anzahl gefundener Prozessorkerne: " << std::thread::hardware_concurrency() << std::endl;

	return 0;
}