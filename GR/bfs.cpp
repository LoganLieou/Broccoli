#include <bits/stdc++.h>
#define PO pop
#define FR front
#define PU push
#define E empty

using namespace std;

struct Graph {
	// values
	int val;
	vector<Graph*> neighbors;

	// constructors
	Graph() : val(0), neighbors({}) {}
	Graph(int val_) : val(val_), neighbors({}) {}
	Graph(int val_, vector<Graph*> _n) : val(val_), neighbors(_n) {}
};

void BFS(Graph* start) {
	queue<Graph*> q;
	q.PU(start);
	while(!q.E()) {
		Graph* current = q.FR(); q.PO();
		cout << current->val << "\n";
		for (Graph* g : current -> neighbors) {
			q.PU(g);
		}
	}
}

int main() {
	Graph g (1);
	BFS(&g);
}
