mergeSort(float a[],int start,int end,int t){
    if(t>a.size()){
        if(l<r){
            int mid=(start+end)/2;
            mergesort(a,start,mid,t);
            mergesort(a,mid+1,end,t);
            merge(a,start,mid,end);
        }
    }
    else
    {
        insertionSort(a,start,end,t);
    }
    
}
void merge(float a[],int start,int mid,int end){
    int i,j,k;
    int n1= mid-start+1;
    int n2=end-mid;

    int L[n1],R[n2];
    for(int i=0;i<n1;i++){
        L[i]=a[start+i];
    }
    for(int j=0;j<n2;j++){
        R[i]=a[mid+1+j];
    }

    i=0;
    j=0;
    k=start;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            a[k]=L[i];
            i++
        }
        else{
            a[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        a[k]=L[i];
        i++;
        k++;
    }

    while(j<n2){
        a[k]=R[j];
        j++;
        k++;
    }

}