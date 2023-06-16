#include <stdio.h>
#include <stdlib.h>
//
//    void mFunction(){
//        printf("You are eligible\n");
//    }
//    int main()
//{
//    mFunction();
//    mFunction();
//    mFunction();
//
//    return 0;
//}
  //------------------

         /*         print string of character   */


//  void myFunction(char name[]){
//      printf("Hello %s\n",name);
//
//  }
//
//    int main(){
//        myFunction("Rahat");
//        myFunction("Ahmed");
//        myFunction("Shafi");
//
//
//    }

                /* Multiple Parameters */
//
//    void myFunction(char name[],int age){
//    printf("Hello %s. You are %d years old\n",name,age );
//
//    }
//    int main(){
//        myFunction("Rahat",20);
//        myFunction("Ahmed",21);
//        myFunction("Shafi",22);
//
//    }

            /* Pass Arrays as Function Parameters  */
//
//    myFunction(int arr[5]){
//        for(int i=0;i<5;i++){
//            printf("%d\n",arr[i]);
//        }
//    }
//    int main(){
//        int arr[5]={10,20,30,40,50};
//        myFunction(arr);
//
//
//    }

                 /* Return Values  parameter 1*/

//    int myFunction(int x){
//        return 5+x;
//    }
//    int main(){
//         printf("Result is: %d", myFunction(3));
//
//    }
                /* Return Values two parameter */
//
//        int myFunction(int x,int y){
//            return x+y;
//        }
//        int main(){
//            int result=myFunction(5,5);
//            printf("%d",result);
//
//        }

            /* Recursion */
//
//    int myFunction(int k);
//    int main(){
//            int result= myFunction(10);
//            printf("%d",result);
//
//    }
//    int myFunction(int k){
//        if(k>0){
//            return k + myFunction(k-1);
//        }
//        else{
//            return 0;
//        }
//
//
//    }

                    /*  Structure  */

//        struct Structure{
//            char name[30];
//            char word;
//            int age;
//
//        };
//        int main(){
//            struct Structure st;
//            strcpy(st.name, "Rahat Ahmed Shafi");//alternative of array or string
//            st.word='A';
//            st.age=21;
//            printf("%s\n",st.name);
//            printf("%c\n",st.word);
//            printf("%d",st.age);
//        }

    //---------------
         /* Function prototype is important for implementation  */

//    void Ingland();
//    void Bangladesh();
//    void India();
//    void Bangladesh(){
//        printf("Hello Bangladesh.\n");
//        India();
//        return;
//    }
//    void Ingland(){
//        printf("Hello Ingland.\n");
//        return;
//    }
//
//
//    int main(){
//
//        Bangladesh();
//        return 0;
//    }
//     void India(){
//        printf("Hello India.\n");
//        Ingland();
//        return;
//    }

                /* Practice 1.Combination(nCr) */
//
//    int factorial();
//    int factorial(int x){
//        int fact=1;
//        for(int i=2;i<=x;i++){
//            fact=fact*i;
//        }
//        return fact;
//
//    }
//    int Combination(int n,int r){
//        int nr=factorial(n)/(factorial(r)*factorial(n-r));
//        return nr;
//
//    }
//
//    int main(){
//        int n,r;
//        printf("Enter n Number:");
//        scanf("%d",&n);
//        printf("Enter r Number:");
//        scanf("%d",&r);
//        int nFact=factorial(n);
//        int rFact=factorial(r);
//        int nrFact=factorial(n-r);
//        int ncr=Combination(n,r);
//       // int ncr=nFact/(rFact*nrFact);
//        printf("%d",ncr);
//
//    }

        /* Practice problem 2. Pascal */

//    int factorial();
//    int factorial(int x){
//        int fact=1;
//        for(int i=2;i<=x;i++){
//            fact=fact*i;
//        }
//        return fact;
//
//    }
//    int Combination(int n,int r){
//        int nr=factorial(n)/(factorial(r)*factorial(n-r));
//        return nr;
//
//    }
//
//    int main(){
//
//        int n;
//        printf("Enter n Number:");
//        scanf("%d",&n);
//        for(int i=0;i<=n;i++){
//                for(int k=n;k>=i;k--){
//                    printf(" ");
//                }
//            for(int j=0;j<=i;j++){
//                int icj=Combination(i,j);
//                printf("%d ",icj);
//            }
//            printf("\n");
//
//
//
//        }
//
//    }

                /* Bubble sort in ascending order*/ //Time complexity O(n^2)

