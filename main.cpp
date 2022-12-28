#include <iostream>
#include <map>
#include <string>

int main() {
	std::pair<int, std::string> queue_Pair;
	std::map<int, std::string> queue;
	int count = 0;
	std::string in_Str;
	bool bContinue = true;
	char select_y_n;
	while (bContinue) {
		std::cout << "Input Last Name for queue or " << std::endl
				  << "command -Next- for call to registry by first Last Name in queue:" << std::endl;
		std::cin >> in_Str;
		if (in_Str == "Next") {
			if (queue.empty())
				std::cout << "Queue is empty!" << std::endl;
			else {
				std::cout << "--> " << queue.begin()->second << std::endl;
				queue.erase(queue.begin());
			}
		} else {
			queue_Pair.first = count;
			queue_Pair.second = in_Str;
			queue.insert(queue_Pair);
			count++;
		}
		std::cout << "Do you want to continue? (y/n):";
		std::cin >> select_y_n;
		while (select_y_n != 'y' && select_y_n != 'n') {
			std::cout << "INCORRECT input! Try again!" << std::endl;
			std::cout << "Do you want to continue? (y/n):";
			std::cin >> select_y_n;
		}
		if (select_y_n == 'y')
			bContinue = true;
		else
			bContinue = false;

	}
	return 0;
}
