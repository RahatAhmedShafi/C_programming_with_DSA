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
//
//    #define SIZE 10000
//
//        struct Result
//        {
//            int numberOfMatches;
//            int indices[SIZE];
//        };
//
//
//
//        struct Result linearSearchFunctional(int arr[], int n)
//        {
//           struct Result result;
//            result.numberOfMatches = 1;
//
//            for(int i=1; i<=n; i++)
//            {
//                if(arr[i]==i)
//                {
//                    result.indices[result.numberOfMatches] = i;
//                    result.numberOfMatches++;
//
//                }
//            }
//             return result;
//        }
//
//        int main()
//        {
//            int n;
//            scanf("%d", &n);
//            int arr[n];
//            for(int i=1; i<=n; i++)
//                scanf("%d", &arr[i]);
//
//         struct  Result result = linearSearchFunctional(arr, n);
//            for(int i=1; i<result.numberOfMatches; i++)
//            {
//                printf("%d ", result.indices[i]);
//            }
//            return  0;
//        }



            // Two Sum
        //---------------
//#include<stdbool.h>
//    bool twoSumPossible(int arr[], int n, int key)
//    {
//        for(int i=0; i<n; i++)
//        {
//            /// int need = key - arr[i];
//
//            for(int j=i+1; j<n; j++)
//            {
//                if(arr[i]+arr[j] == key)
//                    return true;
//            }
//        }
//        return false;
//    }

//    int twoSumCounter(int arr[], int n, int key)
//    {
//        int counter = 0;
//
//        for(int i=0; i<n; i++)
//        {
//            for(int j=i+1; j<n; j++)
//            {
//                if(arr[i]+arr[j] == key)
//                {
//                    /// printf("%d %d\n", i , j);
//                    counter++;
//                }
//            }
//        }
//        return counter;
//    }
//    int main()
//    {
//        int n;
//        scanf("%d", &n);
//        int arr[n];
//        for(int i=0; i<n; i++)
//            scanf("%d", &arr[i]);
//        int key;
//        scanf("%d", &key);
//        int result =twoSumPossible(arr,n,key);
//        //int result = twoSumCounter(arr, n, key);
//        if(result==true){
//            printf("Yes");
//        }
//        else{
//            printf("No");
//        }
//       // printf("%d\n", result);
//        return 0;
//    }
//
//#include<stdbool.h>
//    bool TwoSumFunction(int *arr,int size,int key){
//
//
//        for(int i=0;i<size;i++){
//            for(int j=i+1;j<size;j++){
//                if(arr[i]+arr[j]==key){
//                    return true;
//                }
//            }
//        }
//        return false;
//    }
//
//
//    int main(){
//        int size;
//        scanf("%d",&size);
//        int arr[size];
//        for(int i=0;i<size;i++){
//            scanf("%d",&arr[i]);
//        }
//        int key;
//        scanf("%d",&key);
//        int twosum=TwoSumFunction(arr,size,key);
//        if(twosum==true){
//            printf("Yes");
//        }
//        else{
//            printf("No");
//        }
//
//    }


//int bubbleSort(int arr[], int size){
//    for (int i = 0; i < size-1; i++){
//
//    // Since, after each iteration righmost i elements are sorted
//    for (int j = 0; j < size-i-1; j++) if (arr[j] > arr[j+1])
//        {
//            int temp = arr[j]; // swap the element
//            arr[j] = arr[j+1];
//            arr[j+1] = temp;
//        }
//    }
//}

            // find repeating element
//   int findRepeating( int *arr,int n){
//        for(int i=0;i<n;i++){
//                int flag=0;
//            while(i<n-1 && arr[i]==arr[i+1]){
//                flag=1;
//                i++;
//            }
//            if(flag){
//                printf("%d ",arr[i-1]);
//            }
//        }
//   }
//
//// Main function to run the program
//int main()
//{
//    int arr[] = {4,4,5,6,6,7};
//    int n = sizeof(arr)/sizeof(arr[0]);
//
//   // bubbleSort(arr, n);
//
//    findRepeating(arr, n);
//
//   return 0;
//}
//// Time Complexity : O(N)
//// Space Complexity : O(1)


        //Linear search (multiple index)

//    struct Result{
//        int numberofmatches;
//        int indeces[1000];
//
//    };
//    struct Result multipleindecesfunction(int *arr,int n,int key){
//        struct Result result;
//        for(int i=0;i<n;i++){
//
//            if(arr[i]==key){
//                result.indeces[result.numberofmatches]=i;
//                result.numberofmatches++;
//            }
//        }
//        return result;
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
//        struct Result result=multipleindecesfunction(arr,n,key);
//        for(int i=0;i<result.numberofmatches;i++){
//            printf("%d ",result.indeces[i]);
//        }
//
//    }



