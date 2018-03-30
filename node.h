#ifndef NODE_H
#define NODE_H
#include <cstdlib>
#include <string>
#include <iostream>
#endif


//typedef std::string string;
using namespace std;
namespace Action {
	class Node {
	private:
		string name;
		string description;

	public:
		//string* toString() { return *name; }
		const string toString()const {return name;}
		void rename(string name) { this->name = name; }
		string get() { return description; }
		void changeDescription(string description) { this->description = description; }

        //Operator overloads
        friend std::ostream& operator << (ostream& out, const Node& node);

		Node();
		//Node(string name) {rename(name);}
		Node(string name, string description);
		//~Node();
	};
}

