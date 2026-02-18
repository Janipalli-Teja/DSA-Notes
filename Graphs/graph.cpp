// graph using adjacency matrix

#include <vector>
#include <iostream>
#include<map>
#include<list>

using namespace std;

class GraphMatrix
{
private:
    vector<vector<int>> matrix;

public:
    GraphMatrix(int n)
    {
        matrix = vector<vector<int>>(n, vector<int>(n, 0));
        cout << "graph created";
    }

    void addEdge(int i, int j)
    {
        matrix[i][j] = 1;
        // for undirected graph also include below
        matrix[j][i] = 1;
    }

    void deleteEdge(int i, int j)
    {
        matrix[i][j] = 0;
        // for undirected graph also include below
        matrix[j][i] = 0;
    }
    void display()
    {
        int size = matrix.size();
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// building graphs using adjaceny list 

class GraphList{
    map<int,list<int>> adjList;
    public:
        void addEdge(int i,int j){
            adjList[i].push_back(j);
            
            // for undirected graph
            adjList[j].push_back(i);
        }

        void display(){
            for(auto i:adjList){
                cout<<i.first<<"->";
                for(auto j:i.second){
                    cout<<j<<" ";
                }
                cout<<endl;
            }
        }
       
};


int main()
{
    // Graph gp(5);
    // gp.addEdge(2, 3);
    // gp.display();

    GraphList gpl;
    gpl.addEdge(1,3);
    gpl.addEdge(3,4);
    gpl.addEdge(1,4);
    gpl.display();
    return 0;
}