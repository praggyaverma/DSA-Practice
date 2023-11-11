void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) 
        L[i] = arr[l + i];
    
    for (int j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, ptr = l; 

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[ptr] = L[i];
            i++;
        } else {
            arr[ptr] = R[j];
            j++;
        }
        ptr++;
    }

    while (i < n1) {
        arr[ptr] = L[i];
        ptr++;
        i++;
    }

    while (j < n2) {
        arr[ptr] = R[j];
        ptr++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}
