# LeetCode - solutions

My solutions of LeetCode algorithmic problems.

### Table of Contents

  1. [Two Sum](#twosum)
  2. [Add Two Numbers](#twonumbers)
  3. [Longest Substring Without Repeating Characters](#longestsubstring)
  7. [Reverse Integer](#reverseinteger)
  190. [Reverse Bits](#reversebits)

### <a name='twosum'>1. [Two Sum](https://leetcode.com/problems/two-sum/)</a>

Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

**Solution**: [two_sum.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/two_sum.cpp)

### <a name='twonumbers'>2. [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/)</a>

You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order and each of their nodes contain a single digit. 
Add the two numbers and return it as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.

**Solution**: Not yet :(

### <a name='longestsubstring'>3. [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)</a>

Given a string, find the length of the longest substring without repeating characters.

**Solution**: Not yet :(

### <a name='reverseinteger'>7. [Reverse Integer](https://leetcode.com/problems/reverse-integer/)</a>

Given a 32-bit signed integer, reverse digits of an integer.

**Solution**: [reverse_bits.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/reverse_integer.cpp)

### <a name='reversebits'>190. [Reverse Bits](https://leetcode.com/problems/reverse-bits/)</a>

Reverse bits of a given 32 bits unsigned integer.

**Notes**

Time complexity is O(1) by using compile time generated lookup table.
Algorithm can be described by these 3 steps:

  1. Split the 32-bit integer into 8-bit chunks
  2. Reverse the chunks using the lookup table
  3. Tranform chunks

Mechanism of generating the lookup table is based on simple rule:

0 reverse is 0,

1 reverse is 128,

2 reverse is 64,
...

So we get the table T[256] = { 0, 128, 64, ... } (256 because of 8-bit chunk size).

**Solution**: [reverse_bits.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/reverse_bits.cpp)
