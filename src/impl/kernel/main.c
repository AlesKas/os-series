#include "print.h"
#include "input.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to our 64-bit kernel!");
    print_char('\n');
    //kb_init();
    while (1) {
        keyboard_handler();
    }
}
