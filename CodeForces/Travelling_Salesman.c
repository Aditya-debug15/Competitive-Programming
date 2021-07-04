#include <stdio.h>
#include <stdlib.h>

#define INF (long long int)1e16
typedef struct vertex_dis_for_heap *ptr_node_for_heap;
typedef struct vertex_dis_for_heap vertex_dis_for_heap;
typedef struct Minheap *ptr_Minheap;
typedef struct Minheap Minheap;

typedef struct AdjList AdjList;
typedef struct AdjList* PtrAdjList;
typedef struct Node Node;
typedef struct Node* PtrNode;

struct AdjList{
    int degree;   // total number of vertex
    PtrNode vertex; // array of pointer to nodes
};

struct Node
{
    int vertexid; // number of the vertex
    long long int length;   // length of the road in km
    Node* Next;
};

struct vertex_dis_for_heap
{
    int vertex;
    long long int dis;
};
struct Minheap
{
    int total_elements;
    // total number of elements that can be added in the queue which is equal to number of vertices
    int size;
    // denotes the current size
    ptr_node_for_heap Array;
    // Array of node this array is basically our heap
    int *position;
    // To do decrease key operation efficiently
};
PtrAdjList CreateEmptyGraph(int degree)
{
    // A function to create an empty Adj List
    PtrAdjList G;
    G=(PtrAdjList)malloc(sizeof(AdjList));
    if(G==NULL)
    {
        printf("Memory full\n");
        exit(0);
    }
    G->degree=degree;
    G->vertex=malloc(degree*sizeof(Node));
    if(G->vertex==NULL)
    {
        printf("Memory full\n");
        exit(0);  
    }
    // since array starts from 0 but our vertexid starts from 1 so vertexid becomes i+1
    for(int i=0;i<degree;i++)
    {
        G->vertex[i].vertexid=i+1;
        G->vertex[i].length=0;
        G->vertex[i].Next=NULL;
    }
    return G;
}

void InsertEdge(PtrAdjList G,int vertex1,int vertex2,long long int length)
{
    // function to add an edge
    PtrNode add=(PtrNode)malloc(sizeof(Node));
    PtrNode add2=(PtrNode)malloc(sizeof(Node));
    if(add==NULL)
    {
        printf("Memory full\n");
        exit(0);
    }
    // inserting at the front if it is not present
    add->vertexid=vertex2;
    add->length=length;
    add->Next=G->vertex[vertex1-1].Next;
    G->vertex[vertex1-1].Next=add;
    add2->vertexid=vertex1;
    add2->length=length;
    add2->Next=G->vertex[vertex2-1].Next;
    G->vertex[vertex2-1].Next=add2;
}
ptr_Minheap create_empty_heap(int total_elements)
{
    ptr_Minheap p;
    p = (ptr_Minheap)malloc(sizeof(Minheap));
    p->size = 0;
    p->total_elements = total_elements;
    p->Array = (ptr_node_for_heap)malloc(total_elements * sizeof(vertex_dis_for_heap));
    p->position = (int *)malloc(total_elements * sizeof(int));
    return p;
}

void swap_array_elems(ptr_Minheap p, int i, int j)
{
    int vertex1 = p->Array[i].vertex - 1;
    int vertex2 = p->Array[j].vertex - 1;
    p->position[vertex1] = j;
    p->position[vertex2] = i;
    int temp_vertex;
    long long int temp_dis;
    temp_vertex = p->Array[i].vertex;
    temp_dis = p->Array[i].dis;
    p->Array[i] = p->Array[j];
    p->Array[j].vertex = temp_vertex;
    p->Array[j].dis = temp_dis;
}
void DownMinheapify(ptr_Minheap p, int i)
{
    // Utility function for Minheapify
    int n = p->size;
    // Establish heap property first at a[i]
    int w = i * 2 + 1; // First descendant of i (0-based indexing)
    while (w < n)
    {
        if (w + 1 < n)
            if (p->Array[w + 1].dis < p->Array[w].dis)
                w++;
        if (p->Array[i].dis <= p->Array[w].dis)
            return;
        swap_array_elems(p, i, w);
        i = w;         // we swapped with this node ; subtree below it may need fixing
        w = i * 2 + 1; // Get first descendant of 'i' and repeat loop procedure
    }
}
void MinHeapify(ptr_Minheap p)
{
    int n = (p->size) / 2;
    for (int i = n - 1; i >= 0; i--)
    {
        DownMinheapify(p, i);
    }
}
ptr_node_for_heap ExtractMin(ptr_Minheap p)
{
    if (p->size > 0)
    {
        ptr_node_for_heap n;
        n=(ptr_node_for_heap)malloc(sizeof(vertex_dis_for_heap));
        n->vertex = p->Array[0].vertex;
        n->dis = p->Array[0].dis;
        p->size = p->size - 1;
        swap_array_elems(p,0,p->size);
        DownMinheapify(p,0);
        return n;
    }
    else{
        return NULL;
    }
}

void DecreaseKey(ptr_Minheap p,int vertex,long long int dis)
{
    int i= p->position[vertex-1];
    p->Array[i].dis=dis;
    while (i>0 && p->Array[i].dis < p->Array[(i - 1) / 2].dis)
    {
        swap_array_elems(p,i,(i-1)/2);
        i = (i - 1) / 2;
    }
}

void print_heap(ptr_Minheap p)
{
    for (int i = 0; i < p->size; i++)
    {
        printf("vertex=%d   dis=%lld\n", p->Array[i].vertex, p->Array[i].dis);
    }
}
long long int Prims(PtrAdjList G)
{
    int count=0;
    long long int sum=0;
    int* known;
    long long int* distance_source;
    int n=G->degree;
    known=(int*)malloc((n+1)*sizeof(int));
    distance_source=(long long int*)malloc((n+1)*sizeof(long long int));
    ptr_Minheap pq=create_empty_heap(n);
    pq->size=n;
    known[1]=0;
    distance_source[1]=0;
    pq->position[0]=0;
    pq->Array[0].vertex=1;
    pq->Array[0].dis=0;
    for(int i=2;i<=n;i++)
    {
        known[i]=0;
        distance_source[i]=INF;
        pq->Array[i-1].vertex=i;
        pq->Array[i-1].dis=INF;
        pq->position[i-1]=i-1;
    }
    while(pq->size >0)
    {
        ptr_node_for_heap heap_node=ExtractMin(pq);
        known[heap_node->vertex] = 1;
        if(sum<heap_node->dis)
            sum=heap_node->dis;
        count++;
        if(count>=n)
            break;
        PtrNode temp =G->vertex[heap_node->vertex-1].Next;
        // for all neighbours of u for whom SP is not known, 
        // check if shorter path is available through u.
        while(temp!= NULL)
        {
            int v = temp->vertexid;
            if( (!known[v]) && (temp->length < distance_source[v] ) )
            {
                distance_source[v] =temp->length; // Update dv
                DecreaseKey(pq,v,distance_source[v]);
            }
            temp = temp->Next;
        }
    }
    return sum;
}
void solve()
{
    int n,x;
    scanf("%d %d",&n,&x);
    PtrAdjList Graph_airways;
    Graph_airways=CreateEmptyGraph(n);
    for(int i=0;i<x;i++)
    {
        int vertex1,vertex2;
        long long int length;
        scanf("%d %d %lld",&vertex1,&vertex2,&length);
        InsertEdge(Graph_airways,vertex1,vertex2,length);
    }
    printf("%lld\n",Prims(Graph_airways));
} 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve();
    }
}