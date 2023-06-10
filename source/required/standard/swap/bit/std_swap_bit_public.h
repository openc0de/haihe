/**
 * @file std_swap_bit_public.h
 * @brief 标准位转换公有文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 10 2023 21:14 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Sat Jun 10 2023 22:12 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Sat Jun 10 2023 21:14 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#ifndef __STD_SWAP_BIT_PUBLIC_H__
#define __STD_SWAP_BIT_PUBLIC_H__

/*header files******************************************************************/

    /*required******************************************************************/



        /*autosar***************************************************************/



            /*swc***************************************************************/



            /*rte***************************************************************/



            /*bsw***************************************************************/



        /*standard**************************************************************/



        /*system****************************************************************/



    /*optional******************************************************************/



        /*bsp*******************************************************************/



        /*open******************************************************************/



        /*os********************************************************************/



        /*sdk*******************************************************************/



        /*test******************************************************************/



/*types*************************************************************************/

    /*boolean*******************************************************************/

    typedef bool std_swap_bit_val_b;

    /*char**********************************************************************/



    /*double********************************************************************/



    /*float*********************************************************************/



    /*integer*******************************************************************/



    /*void**********************************************************************/



    /*macro*********************************************************************/

    #define M_STD_SWAP_BIT_VAL_ZERO    (FALSE)
    #define M_STD_SWAP_BIT_VAL_ONE     (TRUE)

    /*structure*****************************************************************/



    /*enumeration***************************************************************/



    /*union*********************************************************************/



    /*function******************************************************************/



/*declarations******************************************************************/

    /*function******************************************************************/

    /**
     * @brief 位值取1
     *
     * @param u32_p_data - 数据
     * @param u8_bit     - 操作位
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_bit_set(u32 *u32_p_data, u8 u8_bit);

    /**
     * @brief 位值取0
     *
     * @param u32_p_data - 数据
     * @param u8_bit     - 操作位
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_bit_clear(u32 *u32_p_data, u8 u8_bit);

    /**
     * @brief 位值取反
     *
     * @param u32_p_data - 数据
     * @param u8_bit     - 操作位
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_bit_reverse(u32 *u32_p_data, u8 u8_bit);

    /**
     * @brief 位值获取
     *
     * @param u32_data - 数据
     * @param u8_bit   - 操作位
     * @return M_STD_SWAP_BIT_VAL_ZERO
     *         M_STD_SWAP_BIT_VAL_ONE
     */
    std_swap_bit_val_b b_std_swap_bit_get(u32 u32_data, u8 u8_bit);

#endif /* __STD_SWAP_BIT_PUBLIC_H__ */
