//
//  452.cpp
//  Leetcode
//
//  Created by 刘冠中 on 2021/1/16.
//
//  在二维空间中有许多球形的气球。对于每个气球，提供的输入是水平方向上，气球直径的开始和结束坐标。由于它是水平的，所以纵坐标并不重要，因此只要知道开始和结束的横坐标就足够了。开始坐标总是小于结束坐标。

//  一支弓箭可以沿着 x 轴从不同点完全垂直地射出。在坐标 x 处射出一支箭，若有一个气球的直径的开始和结束坐标为 xstart，xend，且满足 xstart ≤ x ≤ xend，则该气球会被引爆。可以射出的弓箭的数量没有限制。 弓箭一旦被射出之后，可以无限地前进。我们想找到使得所有气球全部被引爆，所需的弓箭的最小数量。

//  给你一个数组 points ，其中 points [i] = [xstart,xend] ，返回引爆所有气球所必须射出的最小弓箭数。
//  策略：按照右边界排序，每次选择留下的最小的右边界


#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b){
        return a[1] < b[1];
    }
    
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty())
            return 0;
        int num = points.size();
        sort(points.begin(), points.end(), comp);
        int res = 1, shoot = points[0][1];
        for(int i = 0; i < num; i++){
            if(points[i][0] <= shoot)
                continue;
            else{
                shoot = points[i][1];
                res ++;
            }
            
        }
        
        return res;
    }
    
};