//    void function(int *arr,int n){
//            for(int i=0;i<n;i++){
//                printf("%d ",arr[i]);
//            }
//            printf("\n");
//
//
//    }
//    void bubbleSort(int *arr,int n){
//        int temp;
//         for(int i=0;i<n-1;i++){//no of passes
//                printf("Working on passes:%d\n",i+1);
//            for(int j=0;j<n-1-i;j++){
//                if(arr[j]>arr[j+1]){
//                temp=arr[j];
//                arr[j]=arr[j+1];
//                arr[j+1]=temp;
//                }
//
//            }
//        }
//    }
//    int main(){
//        //int arr[]={4,2,19,7,17,1};
//        int arr[]={1,2,4,7,17,19};
//        int n=6;
//
//        function(arr,n);
//        bubbleSort(arr,n);
//        function(arr,n);
//
//
//
//        return 0;
//    }


            /* Bubble short in descending order*/ //Time complexity O(n^2)

//    void function(int *arr,int n);
//    void BubbleSort(int *arr,int n);
//    void function(int *arr,int n){
//        for(int i=0;i<n;i++){
//            printf("%d ",arr[i]);
//        }
//        printf("\n");
//    }
//    void BubbleSort(int *arr,int n ){
//        int temp;
//
//        for(int i=0;i<n-1;i++){
//                printf("Working on passes:%d\n",i+1);
//
//            for(int j=0;j<n-1-i;j++){
//
//                if(arr[j]>arr[j+1]){
//                    temp=arr[j];
//                    arr[j]=arr[j+1];
//                    arr[j+1]=temp;
//
//                }
//            }
//
//            }
//
//        }
//    }
//     int main(){
//        int arr[]={4,5,2,98,6,1};
//       int arr[]={1,2,4,5,6,98};
//        int n=6;
//        function(arr,n);
//        BubbleSort(arr,n);
//        function(arr,n);
//        return 0;
//     }

                /* Bubble Sort and Time complexity O(n) */

//    void function(int *arr,int n){
//           for(int i=0;i<n;i++){
//            printf("%d ",arr[i]);
//           }
//           printf("\n");
//
//    }
//    void BubbleSort(int *arr,int n){
//        int temp;
//        int isSorted=0;
//        for(int i=0;i<n-1;i++){
//           printf("Working on passes:%d\n",i+1);
//           isSorted=1;
//            for(int j=0;j<n-1-i;j++){
//                if(arr[j]>arr[j+1]){
//                    temp=arr[j];
//                    arr[j]=arr[j+1];
//                    arr[j+1]=temp;
//                    isSorted=0;
//                }
//            }
//            if(isSorted){
//                return;
//            }
//        }
//
//    }
//
//    int main(){
//         int arr[]={4,2,17,55,8,1};
//         //int arr[]={1,2,3,4,5,6};
//         int n=6;
//         function(arr,n);
//         BubbleSort(arr,n);
//         function(arr,n);
//
//
//    }

        /* Insertion Sort */


//    void function(int *arr,int n){
//           for(int i=0;i<n;i++){
//            printf("%d ",arr[i]);
//           }
//           printf("\n");
//
//    }
//
//    void InsertionSort(int *arr, int n){
//        int j,key;
//
//        for(int i=1;i<=n-1;i++){
//            key=arr[i]; // key=2
//            j=i-1;  // j=4
//
//            while(j>=0 && arr[j]>key){
//                    arr[j+1]=arr[j];
//                    j--;
//            }
//            arr[j+1]=key;
//        }
//    }
//    int main(){
//        int arr[]={4,2,17,55,8,1};
//        int n=6;
//        function(arr,n);
//        InsertionSort(arr,n);
//        function(arr,n);
//        return 0;
//    }

        /* Selection Sort*/

