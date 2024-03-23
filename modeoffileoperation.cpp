#include <fstream>

int main() {
    // Opening a file in different modes
    std::fstream file;

    // Input mode
    file.open("input.txt", std::ios::in);
    if (file.is_open()) {
        // Read data from the file
        // ...
        file.close();
    }

    // Output mode
    file.open("output.txt", std::ios::out);
    if (file.is_open()) {
        // Write data to the file
        // ...
        file.close();
    }

    // Append mode
    file.open("output.txt", std::ios::out | std::ios::app);
    if (file.is_open()) {
        // Append data to the end of the file
        // ...
        file.close();
    }

    // Binary mode
    file.open("data.bin", std::ios::binary | std::ios::out);
    if (file.is_open()) {
        // Write binary data to the file
        // ...
        file.close();
    }

    return 0;
}
