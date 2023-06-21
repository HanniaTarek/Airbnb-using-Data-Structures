#include "node.h"
#include "node.h"

node::node() {
	properties data;
	next = NULL; //next = 0;
}
node::node(properties value) {
	data = value;
	next = NULL; //next = 0;
}
