﻿#pragma once
#ifndef LeetCodeBit_H
#define LeetCodeBit_H
#include <stdint.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <algorithm> 
#include <functional> 
#include <bitset> 
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stdexcept>
#include <string>
#include <unordered_map> 
#include <unordered_set> 
#include <vector> 
#include <stack> 
#include "leetcode.h"

using namespace std;
/// <summary>
/// The class is to implement bit operation related algorithm  
/// </summary>
class LeetCodeBit
{
public:
#pragma region BitOperation
    /// <summary>
    /// Leet code # 371. Sum of Two Integers 
    /// 
    /// Calculate the sum of two integers a and b, but you are not allowed to use the operator + and -. 
    /// Example: 
    /// Given a = 1 and b = 2, return 3. 
    /// </summary>
    int getSum(int a, int b);

    /// <summary>
    /// Leet code # 191. Number of 1 Bits
    /// 
    /// Write a function that takes an unsigned integer and returns the number of ’1' 
    /// bits it has (also known as the Hamming weight). 
    /// For example, the 32-bit integer ’11' has binary representation 
    /// 00000000000000000000000000001011, so the function should return 3. 
    /// </summary>
    int hammingWeight(uint32_t n);

    /// <summary>
    /// Leet code #338. Counting Bits    
    /// Given a non negative integer number num. For every numbers i in the range 0 <= i <= num 
    /// calculate the number of 1's in their binary representation and return them as an array. 
    /// Example:
    /// For num = 5 you should return [0,1,1,2,1,2].
    /// Follow up: 
    /// It is very easy to come up with a solution with run time O(n*sizeof(integer)). But can you do it in linear time O(n) /possibly in a single pass?
    /// Space complexity should be O(n).
    /// Can you do it like a boss? Do it without using any builtin function like __builtin_popcount in c++ or in any other language.
    /// Hint:
    /// 1.You should make use of what you have produced already.
    /// 2.Divide the numbers in ranges like [2-3], [4-7], [8-15] and so on. And try to generate new range from previous.
    /// 3.Or does the odd/even status of the number help you in calculating the number of 1s?
    /// </summary>
    vector<int> countBits(int num);

    /// <summary>
    /// Leet code #342. Power of Four    
    /// Given an integer (signed 32 bits), write a function to check whether it is a power of 4.
    /// Example:
    /// Given num = 16, return true. Given num = 5, return false. 
    /// Follow up: Could you solve it without loops/recursion?
    /// </summary>
    bool isPowerOfFour(int num);

    /// <summary>
    /// Leet code #136. Single Number
    /// Given an array of integers, every element appears twice except for one. Find that single one.
    /// Note:
    /// Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory? 
    /// </summary>
    int singleNumber(vector<int>& nums);

    /// <summary>
    /// Leet code #389. Find the Difference 
    /// Given two strings s and t which consist of only lowercase letters.
    /// String t is generated by random shuffling string s and then add one more letter at a random position.
    /// Find the letter that was added in t.
    /// Example: 
    /// Input:
    /// s = "abcd"
    /// t = "abcde"
    /// Output:
    /// e
    /// Explanation:
    /// 'e' is the letter that was added.    
    /// </summary>
    char findTheDifference(string s, string t);

    /// <summary>
    /// Leet code #89. Gray Code 
    /// Given a non-negative integer n representing the total number of bits in the code, print the sequence of gray code. 
    /// A gray code sequence must begin with 0. 
    /// For example, given n = 2, return [0,1,3,2]. Its gray code sequence is:
    /// 00 - 0
    /// 01 - 1
    /// 11 - 3
    /// 10 - 2
    ///
    /// Note:
    ///   For a given n, a gray code sequence is not uniquely defined. 
    /// For example, [0,2,3,1] is also a valid gray code sequence according to the above definition.
    /// For now, the judge is able to judge based on one instance of gray code sequence. Sorry about that.
    /// </summary>
    vector<int> grayCode(int n);

