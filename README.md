# File Management Automation

This project is a C++ utility designed to automate the process of organizing files based on their types within a specified directory. The tool categorizes files into three main folders: `pdf`, `images`, and `videos`, based on their extensions. The goal of the program is to streamline file organization, making it easier to manage large sets of files in a structured manner.

## Features

- Automatically moves `.pdf` files into a `pdf` folder.
- Moves image files (e.g., `.jpg`, `.png`, `.jpeg`, `.gif`) into an `images` folder.
- Moves video files (e.g., `.mp4`, `.avi`, `.mkv`) into a `videos` folder.
- Supports user input for the target directory.
- Simple and efficient file handling.

## Requirements

- C++17 or later
- A C++ compiler that supports the `<filesystem>` library (GCC 8 or later)
  
## Setup

1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/file-management-automation.git
Navigate to the project directory:

bash
Copy
Edit
cd file-management-automation
Compile the program: If you're using a supported C++ compiler, run:

bash
Copy
Edit
g++ -std=c++17 -o file_organizer file_organizer.cpp
Run the program:

bash
Copy
Edit
./file_organizer
How to Use
When prompted, enter the path to the directory you want to organize. Example:

text
Copy
Edit
Enter the directory path (e.g., D:/Documents):
The program will automatically:

Create pdf, images, and videos folders if they don't exist.
Move the respective files into their correct folders based on their extensions.
The file organization process will run until all eligible files are sorted.

Supported File Types
PDF Files: .pdf
Image Files: .jpg, .jpeg, .png, .gif
Video Files: .mp4, .avi, .mkv
Contributions
Feel free to fork this repository, make changes, and create a pull request if you would like to contribute to this project. Issues, bugs, and enhancements are always welcome!

License
This project is licensed under the MIT License - see the LICENSE file for details.

Acknowledgments
Inspired by the need for file organization in daily work environments.
Special thanks to the C++ community for the powerful std::filesystem library.
Happy file organizing! 🚀

markdown
Copy
Edit

### Key Sections:
1. **Introduction**: Briefly describes the project and its purpose.
2. **Features**: Highlights the key features of the program.
3. **Requirements**: Lists any dependencies or tools required to run the program.
4. **Setup**: Explains how to clone, compile, and run the program.
5. **How to Use**: Provides step-by-step instructions for using the tool.
6. **Supported File Types**: Lists the file types that the program handles.
7. **Contributions**: Encourages others to contribute or fork the project.
8. **License and Acknowledgments**: Standard sections for open-sourc
