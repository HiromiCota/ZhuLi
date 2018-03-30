#include "node.h"

using namespace Action;

int main() {
	Node task = Node("Do a thing", "Do it well");
	string temp = task.toString();
	cout << temp;
	cin.get();
	return EXIT_SUCCESS;
}
