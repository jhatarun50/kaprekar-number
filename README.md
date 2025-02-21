. A Kaprekar number is a number n such that if you square the number, split the resulting square into two parts, the sum of those parts equals n.

Step-by-step Approach:
Square the number: For each number n in the range [p, q], square it.
Split the square: Split the square into two parts. The right part of the split should have the same number of digits as n. The left part of the split is the remaining digits.
If the square has fewer digits than n, treat the left part as 0.
Check if the sum of the two parts equals n: If the sum of the left and right parts equals n, then n is a Kaprekar number.
Example:
For n = 9:
The square of 9 is 81.
Split 81 into 8 (left) and 1 (right).
The sum is 8 + 1 = 9, which equals n, so 9 is a Kaprekar number.
Plan:
Loop through all numbers from p to q.
For each number, check if it is a Kaprekar number.
Print the Kaprekar numbers, or print "INVALID RANGE" if there are none.
