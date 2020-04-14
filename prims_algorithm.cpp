#include <iostream>
#include<climits>
using namespace std;

int find(int* weights,int n,bool* visited){
    int minvertex=-1;
    for(int i=0;i<n;i++){
        if(!visited[i]&&(minvertex==-1||weights[i]<weights[minvertex])){
            minvertex=i;
        }
        
    }
    return minvertex;
}

void prims(int** edges,int n){
    int* parent=new int[n];
    int* weights=new int[n];
    bool* visited=new bool[n];
    
    for(int i=0;i<n;i++){
        visited[i]=false;
        weights[i]=INT_MAX;
    }
    weights[0]=0;
    parent[0]=-1;
    
    for(int i=0;i<n;i++){
        int minvertex=find(weights,n,visited);
        visited[minvertex]=true;
        for(int j=0;j<n;j++){
            if(edges[minvertex][j]!=0&&!visited[j]){
                if(edges[minvertex][j]<weights[j]){
                    weights[j]=edges[minvertex][j];
                    parent[j]=minvertex;
                }
            }
        }
    }
    for(int i=1;i<n;i++){
        if(parent[i]<i){
            cout<<parent[i]<<" "<<i<<" "<<weights[i]<<endl;
        }
        else{
            cout<<i<<" "<<parent[i]<<" "<<weights[i]<<endl;
        }
    }
}

int main()
{
  	int n,e;
  	cin >> n >> e;
    int** edges=new int*[n];
    for(int i=0;i<n;i++){
        edges[i]=new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }
    
    for(int i=0;i<e;i++){
        int f,s,weight;
        cin>>f>>s>>weight;
        edges[f][s]=weight;
        edges[s][f]=weight;
    }
    //cout<<endl;
    prims(edges,n);
    
    

  /*

  	   Write Your Code Here
	   Complete the Rest of the Program
	   You have to Print the output yourself
	 
  */
    for(int i=0;i<n;i++){
        delete [] edges[i];
    }
    delete [] edges;

  return 0;
}

