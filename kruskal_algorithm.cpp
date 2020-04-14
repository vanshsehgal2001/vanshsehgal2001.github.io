#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class edge{
    public:
    	int source;
    	int dest;
    	int weight;
};
	//COMPARE ON THE BASIS OF WEIGHT
bool compare(edge e1,edge e2){
    return e1.weight<e2.weight;
}

	//CHECKING IT DOES NOT FORM A CYCLE

int find(int n,int* parent){
    if(parent[n]==n){
        return n;
    }
    return find(parent[n],parent);
}

void kruskals(edge *input,int n,int e){
    //SORT THE INPUT ARRAY IN ASCENDING ORDER ON THE BASIS OF WEIGHTS
    
    sort(input,input+e,compare);
    
    edge *output=new edge[n-1];
    
    //MAKING PARENT ARRAY TO APPLY UNION-FIND ALGO
    
    int* parent=new int[n];
    
    for(int i=0;i<n;i++){
        parent[i]=i;
    }
    int count=0;
    int i=0;
    
    while(count!=n-1){
        edge currentedge=input[i];
        
        //CHECKING IF THE CURRENT EDGE CAN BE ADDED OR NOT
        int sourceparent=find(currentedge.source,parent);
        int destparent=find(currentedge.dest,parent);
        
	//NO CYCLE CONDITION
        if(sourceparent!=destparent){
            output[count]=currentedge;
            count++;
            parent[sourceparent]=destparent;
        }
        i++;
    }
    
    for(int i=0;i<count;i++){
        if(output[i].source<output[i].dest){
            cout<<output[i].source<<" "<<output[i].dest<<" "<<output[i].weight<<endl;
        }
        else{
            cout<<output[i].dest<<" "<<output[i].source<<" "<<output[i].weight<<endl;
            
        }
    }
    
}

int main()
{
	int n, e;
  	cin >> n >> e;
    
	edge *input=new edge[e];
    
    for(int i=0;i<e;i++){
        int s,d,w;
        cin>>s>>d>>w;
        input[i].source=s;
        input[i].dest=d;
        input[i].weight=w;
    }
    
    kruskals(input,n,e);

  /*

  	   Write Your Code Here
	   Complete the Rest of the Program
	   You have to Print the output yourself
	 
  */
    

  return 0;
}

