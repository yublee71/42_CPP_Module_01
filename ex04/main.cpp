#include <fstream>
#include <iostream>
#include <string>

std::string ftReplace(std::string &buffer, const std::string &search,
                      const std::string &replace) {
  size_t found_pos = 0;

  while ((found_pos = buffer.find(search, found_pos)) != std::string::npos) {
    buffer = buffer.substr(0, found_pos) + replace +
             buffer.substr(found_pos + search.length());
    found_pos += replace.length();
  }
  return buffer;
}

int main(int argc, char **argv) {
  if (argc != 4) {
    std::cout << "Wrong number of arguments." << std::endl
              << "Usage: " << argv[0] << " filename string1 string2"
              << std::endl;
    return 1;
  }

  const std::string infile_name = argv[1];
  std::ifstream infile(infile_name.c_str());
  if (!infile) {
    std::cout << "The file cannot be opened." << std::endl;
    return 1;
  }

  const std::string outfile_name = infile_name + ".replace";
  std::ofstream outfile(outfile_name.c_str());
  if (!outfile) {
    std::cout << "The output file cannot be opened." << std::endl;
    return 1;
  }

  const std::string s1 = argv[2];
  const std::string s2 = argv[3];
  std::string buffer;

  while (std::getline(infile, buffer)) {
    outfile << ftReplace(buffer, s1, s2);
    if (!infile.eof())
      outfile << std::endl;
  }
  infile.close();
  outfile.close();

  return 0;
}
