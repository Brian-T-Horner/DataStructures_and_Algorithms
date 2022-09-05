"""
Fibonacci Algorithm

Author: Brian Horner
Edit History:
9/4/2022 - Initial Version
9/4/2022 - Added Recursive Fibonacci
9/5/2022 - Seperated binary recursive fibonacci and linear recursive fibonacci
"""


# Includes

def binaryRecursiveFibonacci(n):
    """
    Function that determines a fibonacci sequence with binary recursion
    :param n: Starting value for fibonacci sequence
    :return:
    """
    if n <= 1:
        return n
    else:
        return binaryRecursiveFibonacci(n - 1) + binaryRecursiveFibonacci(n - 2)


def FibonnaciIterative(n):
    """"""
    return 0


def linearRecusiveFibonacci(n, a=0, b=1):
    """

    :param n:
    :param a:
    :param b:
    :return:
    """
    if n == 0:
        return a
    if n == 1:
        return b
    return linearRecusiveFibonacci(n-1, b, a+b)


if __name__ == "__main__":
    print(f"Hello!")