    /// <summary>
    /// Leet code #405. Convert a Number to Hexadecimal 
    /// Given an integer, write an algorithm to convert it to hexadecimal. For negative integer, two’s complement method is used.  
    /// Note: 
    /// 1.All letters in hexadecimal (a-f) must be in lowercase.
    /// 2.The hexadecimal string must not contain extra leading 0s. If the number is zero, it is represented by a single zero character '0'; otherwise, 
    ///   the first character in the hexadecimal string will not be the zero character.
    /// 3.The given number is guaranteed to fit within the range of a 32-bit signed integer.
    /// 4.You must not use any method provided by the library which converts/formats the number to hex directly.
    /// Example 1: 
    /// Input:
    /// 26
    /// Output:
    /// "1a"
    ///
    /// Example 2: 
    /// Input:
    /// -1
    /// Output:
    /// "ffffffff"
    /// </summary>
    string toHex(int num);

    /// <summary>
    /// Leet code #137. Single Number II 
    /// Given an array of integers, every element appears three times except for one. Find that single one.   
    /// Note: 
    /// Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory? 
    /// </summary>
    int singleNumberII(vector<int>& nums);

    /// <summary>
    /// Leet code #190. Reverse Bits 
    /// Reverse bits of a given 32 bits unsigned integer.
    /// For example, given input 43261596 (represented in binary as 00000010100101000001111010011100), 
    /// return 964176192 (represented in binary as 00111001011110000010100101000000).
    /// Follow up:
    /// If this function is called many times, how would you optimize it? 
    /// </summary>
    uint32_t reverseBits(uint32_t n);

    /// <summary>
    /// Leet code #397. Integer Replacement 
    /// Given a positive integer n and you can do operations as follow: 
    /// 1.If n is even, replace n with n/2.
    /// 2.If n is odd, you can replace n with either n + 1 or n - 1.
    /// What is the minimum number of replacements needed for n to become 1? 
    /// Example 1: 
    /// Input:
    /// 8
    /// Output:
    /// 3
    /// Explanation:
    /// 8 -> 4 -> 2 -> 1
    ///
    /// Example 2: 
    /// Input:
    /// 7
    /// Output:
    /// 4
    /// Explanation:
    /// 7 -> 8 -> 4 -> 2 -> 1
    /// or
    /// 7 -> 6 -> 3 -> 2 -> 1
    /// </summary>
    int integerReplacement(int n);

    /// <summary>
    /// Leet code #201. Bitwise AND of Numbers Range 
    /// Given a range [m, n] where 0 <= m <= n <= 2147483647, return the bitwise AND of all numbers in this range, inclusive.
    /// For example, given the range [5, 7], you should return 4. 
    /// </summary>
    int rangeBitwiseAnd(int m, int n);

    /// <summary>
    /// Leet code #318. Maximum Product of Word Lengths 
    /// Given a string array words, find the maximum value of length(word[i]) * length(word[j]) where 
    /// the two words do not share common letters. You may assume that each word will contain only 
    /// lower case letters. If no such two words exist, return 0. 
    ///
    /// Example 1:
    /// Given ["abcw", "baz", "foo", "bar", "xtfn", "abcdef"]
    /// Return 16
    /// The two words can be "abcw", "xtfn". 
    ///
    /// Example 2:
    /// Given ["a", "ab", "abc", "d", "cd", "bcd", "abcd"]
    /// Return 4
    /// The two words can be "ab", "cd". 
    ///
    /// Example 3:
    /// Given ["a", "aa", "aaa", "aaaa"]
    /// Return 0
    /// No such pair of words. 
    /// </summary>
    int maxProductWordLength(vector<string>& words);

    /// <summary>
    /// Leet code #268. Missing Number  
    /// Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.
    /// For example, 
    /// Given nums = [0, 1, 3] return 2. 
    ///
    /// Note:
    /// Your algorithm should run in linear runtime complexity. Could you implement it using only constant extra space complexity? 
    /// </summary>
    int missingNumber(vector<int>& nums);

    /// <summary>
    /// Leet code #260. Single Number III 
    /// Given an array of numbers nums, in which exactly two elements appear only once and all the other elements 
    /// appear exactly twice. Find the two elements that appear only once. 
    ///
    /// Given nums = [1, 2, 1, 3, 2, 5], return [3, 5]. 
    /// Note:
    /// 1.The order of the result is not important. So in the above example, [5, 3] is also correct.
    /// 2.Your algorithm should run in linear runtime complexity. Could you implement it using only constant space complexity?
    /// </summary>
    vector<int> singleNumberIII(vector<int>& nums);

