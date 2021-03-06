# LeetCode - solutions

My solutions of LeetCode algorithmic problems.

### Table of Contents

  1.   [Two Sum](#twosum)
  2.   [Add Two Numbers](#twonumbers)
  3.   [Longest Substring Without Repeating Characters](#longestsubstringwithoutrepeatingcharacters)
  7.   [Reverse Integer](#reverseinteger)
  9.   [Palindrome Number](#palindromenumber)
  13.  [Roman To Integer](#romantointeger)
  20.  [Valid Parentheses](#validparentheses)
  21.  [Merge Two Sorted Lists](#mergetwosortedlists)
  26.  [Remove Duplicates from Sorted Array](#removeduplicatesfromsortedarray)
  27.  [Remove Element](#removeelement)
  28.  [Implement strStr()](#implementstrstr)
  35.  [Search Insert Position](#searchinsertposition)
  46.  [Permutations](#permutations)
  48.  [Rotate Image](#rotateimage)
  50.  [Pow(x, n)](#powxn)
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

**Solution**: [add_two_numbers.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/add_two_numbers.cpp)

### <a name='longestsubstringwithoutrepeatingcharacters'>3. [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)</a>

Given a string, find the length of the longest substring without repeating characters.

**Solution**: Not yet :(

### <a name='reverseinteger'>7. [Reverse Integer](https://leetcode.com/problems/reverse-integer/)</a>

Given a 32-bit signed integer, reverse digits of an integer.

**Notes**

Overflow check based on range of 32-bit signed integer which is `[-2^31; 2^31 - 1]`.

```
2^31 - 1 = 2147483648 - 1 = 2147483647
2147483647 / 10 = 214748364 + 7
```

Last digit is 7, so overflow might happened only if digit is greater than 7.

Same approach can be used for negative values: 

```
-2^31 = -2147483648
```

The last digit is 8, so overflow might happened only if digit is greater than 8 (or less than -8 if we consider a sign).

**Solution**: [reverse_bits.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/reverse_integer.cpp)

### <a name='palindromenumber'>9. [Palindrome Number](https://leetcode.com/problems/palindrome-number/)</a>

Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

**Solution**: [palindrome_number.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/palindrome_number.cpp)

### <a name='romantointeger'>13. [Roman To Integer](https://leetcode.com/problems/roman-to-integer/)</a>

Given a roman numeral, convert it to an integer.

**Solution**: [roman_to_integer.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/roman_to_integer.cpp)

### <a name='validparentheses'>20. [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)</a>

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:

  1. Open brackets must be closed by the same type of brackets
  2. Open brackets must be closed in the correct order

**Solution**: [valid_parentheses.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/valid_parentheses.cpp)

### <a name='mergetwosortedlists'>21. [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/)</a>

Merge two sorted linked lists and return it as a new sorted list. The new list should be made by splicing together the nodes of the first two lists.

**Solution**: [merge_two_sorted_lists.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/merge_two_sorted_lists.cpp)

### <a name='removeduplicatesfromsortedarray'>26. [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)</a>

Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

**Solution**: [remove_duplicates_from_sorted_array.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/remove_duplicates_from_sorted_array.cpp), [remove_duplicates_from_sorted_array_stl.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/remove_duplicates_from_sorted_array_stl.cpp)

### <a name='removeelement'>27. [Remove Element](https://leetcode.com/problems/remove-element/)</a>

Given an array nums and a value val, remove all instances of that value in-place and return the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
The order of elements can be changed. It doesn't matter what you leave beyond the new length.

**Solution**: [remove_element.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/remove_element.cpp), [remove_element_stl.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/remove_element_stl.cpp)

### <a name='implementstrstr'>28. [Implement strStr()](https://leetcode.com/problems/implement-strstr/)</a>

Implement [strStr()](http://www.cplusplus.com/reference/cstring/strstr/).
Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

**Solution**: [implement_strstr.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/implement_strstr.cpp)

### <a name='searchinsertposition'>35. [Search Insert Position](https://leetcode.com/problems/search-insert-position/)</a>

Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You may assume no duplicates in the array.

**Solution**: [search_insert_position.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/search_insert_position.cpp), [search_insert_position_stl.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/search_insert_position_stl.cpp)

### <a name='permutations'>46. [Permutations](https://leetcode.com/problems/permutations/)</a>

Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
All the integers of nums are unique.

**Notes**

Used Heap's algorithm in non-recursive version.

**Solution**: [permutations.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/permutations.cpp), [permutations_stl.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/permutations_stl.cpp)

### <a name='rotateimage'>48. [Rotate Image](https://leetcode.com/problems/rotate-image/)</a>

You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

**Notes**

Solution based on observation that 90 degrees matrix rotation is a composition of two consecutive steps:

  1. transpose O(n^2)
  2. reverse each row O(n^2)

**Solution**: [rotate_image.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/rotate_image.cpp)

### <a name='powxn'>50. [Pow(x, n)](https://leetcode.com/problems/powx-n/)</a>

Implement [pow(x, n)](http://www.cplusplus.com/reference/valarray/pow/), which calculates x raised to the power n (x^n).

**Solution**: [powxn.cpp](https://github.com/Oyoshi/LeetCode-solutions/blob/master/powxn.cpp)

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
