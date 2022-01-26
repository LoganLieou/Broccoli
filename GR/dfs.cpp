#include <bits/stdc++.h>

using namespace std;

class Graph {
public:
	int val;
	vector<Graph*> neighbors;
	Graph() val(0), neighbors(nullptr) {}
	Graph(int _val) val(_val), neighbors(nullptr) {}
	Graph(int _val, vector<Graph*> _neighbors) val(_val), neighbors(_neighbors) {}
};

void DFS(Graph g) {
	stack<Graph*> st;
	st.push(g);

	set<Graph*> visited;

	while(!st.empty()) {
		Graph* cur = st.top(); st.pop();
		cout << cur->val << endl;
		for (auto n : cur -> neighbors) {
			if (visited.find(n) == visited.end()) {
				st.push(n);
				visited.insert(n);
			}
		}
	}
}

int main() {

}
