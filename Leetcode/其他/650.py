'''
最初在一个记事本上只有一个字符 'A'。你每次可以对这个记事本进行两种操作：

Copy All (复制全部) : 你可以复制这个记事本中的所有字符(部分的复制是不允许的)。
Paste (粘贴) : 你可以粘贴你上一次复制的字符。
给定一个数字 n 。你需要使用最少的操作次数，在记事本中打印出恰好 n 个 'A'。输出能够打印出 n 个 'A' 的最少操作次数。

策略：质因数分解，质因数
'''

class Solution(object):
    def minSteps(self, n):
        ans = 0
        factor = 2
        while n > 1:
            while n % factor == 0:
                ans += factor
                n /= factor
            factor += 1
        return ans
