class binarysearchusingrecursion {
 
    // Method 1
    // Returns index of x
    // if it is present in arr[],
    // else return -1
    int binarySearch(int arr[], int x)
    {
 
        int l = 0, r = arr.length - 1;
 
        // Checking element in whole array
        while (l <= r) {
            int m = l + (r - l) / 2;
 
            // Check if x is present at mid
            if (arr[m] == x)
                return m;
 
            // If x greater, ignore left half
            if (arr[m] < x)
                l = m + 1;
 
            // If x is smaller,
            // element is on left side
            // so ignore right half
            else
                r = m - 1;
        }
 
        // If we reach here,
        // element is not present
        return -1;
    }
 
    // Method 2
    // Main driver method
    public static void main(String args[])
    {
 
        GFG ob = new GFG();
 
        // Input array
        int arr[] = { 2, 3, 4, 10, 40 };
        // Length of array
        int n = arr.length;
        // Element to be checked if present or not
        int x = 10;
 
        // Calling the method 1 and
        // storing result
        int result = ob.binarySearch(arr, x);
 
        // Element present
        if (result == -1)
 
            // Print statement
            System.out.println("Element not present");
 
        // Element not present
        else
 
            // Print statement
            System.out.println("Element found at index "
                               + result);
    }
}
