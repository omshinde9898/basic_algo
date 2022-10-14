// Binary search algorithm for faster searching through array 
// Condition : Array should be sorted then we can apply this search


int binary_search(int a[],int i,int j,int x){
    /*
        binary_search(a[] ,int i ,int j ,int x )
        a[] : one dimensional array (sorted)
        i : starting index of array
        j : last index of array
        x : target value

    Definition : Binary search is algorithm used to search target throgh 1-D sorted array which have 
                    logarithmic time complexity hence efficient than linear search 
    */
    
    int c;      // Division variable
    
    // Initial check
    if(i>j){
        return(-1);
    }
    // Division of array into two parts 
    c = (i+j)/2;
    // Comparision of current element with target
    if(x==a[c]){
        return(c);
    }
    // Use of reccursion to continue proceess to last element
    if(x>a[c]){
        return(binary_search(a,c+1,j,x));
    }else{
        return(binary_search(a,i,c-1,x));
    }
}
