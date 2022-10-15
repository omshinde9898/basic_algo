void merge_sort(int a[] , int i, int j){
    int c;
    if(i<j){
        c = (i+j)/2;
        merge_sort(a,i,c);
        merge_sort(a,c+1,j);
        merge(a,i,c,j);
    }
}