    /// <summary>
    /// Leet code #421. Maximum XOR of Two Numbers in an Array Add to List 
    /// Given a non-empty array of numbers, a0, a1, a2,... an-1, where 0 ≤ ai < 231.
    /// Find the maximum result of ai XOR aj, where 0 ≤ i, j < n. 
    ///
    /// Could you do this in O(n) runtime? 
    /// Example:
    /// Input: [3, 10, 5, 25, 2, 8]
    /// Output: 28
    /// Explanation: The maximum result is 5 ^ 25 = 28.
    /// </summary>
    int findMaximumXOR(vector<int>& nums);

    /// <summary>
    /// Leet code #461. Hamming Distance
    /// The Hamming distance between two integers is the number of positions at which the 
    /// corresponding bits are different.
    /// Given two integers x and y, calculate the Hamming distance.
    /// Note:
    /// 0 ≤ x, y < 231. 
    /// Example: 
    /// Input: x = 1, y = 4
    /// Output: 2
    /// Explanation:
    /// 1   (0 0 0 1)
    /// 4   (0 1 0 0)
    /// The above arrows point to positions where the corresponding bits are different.    
    /// </summary>
    int hammingDistance(int x, int y);

    /// <summary>
    /// Leet code #477. Total Hamming Distance 
    /// The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
    /// Now your job is to find the total Hamming distance between all pairs of the given numbers. 
    /// Example:
    /// Input: 4, 14, 2
    /// Output: 6
    /// 
    /// Explanation: In binary representation, the 4 is 0100, 14 is 1110, and 2 is 0010 (just
    /// showing the four bits relevant in this case). So the answer will be:
    /// HammingDistance(4, 14) + HammingDistance(4, 2) + HammingDistance(14, 2) = 2 + 2 + 2 = 6.
    /// Note:
    /// 1.Elements of the given array are in the range of 0  to 10^9 
    /// 2.Length of the array will not exceed 10^4. 
    /// </summary>
    int totalHammingDistance(vector<int>& nums);

    /// <summary>
    /// Leet code #390. Elimination Game   
    /// 
    /// There is a list of sorted integers from 1 to n. Starting from left to right, 
    /// remove the first number and every other number afterward until you reach the end of the list.
    /// Repeat the previous step again, but this time from right to left, remove the right most 
    /// number and every other number from the remaining numbers.
    /// We keep repeating the steps again, alternating left to right and right to left, until a single number remains.
    /// Find the last number that remains starting with a list of length n.
    /// Example: 
    /// Input:
    /// n = 9,
    /// 1 2 3 4 5 6 7 8 9
    /// 2 4 6 8
    /// 2 6
    /// 6
    ///
    /// Output:
    /// 6
    /// </summary>
    int lastRemaining(int n);

    /// <summary>
    /// Leet code #476. Number Complement    
    /// 
    /// Given a positive integer, output its complement number. The complement 
    /// strategy is to flip the bits of its binary representation.
    /// Note:
    /// 1.The given integer is guaranteed to fit within the range of a 32-bit signed integer.
    /// 2.You could assume no leading zero bit in the integer’s binary representation.
    /// Example 1:
    /// Input: 5
    /// Output: 2
    /// Explanation: The binary representation of 5 is 101 (no leading zero bits), and its complement is 010. So you need to output 2.
    /// Example 2:
    /// Input: 1
    /// Output: 0
    /// Explanation: The binary representation of 1 is 1 (no leading zero bits), and its complement is 0. So you need to output 0.
    /// </summary>
    int findComplement(int num);

    /// <summary>
    /// Leet code #693. Binary Number with Alternating Bits
    /// Given a positive integer, check whether it has alternating bits: 
    /// namely, if two adjacent bits will always have different values.
    ///  
    /// Example 1:
    /// Input: 5
    /// Output: True
    /// Explanation:
    /// The binary representation of 5 is: 101
    ///
    /// Example 2:
    /// Input: 7
    /// Output: False
    /// Explanation:
    /// The binary representation of 7 is: 111.
    ///
    /// Example 3:
    /// Input: 11
    /// Output: False
    /// Explanation:
    /// The binary representation of 11 is: 1011.
    ///
    /// Example 4:
    /// Input: 10
    /// Output: True
    /// Explanation:
    /// The binary representation of 10 is: 1010.
    /// </summary>
    bool hasAlternatingBits(int n);