//    #include<climits>
//    #include<math.h>
//
//    struct Result
//    {
//        int distance;
//        int firstIndex;
//        int secondIndex;
//    };
//
//struct    Result minimumDistance(int arr[], int n)
//    {
//        int minDistance = INT_MAX;
//        int firstIndex;
//        int secondIndex;
//
//        for(int i=0; i<n; i++)
//        {
//            for(int j=i+1; j<n; j++)
//            {
//                int distance = abs(arr[i]-arr[j]);
//                if(distance<minDistance)
//                {
//                    minDistance = distance;
//                    firstIndex = i;
//                    secondIndex = j;
//                }
//            }
//        }
//
//        return {minDistance, firstIndex, secondIndex};
//    }
//
//    int main()
//    {
//        int n;
//        scanf("%d", &n);
//        int arr[n];
//        for(int i=0; i<n; i++)
//            scanf("%d", &arr[i]);
//
//        Result result = minimumDistance(arr, n);
//        printf("Distance: %d\nIndices: %d %d\n", result.distance, result.firstIndex, result.secondIndex);
//        return 0;
//    }






             /*  Linked list */
             /* Create and Traversal */

//    struct node{
//        int data;
//        struct node *next;
//    };
//    int main(){
//        struct node *a=NULL;
//        struct node *b=NULL;
//        struct node *c=NULL;
//
//        a=(struct node *)malloc(sizeof(struct node));
//        b=(struct node *)malloc(sizeof(struct node));
//        c=(struct node *)malloc(sizeof(struct node));
//
//        a->data=10;
//        b->data=20;
//        c->data=30;
//
//        a->next=b;
//        b->next=c;
//        c->next=NULL;
//
//        while(a!=NULL){
//            printf("%d->",a->data);
//            a=a->next;
//        }
//    }



//
//    struct ListNode
//    {
//        int value;
//       struct ListNode* next;
//    };
//
//  struct  ListNode* head = NULL;
//  struct  ListNode* tail = NULL;
//
//    void printList()
//    {
//       struct ListNode* temp = head;
//
//        while(temp!=NULL)
//        {
//            printf("%d ", temp->value);
//            temp = temp->next;
//        }
//        printf("\n");
//    }
//
//   struct ListNode* createListNode(int data)
//    {
//       struct ListNode* temp = (struct ListNode *)malloc(sizeof(struct ListNode));
//        temp->value = data;
//        temp->next = NULL;
//        return temp;
//    }
//
//    void insertLast(int data)
//    {
//        if(head==NULL)
//        {
//            head = createListNode(data);
//            tail = head;
//        }
//        else
//        {
//            struct ListNode* temp = createListNode(data);
//            tail->next = temp;
//            tail = tail->next;
//        }
//    }
//
//    void insertFirst(int data)
//    {
//
//    }
//
//    int main()
//    {
//
//
//        insertLast(2);
//        insertLast(5);
//        insertLast(9);
//        insertLast(7);
//
//        printList();
//    }



//    struct node{
//        int data;
//        struct node *next;
//    };
//    int main(){
//        struct node *a=NULL;
//        struct node *b=NULL;
//        struct node *c=NULL;
//
//        a=(struct node *)malloc(sizeof(struct node));
//        b=(struct node *)malloc(sizeof(struct node));
//        c=(struct node *)malloc(sizeof(struct node));
//
//        a->data=10;
//        b->data=20;
//        c->data=30;
//
//        a->next=b;
//        b->next=c;
//        c->next=NULL;
//
//        while(a!=NULL){
//            printf("%d->",a->data);
//            a=a->next;
//        }
//    }



//        struct node{
//            int data;
//            struct node *next;
//        }* head;
//        struct node *temp=NULL;
//        void createLinkList(int data);
//        void display(int data);
//        int main(){
//            int n,data;
//            scanf("%d",&n);
//            for(int i=0;i<n;i++){
//                scanf("%d",&data);
//            }
//
//            createLinkList(data);
//            display(data);
//        }
//       void createLinkList(int value){
//           head=(struct node*)malloc(sizeof(struct node));
//           head->data=value;
//           head->next=NULL;
//
//       }
//       void display(int value){
//            while(head!=NULL){
//                printf("%d\n",head->data);
//                head=head->next;
//            }
//       }





            /* INSERTION IN A LINKLIST*/

//struct Node
//{
//    int data;
//    struct Node *next;
//};
//
//void linkedListTraversal(struct Node *ptr)
//{
//    while (ptr != NULL)
//    {
//        printf("Element: %d\n", ptr->data);
//        ptr = ptr->next;
//    }
//    printf("\n");
//}
//
//    struct Node *insertAtFirst(struct Node *head,int data){
//        struct Node *ptr=(struct Node*)malloc(sizeof(struct Node));
//        ptr->data=data;
//        ptr->next=head;
//
//        return ptr;
//
//    }
//
//    struct Node *InserInBetween(struct Node *head,int data,int index){
//
//        struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
//        struct Node *p=head;
//        int i=0;
//        while(i!=index-1){
//           p=p->next;
//           i++;
//        }
//
//        ptr->data=data;
//        ptr->next=p->next;
//        p->next=ptr;
//        return head;
//
//    }
//
//    struct Node *InsertAtTheEnd(struct Node *head,int data){
//
//        struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
//        struct Node *p=head;
//
//        while(p->next!=NULL){
//            p=p->next;
//        }
//
//        ptr->data=data;
//        p->next=ptr;
//        ptr->next=NULL;
//        return head;
//    }
//
//
//
//int main()
//{
//    struct Node *head;
//    struct Node *second;
//    struct Node *third;
//    struct Node *fourth;
//
//    // Allocate memory for nodes in the linked list in Heap
//    head = (struct Node *)malloc(sizeof(struct Node));
//    second = (struct Node *)malloc(sizeof(struct Node));
//    third = (struct Node *)malloc(sizeof(struct Node));
//    fourth = (struct Node *)malloc(sizeof(struct Node));
//
//    // Link first and second nodes
//    head->data = 7;
//    head->next = second;
//
//    // Link second and third nodes
//    second->data = 11;
//    second->next = third;
//
//    // Link third and fourth nodes
//    third->data = 41;
//    third->next = fourth;
//
//    // Terminate the list at the third node
//    fourth->data = 66;
//    fourth->next = NULL;
//
//    linkedListTraversal(head);
//   // head=insertAtFirst(head,56);
//   //   head=InserInBetween(head,77,2);
//   head=InsertAtTheEnd(head,99);
//    linkedListTraversal(head);
//    return 0;
//}




