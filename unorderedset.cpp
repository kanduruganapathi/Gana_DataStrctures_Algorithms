#include <iostream>
#include <unordered_set>

int main() {
  std::unordered_set<std::string> visitedURLs;

  // Add visited URLs
  visitedURLs.insert("www.google.com");
  visitedURLs.insert("www.youtube.com");
  visitedURLs.insert("www.github.com");
  
  

  // Check if a URL was visited
  if (visitedURLs.count("www.github.com")) {
    std::cout << "You have already visited www.github.com." << std::endl;
  }

  // Print all visited URLs (order might not be consistent)
  for (const std::string& url : visitedURLs) {
    std::cout << url << std::endl;
  }

  return 0;
}
