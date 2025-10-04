#include <vector>
#include<iostream>
class Solution{
public:
    std::vector<std::vector<int>> generateMatrix(int n){
        int startx=0,starty=0;//每圈起始位
        int loop=n/2;//圈数
        int mid=n/2;//中间位
        int count=1;//计数器
        int offset=1;//每边数量控制
        int i,j;//循环量
        std::vector<std::vector<int>> res(n, std::vector<int>(n, 0));

        //开始转圈
        while(loop--){
            i=startx;
            j=starty;

            //四条边
            for(j=starty;j<n-offset;j++){
                res[i][j]=count++;
            }

            for(i=startx;i<n-offset;i++){
                res[i][j]=count++;
            }

            for(;j>starty;j--){//j的位置已经合适
                res[i][j]=count++;
            }

            for(;i>startx;i--){
                res[i][j]=count++;
            }

            startx++;
            starty++;

            offset++;
        }

        if(n%2){
            res[mid][mid]=count;
        }
        return res;

    }

};

/**
 * 打印二维向量（矩阵）的函数
 * @param matrix 一个常量引用的二维整数向量，表示要打印的矩阵
 */
void printMatrix(const std::vector<std::vector<int>>& matrix) {
    // 遍历矩阵的每一行
    for (const auto& row : matrix) {
        // 遍历当前行的每一个元素
        for (int num : row) {
            // 打印当前元素，并在后面添加一个空格
            std::cout << num << " ";
        }
        // 打印完一行后，换行
        std::cout << std::endl;
    }
};

int main() {
    Solution solution;
    int n = 5;  // 可以修改这个值来测试不同大小的矩阵
    auto result = solution.generateMatrix(n);
    
    std::cout << "Generated " << n << "x" << n << " spiral matrix:" << std::endl;
    printMatrix(result);
    
    return 0;
};