    /// <summary>
    /// Leet code #762. Prime Number of Set Bits in Binary Representation    
    ///
    /// Given two integers L and R, find the count of numbers in the range 
    /// [L, R] (inclusive) having a prime number of set bits in their binary 
    /// representation. 
    /// (Recall that the number of set bits an integer has is the number of 1s 
    /// present when written in binary. For example, 21 written in binary is 
    /// 10101 which has 3 set bits. Also, 1 is not a prime.) 
    ///
    ///
    ///
    /// Example 1:
    ///
    /// Input: L = 6, R = 10
    /// Output: 4
    /// Explanation:
    /// 6 -> 110 (2 set bits, 2 is prime)
    /// 7 -> 111 (3 set bits, 3 is prime)
    /// 9 -> 1001 (2 set bits , 2 is prime)
    /// 10->1010 (2 set bits , 2 is prime)
    ///
    /// Example 2:
    ///
    /// Input: L = 10, R = 15
    /// Output: 5
    /// Explanation:
    /// 10 -> 1010 (2 set bits, 2 is prime)
    /// 11 -> 1011 (3 set bits, 3 is prime)
    /// 12 -> 1100 (2 set bits, 2 is prime)
    /// 13 -> 1101 (3 set bits, 3 is prime)
    /// 14 -> 1110 (3 set bits, 3 is prime)
    /// 15 -> 1111 (4 set bits, 4 is not prime)
    ///
    /// 
    /// Note:
    /// 1.L, R will be integers L <= R in the range [1, 10^6].
    /// 2.R - L will be at most 10000.
    /// </summary>
    int countPrimeSetBits(int L, int R);

    /// <summary>
    /// Leet code #805. Split Array With Same Average
    /// 
    /// In a given integer array A, we must move every element of A to either 
    /// list B or list C. (B and C initially start empty.)
    ///
    /// Return true if and only if after such a move, it is possible that the 
    /// average value of B is equal to the average value of C, and B and C are 
    /// both non-empty.
    ///
    /// Example :
    /// Input: 
    /// [1,2,3,4,5,6,7,8]
    /// Output: true
    /// Explanation: We can split the array into [1,4,5,8] and [2,3,6,7], and 
    /// both of them have the average of 4.5.
    /// Note:
    ///
    /// 1. The length of A will be in the range [1, 30].
    /// 2. A[i] will be in the range of [0, 10000].
    /// </summary>
    bool splitArraySameAverage(vector<int>& A);

    /// <summary>
    /// Leet code #805. Split Array With Same Average
    /// 
    /// In a given integer array A, we must move every element of A to either 
    /// list B or list C. (B and C initially start empty.)
    ///
    /// Return true if and only if after such a move, it is possible that the 
    /// average value of B is equal to the average value of C, and B and C are 
    /// both non-empty.
    ///
    /// Example :
    /// Input: 
    /// [1,2,3,4,5,6,7,8]
    /// Output: true
    /// Explanation: We can split the array into [1,4,5,8] and [2,3,6,7], and 
    /// both of them have the average of 4.5.
    /// Note:
    ///
    /// 1. The length of A will be in the range [1, 30].
    /// 2. A[i] will be in the range of [0, 10000].
    /// </summary>
    bool splitArraySameAverageII(vector<int>& A);

    /// <summary>
    /// Leet code #868. Binary Gap
    /// 
    /// Given a positive integer N, find and return the longest distance 
    /// between two consecutive 1's in the binary representation of N.
    ///
    /// If there aren't two consecutive 1's, return 0.
    /// 
    ///
    /// Example 1:
    ///
    /// Input: 22
    /// Output: 2
    /// Explanation: 
    /// 22 in binary is 0b10110.
    /// In the binary representation of 22, there are three ones, and two 
    /// consecutive pairs of 1's.
    /// The first consecutive pair of 1's have distance 2.
    /// The second consecutive pair of 1's have distance 1.
    /// The answer is the largest of these two distances, which is 2.
    ///
    /// Example 2:
    /// Input: 5
    /// Output: 2
    /// Explanation: 
    /// 5 in binary is 0b101.
    ///
    /// Example 3:
    /// Input: 6
    /// Output: 1
    /// Explanation: 
    /// 6 in binary is 0b110.
    ///
    /// Example 4:
    /// Input: 8
    /// Output: 0
    /// Explanation: 
    /// 8 in binary is 0b1000.
    /// There aren't any consecutive pairs of 1's in the binary representation 
    /// of 8, so we return 0.
    /// Note:
    /// 1 <= N <= 10^9
    /// </summary>
    int binaryGap(int N);