//    void function(int *arr,int n){
//        for(int i=0;i<n;i++){
//            printf("%d ",arr[i]);
//        }
//        printf("\n");
//    }
//    void SelectionSort(int *arr,int n){
//        for(int i=0;i<n-1;i++){
//                int indexMin=i;
//            for(int j=i+1;j<n;j++){
//                if(arr[j]<arr[indexMin]){
//                    indexMin=j;
//                }
//            }
//            int temp=arr[i];
//            arr[i]=arr[indexMin];
//            arr[indexMin]=temp;
//        }
//    }
//
//    int main(){
//        int arr[]={4,2,17,1,8,5};
//        int n=6;
//        function(arr,n);
//        SelectionSort(arr,n);
//        function(arr,n);
//        return 0;
//    }

        /* Linear search */

//    int LinearFunction(int *arr,int size,int element){
//        for(int i=0;i<size;i++){
//            if(arr[i]==element ){
//
//                return i;
//
//
//            }
//
//        }
//
//        return -1;
//    }
//    int main(){
//        int arr[]={4,56,7,28,87,3,2};
//        int size=sizeof(arr)/sizeof(int);
//
//        int element =56;
//        int linearSearch=LinearFunction(arr,size,element);
//        printf(" The %d element was found at %d index",element,linearSearch);
//
//    }







              //// Count Multiple element

//    int main(){
//
//        int arr[]={10,20,30,30,30,40};
//        int n=5;
//        int search=30;
//        int count=0;
//        for(int i=0;i<n;i++){
//            if(arr[i]==search){
//
//                count++;
//            }
//        }
//        printf("%d",count);
//    }

        /* Multiple Value Multiple Index*/


//     int main(){
//
//            int arr[]={10,20,30,30,40};
//            int n=5;
//            int search=30;
//            int count=0;
//            for(int i=0;i<n;i++){
//                if(arr[i]==search){
//                    count++;
//                    printf("The %d element was found at %d\n",search ,i);
//
//                }
//            }
//             printf("Total element is %d",count);
//
//        }

             /* Multiple Value Multiple Index with void function*/


//    void LinearFunction(int *arr,int size,int element,int count){
//
//        for(int i=0;i<size;i++){
//            if(arr[i]==element){
//                   count++;
//                   printf("The %d element was found at %d\n",element,i);
//
//
//            }
//
//        }
//        printf("Total element is %d",count);
//
//    }
//
//
//    int main(){
//        int arr[]={10,20,40,40,40};
//        int size=sizeof(arr)/sizeof(int);
//        int element =40;
//        int count=0;
//        LinearFunction(arr,size,element,count);
//
//
//
//
//    }



        /* Binary Search */

//    int BinaryFunction(int arr[],int size ,int element){
//        int low=0;
//        int high=size-1;
//
//        while(low<=high){
//            int mid=(low+high)/2;
//            if(arr[mid]==element){
//                return mid;
//            }
//            if(arr[mid]<element){
//                low=mid+1;
//            }
//            else{
//                high=mid-1;
//            }
//        }
//        return -1;
//    }
//    int main(){
//        int arr[]={10,20,30,40,50,60,70};
//        int size=sizeof(arr)/sizeof(int);
//        int element=70;
//        int BinarySearch=BinaryFunction(arr,size,element);
//        printf("%d",BinarySearch);
//        return 0;
//    }


    // Linear Search

//    int LinearFunction(int *arr,int n,int element){
//        for(int i=0;i<n;i++){
//            if(arr[i]==element){
//
//                return i;
//
//            }
//
//        }
//        return -1;
//    }
//    int main(){
//        int arr[]={4,2,5,56,77,8};
//        int n=6;
//        int element=2;
//        int LinearSearch=LinearFunction(arr,n,element);
//        printf("%d",LinearSearch);
//        return 0;
//
//    }

        //Linear Search

//    int LinearFunction(int *arr,int size,int element){
//        for(int i=0;i<size;i++){
//            if(arr[i]==element){
//                return i;
//            }
//
//        }
//        return -1;
//    }
//    int main(){
//        int arr[]={10,30,50,20,60,40};
//        int size=sizeof(arr)/sizeof(int);
//        int element;
//        scanf("%d",&element);
//        int LinearSearch=LinearFunction(arr,size,element);
//        printf("%d",LinearSearch);
//    }


           //  Binary Search
