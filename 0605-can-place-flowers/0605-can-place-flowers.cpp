class Solution {
  public: bool canPlaceFlowers(vector < int > & flowerbed, int n) {

    //make a count variable to store can plant space
    int count = 0;
    int size = flowerbed.size();

    for (int i = 0; i < size; i++) {

      if (flowerbed[i] == 0) {

        //now check left and right
        bool isLeft = (i == 0) || flowerbed[i - 1] == 0;
        bool isRight = (i == size - 1) || flowerbed[i + 1] == 0;

         //check left right both should true
        if (isLeft && isRight) {
          flowerbed[i] = 1;
          count++;
            //this is for if we reach to n then no need to proceed further extra 
          if (count >= n) {
            return true;
          }
        }

      }

    }
    return count >= n;
  }
};