    /// <summary>
    /// Leet code #1009. Complement of Base 10 Integer
    /// 
    /// Every non-negative integer N has a binary representation.  For example, 
    /// 5 can be represented as "101" in binary, 11 as "1011" in binary, and so on.
    /// Note that except for N = 0, there are no leading zeroes in any binary 
    /// representation.
    ///
    /// The complement of a binary representation is the number in binary you get 
    /// when changing every 1 to a 0 and 0 to a 1.  For example, the complement of 
    /// "101" in binary is "010" in binary.
    ///
    /// For a given number N in base-10, return the complement of it's binary 
    /// representation as a base-10 integer.
    ///
    /// 
    ///
    /// Example 1:
    ///
    /// Input: 5
    /// Output: 2
    /// Explanation: 5 is "101" in binary, with complement "010" in binary, which 
    /// is 2 in base-10.
    ///
    /// Example 2:
    ///
    /// Input: 7
    /// Output: 0
    /// Explanation: 7 is "111" in binary, with complement "000" in binary, which 
    /// is 0 in base-10.
    ///
    /// Example 3:
    ///
    /// Input: 10
    /// Output: 5
    /// Explanation: 10 is "1010" in binary, with complement "0101" in binary, 
    /// which is 5 in base-10.
    /// 
    ///
    /// Note:
    ///
    /// 1. 0 <= N < 10^9
    /// </summary>
    int bitwiseComplement(int N);

    /// <summary>
    /// Leet code #1016. Binary String With Substrings Representing 1 To N
    /// 
    /// Given a binary string S (a string consisting only of '0' and '1's) and a 
    /// positive integer N, return true if and only if for every integer X from 1 
    /// to N, the binary representation of X is a substring of S.
    ///
    /// Example 1:
    ///
    /// Input: S = "0110", N = 3
    /// Output: true
    ///
    /// Example 2:
    ///
    /// Input: S = "0110", N = 4
    /// Output: false
    /// 
    ///
    /// Note:
    /// 
    /// 1 <= S.length <= 1000
    /// 1 <= N <= 10^9
    /// </summary>
    bool queryString(string S, int N);

    /// <summary>
    /// Leet code #1017. Convert to Base -2
    /// 
    /// Given a number N, return a string consisting of "0"s and "1"s that 
    /// represents its value in base -2 (negative two).
    ///
    /// The returned string must have no leading zeroes, unless the string is "0".
    ///
    /// Example 1:
    /// Input: 2
    /// Output: "110"
    /// Explantion: (-2) ^ 2 + (-2) ^ 1 = 2
    ///
    /// Example 2:
    /// Input: 3
    /// Output: "111"
    /// Explantion: (-2) ^ 2 + (-2) ^ 1 + (-2) ^ 0 = 3
    ///
    /// Example 3:
    /// Input: 4
    /// Output: "100"
    /// Explantion: (-2) ^ 2 = 4
    /// 
    ///
    /// Note:
    /// 1. 0 <= N <= 10^9
    /// </summary>
    string baseNeg2(int N);

    /// <summary>
    /// Leet code #1018. Binary Prefix Divisible By 5
    /// 
    /// Given an array A of 0s and 1s, consider N_i: the i-th subarray from A[0] 
    /// to A[i] interpreted as a binary number (from most-significant-bit to 
    /// least-significant-bit.)
    ///
    /// Return a list of booleans answer, where answer[i] is true if and only 
    /// if N_i is divisible by 5.
    ///
    /// Example 1:
    ///
    /// Input: [0,1,1]
    /// Output: [true,false,false]
    /// Explanation: 
    /// The input numbers in binary are 0, 01, 011; which are 0, 1, and 3 in 
    /// base-10.  Only the first number is divisible by 5, so answer[0] is true.
    ///
    /// Example 2:
    ///
    /// Input: [1,1,1]
    /// Output: [false,false,false]
    ///
    /// Example 3:
    ///
    /// Input: [0,1,1,1,1,1]
    /// Output: [true,false,false,false,true,false]
    ///
    /// Example 4:
    ///
    /// Input: [1,1,1,0,1]
    /// Output: [false,false,false,false,false]
    /// 
    ///
    /// Note:
    ///
    /// 1. 1 <= A.length <= 30000
    /// 2. A[i] is 0 or 1
    /// </summary>
    vector<bool> prefixesDivBy5(vector<int>& A);

