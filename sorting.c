mergeSort(point a[],int start,int end,int t){
        if(start<end){
            int mid=(start+end)/2;
            mergesort(a,start,mid,t);
            mergesort(a,mid+1,end,t);
            merge(a,start,mid,end);
        }
    
}
void merge(point a[],int start,int mid,int end){
    int i,j,k;
    int n1= mid-start+1;
    int n2=end-mid;

    point L[n1],R[n2];
    for(int i=0;i<n1;i++){
        L[i].dis=a[start+i].dis;
        L[i].x=a[start+i].x;
        L[i].y=a[start+i].y;
    }
    for(int j=0;j<n2;j++){
        R[i].dis=a[mid+1+j].dis;
        R[i].x=a[mid+1+j].x;
        R[i].y=a[mid+1+j].y;
    }

    i=0;
    j=0;
    k=start;
    while(i<n1 && j<n2){
        if(L[i].dis<R[j].dis){
            a[k].x=L[i].x;
            a[k].y=L[i].y;
            a[k].dis=L[i].dis;
            i++
        }
        else if(L[i].dis>R[j].dis){
            a[k].x=R[j].x;
            a[k].y=R[j].y;
            a[k].dis=R[j].dis;
            j++;
        }
        else{
        int a=compareTo(L[i],R[j]);
            if(a>0){
             a[k].x=L[i].x;
            a[k].y=L[i].y;
            a[k].dis=L[i].dis;
            i++}
            else if(a<0){
                a[k].x=R[j].x;
            a[k].y=R[j].y;
            a[k].dis=R[j].dis;
            j++;
            }
        }
        k++;
    }

    while(i<n1){
        a[k].x=L[i].x;
        a[k].y=L[i].y;
        a[k].dis=L[i].dis;
        i++;
        k++;
    }

    while(j<n2){
        a[k].x=R[j].x;
        a[k].y=R[j].y;
        a[k].dis=R[j].dis;
        j++;
        k++;
    }

}
