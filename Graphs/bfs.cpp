/// graph traversal BFS - first traversing the neighbour node , and  the then their neighbours 

#include <vector>
#include <iostream>
#include <queue>
#include<list>
#include<map>
using namespace std;

class GraphMatrix{
    private:
        vector<vector<int>> matrix;
    public:
        GraphMatrix(int n){
            matrix=vector<vector<int>>(n,vector<int>(n,0));
        }

        void addEdge(int u,int v){
            matrix[u][v]=1;
            matrix[v][u]=1;
        }

        void display(){
            int n=matrix.size();
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<matrix[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        void BFS(int node)
        {
            int n=matrix.size();
            vector<bool> visited(n,false);

            queue<int> q;
            q.push(node);
            visited[node]=true;
            while(!q.empty()){
                int currNode=q.front();
                cout<<q.front()<<" ";
                q.pop();

                for(int i=0;i<n;i++){
                    if(matrix[currNode][i]==1 && visited[i]==false){
                        q.push(i);
                        visited[i]=true;
                    }
                }
            }
        }
};


class GraphList{
    private:
        map<int,list<int>> adjList;
        int n;
    public:
        GraphList(int n){
            this->n=n;
        }
        void addEdge(int u,int v){
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }

        void BFS(int node){
            vector<bool> visited(n,false);
            queue<int> q;
            q.push(node);
            visited[node]=true;
            while(!q.empty()){
                int currNode=q.front();
                q.pop();
                cout<<currNode<<" ";

                for(int node: adjList[currNode]){
                    if(!visited[node]){
                        q.push(node);
                        visited[node]=true;
                    }
                }
            }
        }


};

int main(){

    // GraphMatrix gp(5);

    GraphList gp(5);

    gp.addEdge(0,1);
    gp.addEdge(0,2);
    gp.addEdge(1,3);
    gp.addEdge(1,2);
    gp.addEdge(2,4);
    gp.BFS(2);


    return 0;
}
