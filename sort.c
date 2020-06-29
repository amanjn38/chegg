sort(point a[],int len,int t){
    float arr[len];
    for(int i=0;i<len;i++){
        arr[i]=sqrt((a[i].x-X)*(a[i].x-X)+(a[i].y-Y)*(a[i].y-Y))
    }
    mergeSort(arr,0,len-1,t);
}