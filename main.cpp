#include "extractor.h"
#include <limits>
using namespace std;

int main() {
  extractor extrctr;
  
  extrctr.createDestinationFolder(extrctr.getDesktopPathString());
  extrctr.copyFilesToDestination(extrctr.getPreparedPathString(), extrctr.getDesktopPathString());
  
  return 0;
}