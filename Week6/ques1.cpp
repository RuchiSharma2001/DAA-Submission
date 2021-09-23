#include<iostream>
#include <list>
using namespace std;
class Graph
{
	int V; 
	list<int> *adj; 
public:
	Graph(int V); 
	void addEdge(int v, int w); 
	bool isReachable(int s, int d);
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); 
}

bool Graph::isReachable(int s, int d)
{
	if (s == d)
	return true;

	bool *visited = new bool[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;

	list<int> queue;

	visited[s] = true;
	queue.push_back(s);

	list<int>::iterator i;

	while (!queue.empty())
	{
		s = queue.front();
		queue.pop_front();

		for (i = adj[s].begin(); i != adj[s].end(); ++i)
		{
			if (*i == d)
				return true;

			if (!visited[*i])
			{
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}
	
	return false;
}

int main()
{
	int n;
	cin>>n;
	char ch;
	int u,v;
	Graph g(n);
	do
	{
		cout<<"add edge";
		cin>>u>>v;
		g.addEdge(u,v);
		cout<<"press n to exit :";
		cin>>ch;
	}while(ch!='n'||ch!='N');
	cout<<"Enter th epoints from which you want to check the path :";
	cin>>u>>v;
	if(g.isReachable(u, v))
		cout<< "\n There is a path from " << u << " to " << v;
	else
		cout<< "\n There is no path from " << u << " to " << v;

	return 0;
}