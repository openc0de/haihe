/**
 * @file std_swap_endian_public.h
 * @brief 标准字节序转换公有文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 10 2023 12:29 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Sat Jun 10 2023 15:43 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Sat Jun 10 2023 12:29 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#ifndef __STD_SWAP_ENDIAN_PUBLIC_H__
#define __STD_SWAP_ENDIAN_PUBLIC_H__

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



    /*char**********************************************************************/



    /*double********************************************************************/



    /*float*********************************************************************/



    /*integer*******************************************************************/



    /*void**********************************************************************/



    /*macro*********************************************************************/



    /*structure*****************************************************************/



    /*enumeration***************************************************************/



    /*union*********************************************************************/



    /*function******************************************************************/



/*declarations******************************************************************/

    /*function******************************************************************/

    /**
     * @brief 小端u16
     *
     * @param u16_p_data - 数据
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_endian_little16(u16 *u16_p_data);

    /**
     * @brief 小端u32
     *
     * @param u16_p_data - 数据
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_endian_little32(u32 *u32_p_data);

    /**
     * @brief 小端u64
     *
     * @param u16_p_data - 数据
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_endian_little64(u64 *u64_p_data);

    /**
     * @brief 大端u16
     *
     * @param u16_p_data - 数据
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_endian_big16(u16 *u16_p_data);

    /**
     * @brief 大端u32
     *
     * @param u16_p_data - 数据
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_endian_big32(u32 *u32_p_data);

    /**
     * @brief 大端u64
     *
     * @param u16_p_data - 数据
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_endian_big64(u64 *u64_p_data);

#endif /* __STD_SWAP_ENDIAN_PUBLIC_H__ */