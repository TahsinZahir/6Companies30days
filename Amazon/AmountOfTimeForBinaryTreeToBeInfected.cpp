class Solution {
public:
    vector<list<int>> graph; 
    unordered_set<int> visited; 
    int ans = 0; 

    // Function to build the graph from the binary tree
    void add_edge(TreeNode* root) {
        if (root == NULL) return;

        int val = root->val;
        TreeNode* leftNode = root->left;
        TreeNode* rightNode = root->right;

        if (leftNode) {
            graph[val].push_back(leftNode->val); 
            graph[leftNode->val].push_back(val); 
        }
        if (rightNode) {
            graph[val].push_back(rightNode->val); 
            graph[rightNode->val].push_back(val); 
        }

        add_edge(leftNode); 
        add_edge(rightNode); 
    }

    void bfs(int start) {
        queue<int> q;
        q.push(start);
        visited.insert(start); 

        while (!q.empty()) {
            int size = q.size();
            bool spread = false;

            for (int i = 0; i < size; i++) {
                int node = q.front();
                q.pop();

                for (int neighbour : graph[node]) {
                    if (!visited.count(neighbour)) { 
                        q.push(neighbour);
                        visited.insert(neighbour);
                        spread = true; 
                    }
                }
            }

            if (spread) ans++; 
        }
    }

    int amountOfTime(TreeNode* root, int start) {
        graph.resize(100001,list<int>()); 
        add_edge(root); 
        bfs(start);
        return ans;
    }
};
