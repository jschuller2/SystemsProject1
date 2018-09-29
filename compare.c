int compare(const void *l, const void *r){
  switch(stringFlag){
  case 'true': return int strcmp(l,r);
  case 'false': {if(l < r) return -1;
	else if (l > r) return 1;
	else return 0;}
  default: return 0;
  }
}

void merge(record arr[], int l, int m, int r){
  int i, j, k;
  in n1 = m - l +1;
  int n2 = r- m;
  
  record L[n1], R[n2];
  for(i = 0; i < n1; i++)
    L[i] = arr[l + i];
  for(j = 0; j< n2; j++)
    R[j] = arr[m + l + j];

  i = 0;
  j = 0;
  k = l;
  while(i < n1 && j < n2)
  {
    if( compare(/*pass header column here*/) <= 0)
      {
	arr[k]= L[i];
	i++;
      }
    else
      {
	arr[k] = R[j];
	j++;
      }
    k++;
  }
  while (i < n1)
    {
      arr[k] = L[i];
      i++;
      k++;
    }
  while (j < n2)
    {
      arr[k] = L[i];
      j++;
      k++;
    }
}
void mergeSort(record arr[], int l, int r) //initial call l=0 r=currRecordLength-1
{
  if(l < r)
    {
      int m = l+(r-1)/2;
      mergeSort(arr, l, m);
      mergeSort(arr, m+1, r);

      merge(arr, l, m, r);
    }
}