#include<stdio.h>
#include<stdlib.h>
struct ListNode
{
    int value;
    struct ListNode* next;
};
typedef struct ListNode ListNode;

ListNode* head = NULL;
ListNode* tail = NULL;

ListNode* createListNode(int data)
{
    ListNode* temp;
    temp = (ListNode *)malloc(sizeof(ListNode));
    temp->value = data;
    temp->next = NULL;
    return temp;
}

ListNode* linearSearch(int key)
{
    ListNode* i = head;
    while(i!=NULL)
    {
        if(i->value==key)
        {
            return i;
        }
        i=i->next;
    }
    return NULL;
}

void insertFirstElement(int data)
{
    head = createListNode(data);
    tail = head;
}

void insertLast(int data)
{
    if(head==NULL)
    {
        insertFirstElement(data);
    }
    else
    {
        ListNode* temp = createListNode(data);
        tail->next = temp;
        tail = tail->next; /// tail = temp;
    }
}

void insertFirst(int data)
{
    if(head==NULL)
    {
        insertFirstElement(data);
    }
    else
    {
        ListNode* temp = createListNode(data);
        temp->next = head;
        head = temp;
    }
}

void insertAfter(int data, int key)
{
    ListNode* location = linearSearch(key);
    if(location==NULL)
        return;

    ListNode* temp = createListNode(data);
    temp->next = location->next;
    location->next = temp;

    if(location==tail)
        tail = tail->next;
}

void printList()
{
    /**
    /// for printing the elements of an array
    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }**/

    /** for(ListNode* i=head; i!=NULL; i=i->next)
    {
        printf("%d ", i->value);
    }**/
    printf("The elements of the Linked List: ");
    ListNode* i = head;
    while(i!=NULL)
    {
        printf("%d ", i->value);
        i=i->next;
    }
    printf("\n");
}

void deleteFirst()
{
    if(head==NULL)
        return;
    else if(head==tail)
    {
        free(head);
        head = tail = NULL;
    }
    else
    {
        ListNode* temp = head;
        head = head->next;
        free(temp);
    }
}

void deleteLast()
{
    if(tail==NULL)
        return;
    else if(head==tail)
    {
        free(head);
        head = tail = NULL;
    }
    else
    {
        ListNode* i = head;
        while(i->next!=tail)
        {
            i = i->next;
        }
        i->next = NULL;
        free(tail);
        tail = i;
    }
}

void deleteKey(int key)
{
    if(head==NULL)
        return;
    else if(head==tail)
    {
        if(head->value==key)
            deleteFirst();
    }
    else
    {
        if(head->value==key)
            deleteFirst();
        else
        {
            ListNode* prevLocation = NULL;
            ListNode* i = head;
            while(i!=NULL && i->value!=key)
            {
                prevLocation = i;
                i = i->next;
            }
            if(i==NULL)
                return;
            else {
                prevLocation->next = i->next;
                if(i==tail)
                    tail = prevLocation;
                free(i);
            }
        }
    }
}

int main()
{
    insertLast(10);
    insertLast(15);
    insertLast(20);
    insertLast(30);
    insertLast(45);
    insertLast(75);
    insertLast(90);

    printList();

    insertFirst(100);
    insertFirst(110);

    printList();

    insertAfter(25, 20);
    insertAfter(35, 25);
    printList();

    deleteFirst();
    printList();

    deleteLast();
    deleteLast();
    printList();

    deleteKey(100);
    printList();

    deleteKey(45);
    printList();

    deleteKey(35);
    printList();


    /**
    ListNode* searchResult = linearSearch(27);
    if(searchResult==NULL)
        printf("Not Found\n");
    else
        printf("Found at %d\n", searchResult);
    **/

    /***
    printf("Head address: %d\n", head);
    printf("Head next address: %d\n", head->next);


    int arr[10];
    printf("\n\nFirst element address (array): %d\n", &arr[0]);
    printf("Second element address (array): %d", &arr[1]);
    ***/



    return 0;
}









