/* Header file
 * Description: Pin definitions for ADuCM320i
 * Author: Prassanna
 */


#ifndef PINCM320I_H_
#define PINCM320I_H_

    /*----------------------------
    ADC Byte Registers
    -----------------------------*/
    #if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
    #define ADCCON      __UINT16__(0x40082174);
    #define ADCDAT0     __UINT32__(0x40086000);
    #define ADCDAT1     __UINT32__(0x40086004);
    #define ADCDAT2     __UINT32__(0x40086008);
    #define ADCDAT3     __UINT32__(0x4008600C);
    #define ADCDAT4     __UINT32__(0x40086010);
    #define ADCDAT5     __UINT32__(0x40086014);
    #define ADCDAT6     __UINT32__(0x40086018);
    #define ADCDAT7     __UINT32__(0x4008601C);
    #define ADCDAT8     __UINT32__(0x40086020);
    #define ADCDAT9     __UINT32__(0x40086024);
    #define ADCDAT10    __UINT32__(0x40086028);
    #define ADCDAT11    __UINT32__(0x4008602C);
    #define ADCDAT12    __UINT32__(0x40086030);
    #define ADCDAT13    __UINT32__(0x40086034);
    #define ADCDAT14    __UINT32__(0x40086038);
    #define ADCDAT15    __UINT32__(0x4008603C);
    #define ADCDAT16    __UINT32__(0x40086040);
    #define ADCDAT17    __UINT32__(0x40086044);
    #define ADCDAT18    __UINT32__(0x40086048);
    #define ADCDAT19    __UINT32__(0x4008604C);
    #define ADCDAT20    __UINT32__(0x40086050);
    #define ADCDAT21    __UINT32__(0x40086054);
    #define ADCDAT22    __UINT32__(0x40086058);
    #define ADCDAT23    __UINT32__(0x4008605C);
    #define ADCDAT24    __UINT32__(0x40086060);
    #define ADCDAT25    __UINT32__(0x40086064);
    #define ADCDAT26    __UINT32__(0x40086068);
    #define ADCDAT27    __UINT32__(0x4008606C);
    #define ADCCHA      __UINT16__(0x40086080);
    #define ADCSEQ      __UINT32__(0x40086088);
    #define ADCSEQC     __UINT32__(0x4008608C);
    #define ADCCMP      __UINT32__(0x40086098);
    #define ADCCNVC     __UINT32__(0x4008609C);
    






#endif