//
//    int BinaryFunction(int *arr,int size,int element){
//        int low=0;
//        int high=size-1;
//        int mid;
//        while(low<=high){
//                mid=(low+high)/2;
//            if(arr[mid]==element){
//               return mid;
//            }
//            if(arr[mid]<element){
//                low=mid+1;
//            }
//            else{
//                high=mid-1;
//            }
//        }
//        return -1;
//    }
//    int main(){
//        int arr[]={10,20,30,40,50,60};
//        int size=sizeof(arr)/sizeof(int);
//        int element;
//        scanf("%d",&element);
//        int BinarySearch=BinaryFunction(arr,size,element);
//        printf("%d",BinarySearch);
//    }




            /* Ternary Search*/

//    int TernaryFunction(int *arr,int size,int element){
//        int l=0;
//        int r=size-1;
//        while(l<=r){
//            int mid1=l+((r-l)/3);
//            int mid2=r-(r-l)/3;
//            if(element==arr[mid1]) {
//                return mid1;
//            }
//            if(element==arr[mid2]){
//                return mid2;
//            }
//            if(element<arr[mid1]){
//                r=mid1-1;
//            }
//            if(element>arr[mid2]){
//                l=mid2+1;
//            }
//            else{
//                l=mid1+1;
//                r=mid2-1;
//            }
//        }
//        return -1;
//    }
//    int main(){
//        int arr[]={10,20,30,40,50,60};
//        int size=sizeof(arr)/sizeof(int);
//        int element=60;
//        int TernarySearch=TernaryFunction(arr,size,element);
//        printf("%d",TernarySearch);
//    }

        // Linear Search

//    int TernaryFunction(int *arr,int size,int element){
//        int low=0;
//        int high=size-1;
//        while(low<=high){
//           int mid1=low+((low+high)/3);
//           int mid2=high-((low+high)/3);
//           if(arr[mid1]==element){
//                return mid1;
//           }
//           if(arr[mid2]==element){
//                return mid2;
//           }
//           if(arr[mid1]>element){
//                low=mid1+1;
//           }
//           if(arr[mid2]<element){
//                high=mid2-1;
//           }
//           else{
//                low=mid1+1;
//                high=mid2-1;
//           }
//
//        }
//        return -1;
//
//    }
//    int main(){
//        int arr[]={10,20,40,80,90};
//        int size=sizeof(arr)/sizeof(int);
//        int element;
//        scanf("%d",&element);
//        int TernarySearch= TernaryFunction(arr,size,element);
//        printf("%d",TernarySearch);
//    }

        // Bubble Sort
//    void PrintFunction(int *arr,int size){
//        for(int i=0;i<size;i++){
//            printf("%d ",arr[i]);
//        }
//        printf("\n");
//    }
//    void BubbleFunction(int *arr,int size){
//        for(int i=0;i<size-1;i++){
//            for(int j=0;j<size-1-i;j++){
//                if(arr[j]>arr[j+1]){
//                    int temp=arr[j];
//                    arr[j]=arr[j+1];
//                    arr[j+1]=temp;
//                }
//            }
//        }
//    }
//    int main(){
//        int arr[]={4,2,17,1,8,5};
//        int size=sizeof(arr)/sizeof(int);
//        PrintFunction(arr,size);
//        BubbleFunction(arr,size);
//        PrintFunction(arr,size);
//    }

            // Insertion Sort

//    void PrintFunction(int *arr,int size){
//        for(int i=0;i<size;i++){
//            printf("%d ",arr[i]);
//        }
//        printf("\n");
//    }
//    void InsersionFunction(int *arr,int size){
//        for(int i=1;i<size;i++){
//            int key=arr[i];
//            int j=i-1;
//            while(j>=0 && arr[j]>key){
//                arr[j+1]=arr[j];
//                j--;
//            }
//            arr[j+1]=key;
//        }
//    }
//    int main(){
//        int arr[]={4,2,17,1,8,5};
//        int size=sizeof(arr)/sizeof(int);
//        PrintFunction(arr,size);
//        InsersionFunction(arr,size);
//        PrintFunction(arr,size);
//    }


        // Selection Sort

