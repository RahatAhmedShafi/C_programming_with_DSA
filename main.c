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









