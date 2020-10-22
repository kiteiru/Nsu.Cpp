#include "WordCount.h"
#include <iostream>

int main(int argc, char *argv[]) {
    if (argc <= 2) {
        std::cout << "Wrong input! Try again" << std::endl;
        return 0;
    } else {
        WordCount obj;
        for (int i = 1; i < argc - 1; i++) {
            obj.AddFile(argv[i]);
        }
        obj.WriteCSV(argv[argc - 1]);
    }
    return 0;
}