//     void PrintFunction(int *arr,int size){
//        for(int i=0;i<size;i++){
//            printf("%d ",arr[i]);
//        }
//        printf("\n");
//    }
//    void SelectionFunction(int *arr,int size){
//        for(int i=0;i<size;i++){
//            int IndexMin=i;
//            for(int j=i+1;j<size;j++){
//                if(arr[j]<arr[IndexMin]){
//                    IndexMin=j;
//                }
//            }
//            int temp=arr[i];
//            arr[i]=arr[IndexMin];
//            arr[IndexMin]=temp;
//        }
//    }
//    int main(){
//        int arr[]={4,2,17,1,8,5};
//        int size=sizeof(arr)/sizeof(int);
//        PrintFunction(arr,size);
//        SelectionFunction(arr,size);
//        PrintFunction(arr,size);
//    }

        // Linear Search
//    int FoundElement(int *arr,int size,int element){
//        for(int i=0;i<size;i++){
//            if(arr[i]==element){
//               return i;
//            }
//        }
//       return -1;
//
//    }
//    int main(){
//        int arr[]={4,2,17,1,8,5};
//        int size=sizeof(arr)/sizeof(int);
//        int element;
//        scanf("%d",&element);
//        int Indexprint=FoundElement(arr,size,element);
//        printf("%d",Indexprint);
//
//    }

        // Linear Search (For Multiple Indices)

//#define SIZE 10000
//
//struct Result
//{
//    int numberOfMatches;
//    int indices[SIZE];
//};
//
////void linearSearch(int arr[], int n, int key)
////{
////    for(int i=0; i<n; i++)
////    {
////        if(arr[i]==key)
////            printf("%d ", i);
////    }
////    printf("\n");
////}
//
//struct Result linearSearchFunctional(int arr[], int n,  int key)
//{
//   struct Result result;
//    result.numberOfMatches = 0;
//
//    for(int i=0; i<n; i++)
//    {
//        if(arr[i]==key)
//        {
//            result.indices[result.numberOfMatches] = i;
//            result.numberOfMatches++;
//        }
//    }
//    return result;
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[n];
//    for(int i=0; i<n; i++)
//        scanf("%d", &arr[i]);
//    int key;
//    scanf("%d", &key);
// struct  Result result = linearSearchFunctional(arr, n, key);
//    for(int i=0; i<result.numberOfMatches; i++)
//    {
//        printf("%d ", result.indices[i]);
//    }
//    return  0;
//}


    // Binary Search (Descending Order)

//    int BinaryFunction(int *arr,int n,int key){
//        int low=0;
//        int high=n-1;
//        while(low<=high){
//            int mid=((low+high)/2);
//            if(arr[mid]==key){
//                return mid;
//            }
//            if(arr[mid]>key){
//                low=mid+1;
//            }
//            else{
//                high=mid-1;
//            }
//
//
//        }
//        return -1;
//    }
//    int main(){
//        int n;
//        scanf("%d",&n);
//        int arr[n];
//        for(int i=0;i<n;i++){
//            scanf("%d",&arr[i]);
//        }
//        int key;
//        scanf("%d",&key);
//        int BinarySearch=BinaryFunction(arr,n,key);
//        if(BinarySearch==-1)
//        printf("Not Found\n");
//        else
//        printf("Found at index: %d\n",BinarySearch);
//
//
//    }

        // Searching & Sorting : Find first and last positions of an element in a sorted array
