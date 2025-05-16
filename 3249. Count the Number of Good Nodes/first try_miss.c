int recur(int* index,int**edges,int node_num,int edgesSize)
{
    
    int sum=0;
    int node_compare=0;
    int node_compare_count=0;
    
    int condition;
    for(int i=0;i<edgesSize;i++){
        if(edges[i][0]==node_num&&edges[i][1]>edges[i][0]){
            int num =edges[i][1];
            int tmp=recur(index,edges,num,edgesSize);
            if(tmp!=node_compare){
                node_compare_count++;
                node_compare=tmp;
                }
            sum+=tmp;       
        }
    }
    for(int i=0;i<edgesSize;i++){
        if(edges[i][1]==node_num&&edges[i][1]<edges[i][0]){
            int num=edges[i][0];
            int tmp=recur(index,edges,num,edgesSize);
            if(tmp!=node_compare){
                node_compare_count++;
                node_compare=tmp;
                }
            sum+=tmp;       
        }
    }
    if(node_compare_count<2){(*index)++;}
    return 1+sum;
}

int countGoodNodes(int** edges, int edgesSize, int* edgesColSize) {
    int result=0;
    int*p=&result;
    int tmp=recur(p,edges,0,edgesSize);
    return *p;
}
