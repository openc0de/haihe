/**
 * @file std_sort.c
 * @brief 标准排序文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 17 2023 15:52 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Sat Jun 24 2023 22:50 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Sat Jun 17 2023 15:52 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#include "std_sort_private.h"
#include "std_sort_public.h"

/**
 * @brief 最小冒泡排序
 *
 * @param u8_p_data  - 数据
 * @param u32_length - 数据长度
 * @ref https://mp.weixin.qq.com/s/jEndG6rEEKPQMOw8ZgdJiw
 */
void v_std_min_bubble_sort(u8 *u8_p_data, u32 u32_length)
{
    v_std_assert_pointer(u8_p_data);
    v_std_assert_min_invalid(0, u32_length);
    v_std_assert_max_valid(M_SORT_MAX_SIZE, u32_length);

    for (u32 i = 0; u32_length - 1 > i; ++i)
    {
        for (u32 j = 0; u32_length - 1 - i > j; ++j)
        {
            if (u8_p_data[j] > u8_p_data[j + 1])
            {
                u8 u8_tmp = 0;

                u8_tmp = u8_p_data[j];
                u8_p_data[j] = u8_p_data[j + 1];
                u8_p_data[j + 1] = u8_tmp;
            }
        }
    }
} /* v_std_min_bubble_sort */

/**
 * @brief 最小选择排序
 *
 * @param u8_p_data  - 数据
 * @param u32_length - 数据长度
 * @ref https://mp.weixin.qq.com/s/jEndG6rEEKPQMOw8ZgdJiw
 */
void v_std_min_selection_sort(u8 *u8_p_data, u32 u32_length)
{
    v_std_assert_pointer(u8_p_data);
    v_std_assert_min_invalid(0, u32_length);
    v_std_assert_max_valid(M_SORT_MAX_SIZE, u32_length);

    u32 u32_min = 0;

    for (u32 i = 0; u32_length - 1 > i; ++i)
    {
        u32_min = i;

        for (u32 j = i + 1; u32_length > j; ++j)
        {
            if (u8_p_data[u32_min] > u8_p_data[j])
            {
                u32_min = j;
            }
        }

        u8 u8_tmp = 0;

        u8_tmp = u8_p_data[i];
        u8_p_data[i] = u8_p_data[u32_min];
        u8_p_data[u32_min] = u8_tmp;
    }
} /* v_std_min_selection_sort */

/**
 * @brief 最大选择排序
 *
 * @param u8_p_data  - 数据
 * @param u32_length - 数据长度
 * @ref https://mp.weixin.qq.com/s/jEndG6rEEKPQMOw8ZgdJiw
 */
void v_std_max_selection_sort(u8 *u8_p_data, u32 u32_length)
{
    v_std_assert_pointer(u8_p_data);
    v_std_assert_min_invalid(0, u32_length);
    v_std_assert_max_valid(M_SORT_MAX_SIZE, u32_length);

    u32 u32_max = 0;

    for (u32 i = 0; u32_length - 1 > i; ++i)
    {
        u32_max = i;

        for (u32 j = i + 1; u32_length > j; ++j)
        {
            if (u8_p_data[u32_max] < u8_p_data[j])
            {
                u32_max = j;
            }
        }

        u8 u8_tmp = 0;

        u8_tmp = u8_p_data[i];
        u8_p_data[i] = u8_p_data[u32_max];
        u8_p_data[u32_max] = u8_tmp;
    }
} /* v_std_max_selection_sort */

/**
 * @brief 插入排序
 *
 * @param u8_p_data  - 数据
 * @param u32_length - 数据长度
 */
void v_std_insertion_sort(u8 *u8_p_data, u32 u32_length)
{
    v_std_assert_pointer(u8_p_data);
    v_std_assert_min_invalid(0, u32_length);
    v_std_assert_max_valid(M_SORT_MAX_SIZE, u32_length);

    for (u32 i = 1; u32_length > i; ++i)
    {
        if (u8_p_data[i - 1] > u8_p_data[i])
        {
            u32 j = 0;
            u8  u8_tmp = 0;

            u8_tmp = u8_p_data[i];
            u8_p_data[i] = u8_p_data[i - 1];

            while (u8_p_data[j] > u8_tmp)
            {
                u8_p_data[j + 1] = u8_p_data[j];
                --j;
            }

            u8_p_data[j + 1] = u8_tmp;
        }
    }
} /* v_std_insertion_sort */