/*
Recursive solution to finding the index of the last occurrence of element in an array.
*/
int lastIndex2(int input[], int size, int x, int index) {
    if (size == 0) {
        return (input[0] == x) ? index : -1;
    }

    int index2 = lastIndex2(input + 1, size - 1, x, index + 1);

    if (index2 == -1) {
        return (input[0] == x) ? index : -1;
    } else {
        return index2;
    }
}

int lastIndex(int input[], int size, int x) {
    if (size == 0) {
        return -1;
    }

    int index = lastIndex(input + 1, size - 1, x);

    if (index == -1) {
        return (input[0] == x) ? 0 : -1;
    } else {
        int again = lastIndex2(input + index + 1, size - index - 1, x, index + 1);
        return (again == -1) ? index : again;
    }
}
