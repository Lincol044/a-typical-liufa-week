#include <iostream> 
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int number;
	std::cout << "\033[1;35m Выберите одно число - \n [1 - понедельник]\n [2 - вторник]\n [3 - среда]\n [4 - четверг]\n [5 - пятница]\n "; 
	std::cin >> number;
	if (number == 1) {
		std::cout << "понедельник" << std::endl;
		std::cout << "Сегодня нужно не опаздать на пары и взбодриться баночкой любимого Dr.Peper" << std::endl;
	}
	else if (number == 2) {
		std::cout << "вторник" << std::endl;
		std::cout << "Нужно обязательно одеть свою белую футболочку профешинал драйвер и бегом учиться" << std::endl;
	}
	else if (number == 3) {
		std::cout << "среда" << std::endl;
		std::cout << "Сегодня прохладно я одену свою новую толстовочку,но всем скажу что она старая" << std::endl;
	}
	else if (number == 4) {
		std::cout << "четверг" << std::endl;
		std::cout << "Наконец то 2 пары, как жаль что так мало =(" << std::endl;
	}
	else if (number == 5) {
		std::cout << "пятница" << std::endl;
		std::cout << "Сегодня поиграю со стасиком в шахматы и пойду просить денег на похмел)" << std::endl;
	}
	else {
		std::cout << "Это лишнее было " << std::endl;
	}
	std::cin.get();
}
	