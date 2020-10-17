#include <fstream> 
#include <iostream> 
#include <string> 

using namespace std;

int array1[2][20];
int goal[2];
int levels=0;
struct node {
	int x,y;
	struct node *ptr [6];
	bool dead = false;
};

struct node* pullingX(node *parent) {
	struct node* node = new struct node();
	levels++;
	node->x = 4;
	node->y =parent-> y;
	for (int i = 0;i < 6;i++) {
		if (parent->ptr[i] == NULL) { parent->ptr[i] = node;break; }
	}

	//adding sequence
	int count = 0;
	int flag = 0;
	for (int i = 0;i < 20;i++) {
		if (node->x == array1[0][i] && node->y == array1[1][i]) { node->dead = true; flag = 1;count++; }
	}
	if (node->dead == false) {
		struct node* ptr[6];
	}
	if (flag == 0) {
		count++; array1[0][count] = node->x; array1[0][count] = node->y;
	}
	if (goal[0] == node->x && goal[1] == node->y) { cout << "Done in " << levels << " levels"; }
	return(node);

}

struct node* pullingY(node* parent) {
	struct node* node = new struct node();
	levels++;
	node->x = parent->y;
	node->y = 3;
	for (int i = 0;i < 6;i++) {
		if (parent->ptr[i] == NULL) { parent->ptr[i] = node;break; }
	}

	//adding sequence
	int count = 0;
	int flag = 0;
	for (int i = 0;i < 20;i++) {
		if (node->x == array1[0][i] && node->y == array1[1][i]) { node->dead = true; flag = 1;count++; }
	}
	if (node->dead == false) {
		struct node* ptr[6];
	}
	if (flag == 0) {
		count++; array1[0][count] = node->x; array1[0][count] = node->y;
	}
	if (goal[0] == node->x && goal[1] == node->y) { cout << "Done in " << levels << " levels"; }
	return(node);
}



struct node* pullingY(node *parent) {
	struct node* node = new struct node();
	levels++;
	node->x = parent->x;
	node->y = 3;
	for (int i = 0;i < 6;i++) {
		if (parent->ptr[i] == NULL) { parent->ptr[i] = node;break; }
	}

	//adding sequence
	int count = 0;
	int flag = 0;
	for (int i = 0;i < 20;i++) {
		if (node->x == array1[0][i] && node->y == array1[1][i]) { node->dead = true; flag = 1;count++; }
	}
	if (node->dead == false) {
		struct node* ptr[6];
	}
	if (flag == 0) {
		count++; array1[0][count] = node->x; array1[0][count] = node->y;
	}
	if (goal[0] == node->x && goal[1] == node->y) { cout << "Done in " << levels << " levels"; }
	return(node);
}

struct node* fill_Y_from_X(node* parent) {
	levels++;
	struct node* node = new struct node();

	int temp = parent->y - parent->x;

	node->y = parent->y + temp;
	node->x = parent->x - temp;


	for (int i = 0;i < 6;i++) {
		if (parent->ptr[i] == NULL) { parent->ptr[i] = node;break; }
	}

	//adding sequence
	int count = 0;
	int flag = 0;
	for (int i = 0;i < 20;i++) {
		if (node->x == array1[0][i] && node->y == array1[1][i]) { node->dead = true; flag = 1;count++; }
	}
	if (node->dead == false) {
		struct node* ptr[6];
	}
	if (flag == 0) {
		count++; array1[0][count] = node->x; array1[0][count] = node->y;
	}
	if (goal[0] == node->x && goal[1] == node->y) { cout << "Done in " << levels << " levels"; }
	return(node);
}

struct node* fill_X_from_Y(node* parent) {
	levels++;
	struct node* node = new struct node();

	int temp = parent->y - parent->x;

	node->x = parent->x+temp;
	node->y = parent->y-temp;


	for (int i = 0;i < 6;i++) {
		if (parent->ptr[i] == NULL) { parent->ptr[i] = node;break; }
	}

	//adding sequence
	int count = 0;
	int flag = 0;
	for (int i = 0;i < 20;i++) {
		if (node->x == array1[0][i] && node->y == array1[1][i]) { node->dead = true; flag = 1;count++; }
	}
	if (node->dead == false) {
		struct node* ptr[6];
	}
	if (flag == 0) {
		count++; array1[0][count] = node->x; array1[0][count] = node->y;
	}
	if (goal[0] == node->x && goal[1] == node->y) { cout << "Done in " << levels << " levels"; }
	return(node);
}

//allocates new node 
struct node* starting() {
	
	struct node* node = new struct node();

	node -> x = 0;   
	node->y = 0;
							  
	struct node *ptr [6];
	for (int i = 0;i < 6;i++) {
		ptr[i] = NULL;
	}
	return(node);
}

int main() {
	array1[0][0] = 0;
	array1[1][0] = 0;
	goal[0] = 0;goal[1] = 1;
	int n;

	/*create root node*/
	struct node *rootNode = starting();


}

