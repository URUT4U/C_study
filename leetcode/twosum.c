/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   twosum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nranna <nranna@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 20:57:23 by nranna            #+#    #+#             */
/*   Updated: 2025/06/01 21:43:18 by nranna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** 
 * 
Given an array of integers nums and an integer target, return indices of the
two numbers such that they add up to target. You may assume that each input
would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,11,15,7], target = 9
Output: [0,3]
Explanation: Because nums[0] + nums[3] == 9, we return [0, 3].

Assume the caller calls free.*/

#include <stdlib.h>

int	*twosum(int *nums, int numsSize, int target, int *returnSize)
{
	int	i;
	int	test;
	int	*answer;

	test = 0;
	answer = 0;
	i = 0;
	while (i < numsSize)
	{
		test = i + 1;
		while (test < numsSize)
		{
			if (nums[i] + nums[test] == target)
			{
				answer = (int *)malloc(sizeof(int) * 2);
				answer[0] = test;
				answer[1] = i;
				*returnSize = 2;
				return (answer);
			}
			test++;
		}
		i++;
	}
	*returnSize = 0;
	return (answer);
}

//I saw a solution made using hash map that goes from O(N^2) to O(N), which
//is a lot faster. Try doing it later.
