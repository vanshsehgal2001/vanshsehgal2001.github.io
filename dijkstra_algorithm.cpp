#include <iostream>
using namespace std;
#include<climits>

int find(bool* visited,int* distance,int v){
    int minvertex=-1;
    for(int i=0;i<v;i++){
        if(!visited[i] && (minvertex==-1 || distance[minvertex]>distance[i])){
            minvertex=i;
        }
    }
    return minvertex;
}

void dijkstra(int** edges,int v){
    int* distance=new int[v];
    bool* visited=new bool[v];
    
    for(int i=0;i<v;i++){
        distance[i]=INT_MAX;
        visited[i]=false;
    }
    distance[0]=0;
    
    for(int i=0;i<v;i++){
        int minvertex=find(visited,distance,v);
        visited[minvertex]=true;
        for(int j=0;j<v;j++){
            if(edges[minvertex][j]!=0 && !visited[j]){
                int dist=distance[minvertex]+edges[minvertex][j];
                if(dist<distance[j]){
                    distance[j]=dist;
                }
            }
        }
    }
    for(int i=0;i<v;i++){
        cout<<i<<" "<<distance[i]<<endl;
    }
}

int main()
{
  	int v,e;
  	cin >> v >> e;
	
    int** edges=new int*[v];
    for(int i=0;i<v;i++){
        edges[i]=new int[v];
        for(int j=0;j<v;j++){
            edges[i][j]=0;
        }
    }
    for(int i=0;i<e;i++){
        int f,s,weight;
        cin>>f>>s>>weight;
        edges[f][s]=weight;
        edges[s][f]=weight;
    }
    
    dijkstra(edges,v);
    
  /*

  	   Write Your Code Here
	   Complete the Rest of the Program
	   You have to Print the output yourself
	 
  */

  return 0;
}

