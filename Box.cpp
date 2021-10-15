#include "Box.h"

// Implement setters and getters
      int Box::getHeight()
     {
      return height;
     }
      int Box::getLength()
     {
      return length;
     }
      int Box::getWidth()
     {
      return width;
     }
     void Box::setBoxDetails(int pheight, int plength, int pwidth)
      {
        height = pheight;
        length = plength;
        width =pwidth;
      }
       
// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return height * length* width;
}
