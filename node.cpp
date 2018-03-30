#ifndef NODE_CPP
#define NODE_CPP
#include "node.h"

#endif

using namespace Action;

std::ostream& operator << (ostream& out, const Node& node) {
    std::string temp = node.toString();
    out << temp;
    return out;
}

Node::Node() {
    name = "";
    description = "";

}

Node::Node(string name, string description) {
    this->name = name;
    this->description = description; }
