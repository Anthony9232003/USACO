// okay so the first line of the code indicates the number N that can range 
// from 1 to 100. then we have three integers a, b, and g that are sequential 
// where a and b indicate which shells are swapped so for example, 1 2 1 is
// where we start the pebble under 1 but swap the pebble to shell 2 and then 
// guess shell 1. But since the pebble is under shel 2 now we get no point for
// that. 
//
// so for the algorithm I can think about storing the swapped value of where 
// the pebble is into a value and then updating that each time that its swapped
// to its new position. Then if we have our guess (input) each time then we can
// see if those values match to each other. 
//
// so for the storing of the swapped value we can use a vector (dynamic array) 
// that will just hold the one value. 






#include <algorithm> 
#include <cstdio>
#include <vector> 

using std::vector; 

int main() {
	freopen("shell.in", "r", stdin); 

	int n; 
	scanf("%d", &n); 

	//shell_at_pos[i] stores the label of the shell located at position i
	vector<int> shell_at_pos(3); 

