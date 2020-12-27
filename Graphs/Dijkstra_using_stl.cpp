#include<bits/stdc++.h> 
using namespace std; 
# define INF 0x3f3f3f3f  
typedef pair<int, int> iPair; 
// 0   (4,1)   (8,7)
// 1   (11,7)  (4,0)   (8,2)
// 2   (2,8)   (4,5)   (8,1)   (7,3)
// 3   (14,5)  (7,2)   (9,4)
// 4   (10,5)  (9,3)
// 5   (4,2)   (2,6)   (14,3)  (10,4)
// 6   (6,8)   (1,7)   (2,5)   
// 7   (7,8)   (1,6)   (8,0)   (11,1)
// 8   (2,2)   (7,7)   (6,6)   
    
// 0   1   2   3   4   5    6  7   8   Index
// 0   4   12  25  I   11   9  8   15  dist
// (8,2) (7,8) (2,5) (14,3)   
void Graph::shortestPath(int src) 
{ 
    priority_queue< iPair, vector <iPair> , greater<iPair> > pq; 
    vector<int> dist(V, INF);
    pq.push(make_pair(0, src)); 
    dist[src] = 0; 
    while (!pq.empty()) { 
        int u = pq.top().second; 
        pq.pop(); 
        list< pair<int, int> >::iterator i; 
        for (i = adj[u].begin(); i != adj[u].end(); ++i) { 
            int v = (*i).first; 
            int weight = (*i).second; 
            if (dist[v] > dist[u] + weight) { 
                dist[v] = dist[u] + weight; 
                pq.push(make_pair(dist[v], v)); 
            } 
        } 
    } 
    printf("Vertex   Distance from Source\n"); 
    for (int i = 0; i < V; ++i) 
        printf("%d \t\t %d\n", i, dist[i]); 
} 
