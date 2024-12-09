#include <stdio.h>
#include "sorting.h"
#include "visualizer.h"

int main() {
    int array[] = {7, 3, 9, 1, 6, 8};
    int size = sizeof(array) / sizeof(array[0]);

    init_visualizer(size);
    bubble_sort(array, size);
    close_visualizer();

    return 0;
}
