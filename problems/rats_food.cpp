/*return min no of homes required to feed the rats, return -1 if arr is null and 0 if not enough food*/
#include<iostream>
using namespace std;

int food(int r, int unit, int arr[], int n){
  if (arr == NULL || n==0){
    return -1;
  }

  int totalfood= r*unit;

  int foodtillNow=0;

  for (int i = 0; i < n; i++)
  {
    foodtillNow += arr[i];
  }

  if (totalfood>foodtillNow)
  {
    return 0;
  }

  int currentfood = 0;

  for (int i = 0; i < n; i++)
  {
   currentfood += arr[i];
   if (currentfood>totalfood)
   {
    return i+1;
   }
    
  }
  return 0;
  
}

int main(){
    int r = 1;
    int units = 4;
    int arr[]={5,4,8,7,6,5,9,8,4,2,1,3,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);

    int result = food(r,units,arr,n);

    if (result == -1)
    {
        cout<<"the array is null"<<endl;
    }else if (result == 0) {
        cout << "Not enough food to feed all rats" <<endl;
    } else {
        cout << "Minimum homes needed: " << result <<endl;
    }
    
}