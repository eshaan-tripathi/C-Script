#include <iostream>
#include <filesystem>
#include <string>
#include <algorithm>

using namespace std;
namespace fs = std::filesystem;

void organizeFiles(const string& directory) {
    try {
        // Create the target folders for different types of files
        fs::create_directory(directory + "/pdf");
        fs::create_directory(directory + "/images");
        fs::create_directory(directory + "/videos");

        // Iterate through the files in the specified directory
        for (const auto& entry : fs::directory_iterator(directory)) {
            const auto& path = entry.path();

            // Skip directories
            if (fs::is_directory(path)) {
                continue;
            }

            // Get file extension and convert to lowercase
            string ext = path.extension().string();
            transform(ext.begin(), ext.end(), ext.begin(), ::tolower);

            // Move files to appropriate folders based on extension
            if (ext == ".pdf") {
                fs::rename(path, directory + "/pdf/" + path.filename().string());
            }
            else if (ext == ".png" || ext == ".jpg" || ext == ".jpeg" || ext == ".gif" || ext == ".bmp" || ext==".webp") {
                fs::rename(path, directory + "/images/" + path.filename().string());
            }
            else if (ext == ".mp4" || ext == ".mkv" || ext == ".avi" || ext == ".mov") {
                fs::rename(path, directory + "/videos/" + path.filename().string());
            }
        }

        cout << "Files organized successfully!" << endl;

    } catch (const fs::filesystem_error& e) {
        cerr << "Error: " << e.what() << endl;
    }
}

int main() {
    // Ask user for the directory name
    string directory;
    cout << "Enter the directory path: ";
    cin >> directory;

    // Check if the directory exists
    if (!fs::exists(directory) || !fs::is_directory(directory)) {
        cerr << "Invalid directory!" << endl;
        return 1;
    }

    // Organize files
    organizeFiles(directory);

    return 0;
}