    /// <summary>
    /// Leet code #1072. Flip Columns For Maximum Number of Equal Rows
    /// 
    /// Given a matrix consisting of 0s and 1s, we may choose any number of 
    /// columns in the matrix and flip every cell in that column.  Flipping 
    /// a cell changes the value of that cell from 0 to 1 or from 1 to 0.
    ///
    /// Return the maximum number of rows that have all values equal after 
    /// some number of flips.
    ///
    /// Example 1:
    /// Input: [[0,1],[1,1]]
    /// Output: 1
    /// Explanation: After flipping no values, 1 row has all values equal.
    ///
    /// Example 2:
    ///
    /// Input: [[0,1],[1,0]]
    /// Output: 2
    /// Explanation: After flipping values in the first column, both rows have 
    /// equal values.
    ///
    /// Example 3:
    ///
    /// Input: [[0,0,0],[0,0,1],[1,1,0]]
    /// Output: 2
    /// Explanation: After flipping values in the first two columns, the last 
    /// two rows have equal values.
    /// 
    /// Note:
    /// 1. 1 <= matrix.length <= 300
    /// 2. 1 <= matrix[i].length <= 300
    /// 3. All matrix[i].length's are equal
    /// 4. matrix[i][j] is 0 or 1
    /// </summary>
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix);

    /// <summary>
    /// Leet code #1073. Adding Two Negabinary Numbers
    /// 
    /// Given two numbers arr1 and arr2 in base -2, return the result of adding 
    /// them together.
    /// Each number is given in array format:  as an array of 0s and 1s, from 
    /// most significant bit to least significant bit.  For example, 
    /// arr = [1,1,0,1] represents the number (-2)^3 + (-2)^2 + (-2)^0 = -3.  
    /// A number arr in array format is also guaranteed to have no leading 
    /// zeros: either arr == [0] or arr[0] == 1.
    /// Return the result of adding arr1 and arr2 in the same format: as an array 
    /// of 0s and 1s with no leading zeros.
    /// 
    /// Example 1:
    /// Input: arr1 = [1,1,1,1,1], arr2 = [1,0,1]
    /// Output: [1,0,0,0,0]
    /// Explanation: arr1 represents 11, arr2 represents 5, the output 
    /// represents 16.
    /// 
    /// Note:
    /// 1. 1 <= arr1.length <= 1000
    /// 2. 1 <= arr2.length <= 1000
    /// 3. arr1 and arr2 have no leading zeros
    /// 4. arr1[i] is 0 or 1
    /// 5. arr2[i] is 0 or 1
    /// </summary>
    vector<int> addNegabinary(vector<int>& arr1, vector<int>& arr2);

    /// <summary>
    /// Leet code #1238. Circular Permutation in Binary Representation
    /// 
    /// Given 2 integers n and start. Your task is return any permutation p of 
    /// (0,1,2.....,2^n -1) such that :
    ///
    /// p[0] = start
    /// p[i] and p[i+1] differ by only one bit in their binary representation.
    /// p[0] and p[2^n -1] must also differ by only one bit in their binary 
    /// representation.
    /// 
    /// Example 1:
    ///
    /// Input: n = 2, start = 3
    /// Output: [3,2,0,1]
    /// Explanation: The binary representation of the permutation is (11,10,00,01). 
    /// All the adjacent element differ by one bit. Another valid permutation 
    /// is [3,1,0,2]
    ///
    /// Example 2:
    ///
    /// Input: n = 3, start = 2
    /// Output: [2,6,7,5,4,0,1,3]
    /// Explanation: The binary representation of the permutation is 
    /// (010,110,111,101,100,000,001,011).
    /// 
    /// Constraints:
    /// 1. 1 <= n <= 16
    /// 2. 0 <= start < 2 ^ n
    /// </summary>
    vector<int> circularPermutation(int n, int start);

    /// <summary>
    /// Leet code #1461. Check If a String Contains All Binary Codes of Size K
    /// 
    /// Medium
    ///
    /// Given a binary string s and an integer k.
    ///
    /// Return True if all binary codes of length k is a substring of s. 
    /// Otherwise, return False.
    ///
    /// Example 1:
    /// Input: s = "00110110", k = 2
    /// Output: true
    /// Explanation: The binary codes of length 2 are "00", "01", "10" 
    /// and "11". They can be all found as substrings at indicies 0, 1, 3 
    /// and 2 respectively.
    ///
    /// Example 2:
    /// Input: s = "00110", k = 2
    /// Output: true
    ///
    /// Example 3:
    /// Input: s = "0110", k = 1
    /// Output: true
    /// Explanation: The binary codes of length 1 are "0" and "1", it 
    /// is clear that both exist as a substring. 
    ///
    /// Example 4:
    /// Input: s = "0110", k = 2
    /// Output: false
    /// Explanation: The binary code "00" is of length 2 and doesn't exist in 
    /// the array.
    ///
    /// Example 5:
    /// Input: s = "0000000001011100", k = 4
    /// Output: false
    ///
    /// Constraints:
    /// 1. 1 <= s.length <= 5 * 10^5
    /// 2. s consists of 0's and 1's only.
    /// 3. 1 <= k <= 20
    /// </summary>
    bool hasAllCodes(string s, int k);

    /// <summary>
    /// Leet code #861. Score After Flipping Matrix
    /// 
    /// We have a two dimensional matrix A where each value is 0 or 1.
    ///
    /// A move consists of choosing any row or column, and toggling each value 
    /// in that row or column: changing all 0s to 1s, and all 1s to 0s.
    ///
    /// After making any number of moves, every row of this matrix is interpreted 
    /// as a binary number, and the score of the matrix is the sum of these 
    /// numbers.
    ///
    /// Return the highest possible score.
    ///
    /// Example 1:
    ///
    /// Input: [[0,0,1,1],[1,0,1,0],[1,1,0,0]]
    /// Output: 39
    /// Explanation:
    /// Toggled to [[1,1,1,1],[1,0,0,1],[1,1,1,1]].
    /// 0b1111 + 0b1001 + 0b1111 = 15 + 9 + 15 = 39
    /// 
    /// 
    /// Note:
    ///
    /// 1. 1 <= A.length <= 20
    /// 2. 1 <= A[0].length <= 20
    /// 3. A[i][j] is 0 or 1.
    /// </summary>
    int matrixScore(vector<vector<int>>& A);

    /// <summary>
    /// Leet code #1486. XOR Operation in an Array
    /// 
    /// Easy
    ///
    /// Given an integer n and an integer start.
    /// Define an array nums where nums[i] = start + 2*i (0-indexed) and 
    /// n == nums.length.
    ///
    /// Return the bitwise XOR of all elements of nums.
    ///
    /// Example 1:
    /// Input: n = 5, start = 0
    /// Output: 8
    /// Explanation: Array nums is equal to [0, 2, 4, 6, 8] where 
    /// (0 ^ 2 ^ 4 ^ 6 ^ 8) = 8.
    /// Where "^" corresponds to bitwise XOR operator.
    ///
    /// Example 2:
    /// Input: n = 4, start = 3
    /// Output: 8
    /// Explanation: Array nums is equal to [3, 5, 7, 9] where 
    /// (3 ^ 5 ^ 7 ^ 9) = 8.
    ///
    /// Example 3:
    /// Input: n = 1, start = 7
    /// Output: 7
    ///
    /// Example 4:
    /// Input: n = 10, start = 5
    /// Output: 2
    ///
    /// Constraints:
    /// 1. 1 <= n <= 1000
    /// 2. 0 <= start <= 1000
    /// 3. n == nums.length
    /// </summary>
    int xorOperation(int n, int start);

    /// <summary>
    /// Leet code #1521. Find a Value of a Mysterious Function Closest to 
    ///                  Target
    /// 
    /// Hard
    ///
    /// Winston was given the above mysterious function func. He has an 
    /// integer array arr and an integer target and he wants to find the 
    /// values l and r that make the value |func(arr, l, r) - target| 
    /// minimum possible.
    ///
    /// Return the minimum possible value of |func(arr, l, r) - target|.
    ///
    /// Notice that func should be called with the values l and r where 
    /// 0 <= l, r < arr.length.
    ///
    /// Example 1:
    ///
    /// Input: arr = [9,12,3,7,15], target = 5
    /// Output: 2
    /// Explanation: Calling func with all the pairs of [l,r] =
    /// [[0,0],[1,1],[2,2],[3,3],[4,4],[0,1],[1,2],[2,3],[3,4],[0,2],[1,3],
    /// [2,4],[0,3],[1,4],[0,4]], Winston got the following results 
    /// [9,12,3,7,15,8,0,3,7,0,0,3,0,0,0]. The value closest to 5 is 7 and 3, 
    /// thus the minimum difference is 2.
    ///
    /// Example 2:
    /// Input: arr = [1000000,1000000,1000000], target = 1
    /// Output: 999999
    /// Explanation: Winston called the func with all possible values of 
    /// [l,r] and he always got 1000000, thus the min difference is 999999.
    ///
    /// Example 3:
    /// Input: arr = [1,2,4,8,16], target = 0
    /// Output: 0
    ///
    /// Constraints:
    /// 1. 1 <= arr.length <= 10^5
    /// 2. 1 <= arr[i] <= 10^6
    /// 3. 0 <= target <= 10^7
    /// </summary>
    int closestToTarget(vector<int>& arr, int target);

    /// <summary>
    /// Leet code #1529. Bulb Switcher IV
    /// 
    /// Medium
    ///
    /// There is a room with n bulbs, numbered from 0 to n-1, arranged in a 
    /// row from left to right. Initially all the bulbs are turned off.
    ///
    /// Your task is to obtain the configuration represented by target where 
    /// target[i] is '1' if the i-th bulb is turned on and is '0' if it is 
    /// turned off.
    ///
    /// You have a switch to flip the state of the bulb, a flip operation is 
    /// defined as follows:
    ///
    /// Choose any bulb (index i) of your current configuration.
    /// Flip each bulb from index i to n-1.
    /// When any bulb is flipped it means that if it is 0 it changes to 1 and 
    /// if it is 1 it changes to 0.
    ///
    /// Return the minimum number of flips required to form target.
    /// 
    /// Example 1:
    ///
    /// Input: target = "10111"
    /// Output: 3
    /// Explanation: Initial configuration "00000".
    /// flip from the third bulb:  "00000" -> "00111"
    /// flip from the first bulb:  "00111" -> "11000"
    /// flip from the second bulb:  "11000" -> "10111"
    /// We need at least 3 flip operations to form target.
    ///
    /// Example 2:
    /// Input: target = "101"
    /// Output: 3
    /// Explanation: "000" -> "111" -> "100" -> "101".
    ///
    /// Example 3:
    /// Input: target = "00000"
    /// Output: 0
    ///
    /// Example 4:
    /// Input: target = "001011101"
    /// Output: 5
    /// 
    /// Constraints:
    /// 1. 1 <= target.length <= 10^5
    /// 2. target[i] == '0' or target[i] == '1'
    /// </summary>
    int minFlips(string target);

    /// <summary>
    /// Leet code #1545. Find Kth Bit in Nth Binary String
    /// 
    /// Medium
    ///
    /// Given two positive integers n and k, the binary string  
    /// Sn is formed as follows:
    ///
    /// S1 = "0" 
    /// s[i] and s[i + 1] where:
    ///
    /// Si = Si-1 + "1" + reverse(invert(Si-1)) for i > 1
    /// Where + denotes the concatenation operation, reverse(x) returns 
    /// the reversed string x, and invert(x) inverts all the bits in 
    /// x (0 changes to 1 and 1 changes to 0).
    /// 
    /// For example, the first 4 strings in the above sequence are:
    /// S1 = "0"
    /// S2 = "011"
    /// S3 = "0111001"
    /// S4 = "011100110110001"
    /// Return the kth bit in Sn. It is guaranteed that k is valid for the given n.
    ///
    /// Example 1:
    /// Input: n = 3, k = 1
    /// Output: "0"
    /// Explanation: S3 is "0111001". The first bit is "0".
    ///
    /// Example 2:
    /// Input: n = 4, k = 11
    /// Output: "1"
    /// Explanation: S4 is "011100110110001". The 11th bit is "1".
    /// Example 3:
    /// Input: n = 1, k = 1
    /// Output: "0"
    ///
    /// Example 4:
    /// Input: n = 2, k = 3
    /// Output: "1"
    /// Constraints:
    /// 1. 1 <= n <= 20
    /// 2. 1 <= k <= 2n - 1
    /// 3. 0 <= i <= s.length - 2
    /// </summary>
    char findKthBit(int n, int k);
#pragma endregion
};
#endif  // LeetCodeBit_H
