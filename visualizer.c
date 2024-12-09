#include <ncurses.h>
#include "visualizer.h"

void init_visualizer(int size) {
    initscr();
    noecho();
    curs_set(FALSE);
}

void update_visualizer(int arr[], int size) {
    clear();
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < arr[i]; j++) {
            mvprintw(i, j, "#");
        }
    }
    refresh();
    napms(200); // Delay for visualization
}

void close_visualizer() {
    endwin();
}
