sort(point a[],int len,int t){
    if(t>len)
    mergeSort(a,0,len-1,t);
    else 
        insertionSort(a,0,len-1,t);
}
