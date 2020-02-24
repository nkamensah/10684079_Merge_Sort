 #include <iostream>

using namespace std;

//the merge function
void Merge(int array[],int lower, int mid , int r)
{
int l=lower;
int m=mid+1;
int k=0;
    int temp[5];

    while( l<=mid &&  m<= r)
    {
        if(array[l]<=array[m])
        {
            temp[k]=array[l];
            l++;
            k++;
        }
        else
        {
            temp[k]=array[m];
            m++;
            k++;
        }
    }
    while(l<=mid)
    {
        temp[k]=array[l];
            l++;
            k++;
    }
    while(m<=r)
    {
        temp[k]=array[m];
            m++;
            k++;
    }
     for(int s=lower; s<=r; s++)
    {
        array[s] = temp[s];
    }

}

//the merge sort function
void mergeSort(int array[], int left , int r)
{
    if(left<r)
    {
        int mid = (left+r)/2;
        mergeSort(array,left,mid);
        mergeSort(array,mid+1,r);
        Merge(array,left,mid,r);
        }
}

int main()
{

    cout << "Enter the 8 elements in the array : " << endl;  //int my_array[8] = {4,5,2,6,10,8,9};
    int my_array[8];
    for(int i=0; i<8; i++)
    {
        cin >> my_array[i];
    }
    cout << "Initial array : " <<endl;
    for(int i=0; i<8; i++)
    {
        cout << my_array[i] << "  ";
    }

    mergeSort(my_array,0,4);     //Merge sort function

 cout <<endl<< "The result is : " <<endl;
    for(int i=0; i<8; i++)
    {
        cout << my_array[i] << "  ";
    }

    return 0;
}
