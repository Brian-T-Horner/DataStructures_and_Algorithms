"""
Fibonacci Algorithm

Author: Brian Horner
Edit History:
9/4/2022 - Initial Version
9/4/2022 - Added Recursive Fibonacci
"""

# Includes

def FibonacciRecursion(n):
    """
    Function that determines a fibonacci sequence recursively
    :param n: Starting value for fibonacci sequence
    :return:
    """
    if n ==1 or n ==2:
        return 1
    else:
        return FibonacciRecursion(n - 1) + FibonacciRecursion(n - 2)

def FibonnaciIterative(n):
    """"""
    return 0
if __name__ == "__main__":
    print(f"Hello!")
