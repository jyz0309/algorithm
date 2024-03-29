/*
题目要求：把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。 输入一个非减排序的数组的一个旋转，输出旋转数组的最小元素。
例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。 NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。
解题思路：直接遍历找到最下值-。-，后续应该会想更好的办法。
*/
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int min=rotateArray[0];
        for(int i=1;i<rotateArray.size();i++){
            if(min>rotateArray[i]) min = rotateArray[i];
        }
        return min;
    }
};
