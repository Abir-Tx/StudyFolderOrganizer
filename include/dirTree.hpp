#if !defined(DIRTREE_H)
#define DIRTREE_H
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>

void dirTree() {
  using namespace std;
  string driveLetterHolder;
  vector<string> optionHolder;
  int choice;

  ifstream driveLetterReader("C:\\SFO\\Data\\DriveLetterKeeper.dat");

  while (getline(driveLetterReader, driveLetterHolder)) {
    driveLetterHolder = driveLetterHolder;
  }

  // Designing the title
  system("cls");
  system("color 03");
  cout << setw(75) << setfill(' ') << "Directory Tree Viewer" << endl << endl;

  //#23 issue
  std::cout << "\t\t\t\t\tCurrently drive in use: " << driveLetterHolder
            << std::endl;
  std::cout << std::endl;

  // Showing the available options
  optionHolder.push_back("Print it here");
  optionHolder.push_back("View in Notepad");
  optionHolder.push_back("Go Back");

  for (int i = 0; i < optionHolder.size(); i++) {
    cout << (i + 1) << ". " << optionHolder[i] << endl;
  }
  std::cout << std::endl;
  cout << "Your Choice: ";
  cin >> choice;
  if (choice == 1) {
    if (driveLetterHolder.empty() == true) {
      system("cls");
      cout << "You have not created ant folders yet. Please go to the create "
              "mode to create folders first!"
           << endl;
    } else {
      // Starting the dir tree
      system("cls");
      system("color 05");

      cout << "Printing the folders structure view inside the selected drive: "
           << endl;
      std::cout << std::endl;
      string treeDir =
          "tree /f " + driveLetterHolder + ":\\\"University Study\"";
      system(treeDir.c_str());
    }
  } else if (choice == 2) {
    if (driveLetterHolder.empty() == true) {
      system("cls");
      cout << "You have not created ant folders yet. Please go to the create "
              "mode to create folders first!"
           << endl;
    } else {
      // Starting the dir tree to save in txt file
      cout << "Openning the notepad to show the Directory tree: " << endl;
      std::cout << std::endl;
      string treeDir =
          "tree /f /A " + driveLetterHolder +
          ":\\\"University Study\" > C:\\\"Program Files (x86)\"\\Abir-Tx\\SFO\\data\\Dir_Structure.txt";
      system(treeDir.c_str());

      system("start C:\\\"Program Files (x86)\"\\Abir-Tx\\SFO\\data\\Dir_Structure.txt");
    }
  } else if (choice == 3) {
    system("cls");
  }
}
#endif // DIRTREE_H
