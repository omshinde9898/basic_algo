int binary_search(int a[],int i,int j,int x){
    
    int c;
    
    if(i>j){
        return(-1);
    }
    
    c = (i+j)/2;
    
    if(x==a[c]){
        return(c);
    }
    
    if(x>a[c]){
        return(binary_search(a,c+1,j,x));
    }else{
        return(binary_search(a,i,c-1,x));
    }
}
