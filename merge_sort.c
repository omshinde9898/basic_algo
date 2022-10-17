// Merge sort is algorithm used for sorting of an array 
void merge_sort(int a[] , int i, int j){
    /*
        merge_sort(a[] ,int i ,int j ,int x )
        a[] : one dimensional array (sorted)
        i : starting index of array
        j : last index of array

    Definition : Merge sort is algorithm used to sort an one dimensional array with
        time complexity of logarithmic function
    */
    int c;
    
    if(i<j){
        
        //Splitting of array into two
        c = (i+j)/2;
    
        //Recursion used for continious comparison
        merge_sort(a,i,c);
        merge_sort(a,c+1,j);

        //merging of sub-arrays
        merge(a,i,c,j);
    }
}