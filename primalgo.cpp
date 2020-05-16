//Implementing Prim's Algorithm
#include <iostream>
#include <cstring>
using namespace std;

#define V 5
#define  HIGH 999999

int main(){
	//Graph G(V,E)
	int G[V][V] = {
			      //0 1 2  3 4
	/* 0 */		{0,4,0,5,2},
	/* 1 */		{4,0,1,3,0},
	/* 2 */		{0,1,0,8,0},
	/* 3 */		{5,3,8,0,2},
	/* 4 */		{2,0,0,2,0}
			};

	//Array that takes care of visited vertices
	int v_array[V];

	//Initialize all positions as false initially
	memset(v_array,false,sizeof(v_array));

	//Initializing v_array[0] as true to start with the 0th vertex
	v_array[0] = true;

	cout<<"EDGE  :  WEIGHT\n";//Edge and  weight of MST
	int n_edges = 0;
	while(n_edges < V-1){ //Definition of MST
		//Variable to choose minimum value according to Prim's Algorithm
			int min = HIGH;

		//Initialize r and c that will display the edge in output
			int r = 0,c = 0;

    	//Traversal along the row to pick every vertex
	    for(int i = 0; i < 5; ++i){
	    	//After picking a vertex check if it is inside the visited array
		     if(v_array[i]){
                //Now traverse along columns
			    for(int j = 0; j < 5; ++j){
				    if(min > G[i][j]){//Step 5
					    if (!v_array[j] && G[i][j]) {//Step 6
					       min = G[i][j];
					       r = i;
					       c = j;
			    	    }
		    	   }
	 	       }
            }
        }
		//Display the edge with minimum value
		    cout<<"  "<<r<<"-"<<c<<" : "<<G[r][c];
		    cout<<endl;
		    v_array[c] = true;
			n_edges++;
	}
	return 0;
}