//    #define SIZE 10000
//
//    struct Result{
//        int NumberOfMatches;
//        int indeces[SIZE];
//    };
//
//    struct Result SearchIndex(int *arr,int n,int element){
//        struct Result result;
//        result.NumberOfMatches=0;
//        for(int i=0;i<n;i++){
//            if(arr[i]==element){
//                result.indeces[result.NumberOfMatches]=i;
//                result.NumberOfMatches++;
//                break;
//
//            }
//        }
//        for(int i=n-1;i>0;i--){
//            if(arr[i]==element){
//                result.indeces[result.NumberOfMatches]=i;
//                result.NumberOfMatches++;
//                break;
//
//            }
//        }
//        return result;
//
//    }
//
//    int main(){
//        int n;
//        scanf("%d",&n);
//        int arr[n];
//        for(int i=0;i<n;i++){
//            scanf("%d",&arr[i]);
//        }
//        int element;
//        scanf("%d",&element);
//        struct Result result=SearchIndex(arr,n,element);
//
//        for(int i=0;i<result.NumberOfMatches;i++){
//
//            printf("%d ",result.indeces[i]);
//
//
//        }
//
//
//
//    }












//    int BinaryFunction(int *arr,int size,int element){
//        int low=0;
//        int high=size-1;
//        int mid;
//        while(low<=high){
//                mid=(low+high)/2;
//            if(arr[mid]==element){
//               return mid;
//            }
//            if(arr[mid]<element){
//                low=mid+1;
//            }
//            else{
//                high=mid-1;
//            }
//        }
//        return -1;
//    }
//    int main(){
//        int arr[]={4,5,6,9,9,9,17,18};
//        int size=sizeof(arr)/sizeof(int);
//        int element;
//        scanf("%d",&element);
//        int BinarySearch=BinaryFunction(arr,size,element);
//        printf("%d",BinarySearch);
//    }






//        #define SIZE 10000
//
//        struct Result
//        {
//            int numberOfMatches;
//            int indices[SIZE];
//        };
//
//        //void linearSearch(int arr[], int n, int key)
//        //{
//        //    for(int i=0; i<n; i++)
//        //    {
//        //        if(arr[i]==key)
//        //            printf("%d ", i);
//        //    }
//        //    printf("\n");
//        //}
//
//        struct Result linearSearchFunctional(int arr[], int n)
//        {
//           struct Result result;
//            result.numberOfMatches = 0;
//
//            for(int i=0; i<n; i++)
//            {
//                if(arr[i]==i)
//                {
//                   result.indices[result.numberOfMatches] = i;
//                   result.numberOfMatches++;
//                    return result;
//                }
//            }
////            return result;
//        }
//
//        int main()
//        {
//            int n;
//            scanf("%d", &n);
//            int arr[n];
//            for(int i=0; i<n; i++)
//                scanf("%d", &arr[i]);
////            int key;
////            scanf("%d", &key);
//         struct  Result result = linearSearchFunctional(arr, n);
////            for(int i=0; i<result.numberOfMatches; i++)
////            {
////                printf("%d ", result.indices[i]);
////            }
//                for(int i=0;i<result.numberOfMatches;i++){
//                    printf("%d",);
//                }
//            return  0;
//        }


//        void SearchEqualElement(int *arr,int size){
//            for(int i=1;i<=size;i++){
//                if(arr[i]==i){
//
//                  printf("%d",arr[i]);
//                }
//            }
//
//        }
//        int main(){
//            int arr[]={4,5,6,10,4};
//            int size=sizeof(arr)/sizeof(int);
//            int NumberOfMatches=0;
//           SearchEqualElement(arr,size);
//
//        }


            //Searching & Sorting :	Find a Fixed Point (Value equal to index) in a given array

                #define SIZE 10000

        struct Result
        {
            int numberOfMatches;
            int indices[SIZE];
        };



        struct Result linearSearchFunctional(int arr[], int n)
        {
           struct Result result;
            result.numberOfMatches = 1;

            for(int i=1; i<=n; i++)
            {
                if(arr[i]==i)
                {
                    result.indices[result.numberOfMatches] = i;
                    result.numberOfMatches++;

                }
            }
             return result;
        }

        int main()
        {
            int n;
            scanf("%d", &n);
            int arr[n];
            for(int i=1; i<=n; i++)
                scanf("%d", &arr[i]);

         struct  Result result = linearSearchFunctional(arr, n);
            for(int i=1; i<result.numberOfMatches; i++)
            {
                printf("%d ", result.indices[i]);
            }
            return  0;
        }
