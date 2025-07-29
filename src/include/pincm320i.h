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
#define ADCCON      __UINT16__(0x40082174)
#define ADCDAT0     __UINT32__(0x40086000)
#define ADCDAT1     __UINT32__(0x40086004)
#define ADCDAT2     __UINT32__(0x40086008)
#define ADCDAT3     __UINT32__(0x4008600C)
#define ADCDAT4     __UINT32__(0x40086010)
#define ADCDAT5     __UINT32__(0x40086014)
#define ADCDAT6     __UINT32__(0x40086018)
#define ADCDAT7     __UINT32__(0x4008601C)
#define ADCDAT8     __UINT32__(0x40086020)
#define ADCDAT9     __UINT32__(0x40086024)
#define ADCDAT10    __UINT32__(0x40086028)
#define ADCDAT11    __UINT32__(0x4008602C)
#define ADCDAT12    __UINT32__(0x40086030)
#define ADCDAT13    __UINT32__(0x40086034)
#define ADCDAT14    __UINT32__(0x40086038)
#define ADCDAT15    __UINT32__(0x4008603C)
#define ADCDAT16    __UINT32__(0x40086040)
#define ADCDAT17    __UINT32__(0x40086044)
#define ADCDAT18    __UINT32__(0x40086048)
#define ADCDAT19    __UINT32__(0x4008604C)
#define ADCDAT20    __UINT32__(0x40086050)
#define ADCDAT21    __UINT32__(0x40086054)
#define ADCDAT22    __UINT32__(0x40086058)
#define ADCDAT23    __UINT32__(0x4008605C)
#define ADCDAT24    __UINT32__(0x40086060)
#define ADCDAT25    __UINT32__(0x40086064)
#define ADCDAT26    __UINT32__(0x40086068)
#define ADCDAT27    __UINT32__(0x4008606C)
#define ADCCHA      __UINT16__(0x40086080)
#define ADCSEQ      __UINT32__(0x40086088)
#define ADCSEQC     __UINT32__(0x4008608C)
#define ADCCMP      __UINT32__(0x40086098)
#define ADCCNVC     __UINT32__(0x4008609C)
#endif

/*----------------------------
ADC Bit field definition
-----------------------------*/
typedef struct {
    unsigned C_TYPE         :3;
    unsigned CNV_DMA        :1;
    unsigned SEQ_DMA        :1;
    unsigned                :1;
    unsigned RESTART_ADC    :1;
    unsigned REFB_PUP       :1;  
    unsigned                :1;
    unsigned PUP            :1;
    unsigned SOFT_RESET     :1;
    unsigned                :5;
} ADCCONbits_t;

#define ADCCONbits      (*(volatile ADCCONbits_t *)ADCCON)

typedef struct {
    unsigned ADCCP          :5;
    unsigned                :3;
    unsigned ADCCN          :5;
    unsigned                :3;
} ADCCHAbits_t;

#define ADCCHAbits      (*(volatile ADCCHAbits_t *)ADCCHA)

typedef struct {
    unsigned CH             :29;
    unsigned                :1;
    unsigned EN             :1;
    unsigned ST             :1;
} ADCSEQbits_t;

#define ADCSEQbits      (*(volatile ADCSEQbits_t *)ADCSEQ)

typedef struct {
    unsigned DIF0           :5;
    unsigned DIF2           :5;
    unsigned DIF4           :5;
    unsigned DIF6           :5;
    unsigned T              :8;
    unsigned                :4;
} ADCSEQCbits_t;

#define ADCSEQCbits      (*(volatile ADCSEQCbits_t *)ADCSEQC)

typedef struct {
    unsigned EN             :1;
    unsigned DIR            :1;
    unsigned THR            :16;
    unsigned                :16;
} ADCCMPbits_t;

#define ADCCMPbits      (*(volatile ADCCMPbits_t *)ADCCMP)

typedef struct {
    unsigned CNVC           :10;
    unsigned                :6;
    unsigned CNVD           :10;
    unsigned                :6;
} ADCCNVCbits_t;

#define ADCCNVCbits     (*(volatile ADCCNVCbits_t *)ADCCNVC)

/*----------------------------
Additional Byte registers 
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define IBUFCON         __UINT16__(0x40081400);
#define AFETEMPC        __UINT8__(0x40087830);
#define AFEREFC         __UINT8__(0x40087834);
#endif

/*----------------------------
Additional registers Bit field definition
-----------------------------*/
typedef struct {
    unsigned IBUF_BYP       :2;
    unsigned IBUF_PD        :2;
    unsigned                :12;
} IBUFCONbits_t;

#define IBUFCONbits     (*(volatile IBUFCONbits_t *)IBUFCON)

typedef struct {
    unsigned PD             :1;
    unsigned CHOP           :1;
    unsigned                :6;
} AFETEMPCbits_t;

#define AFETEMPCbits    (*(volatile AFETEMPCbits_t *)AFETEMPC)

typedef struct {
    unsigned BG_PD          :1;
    unsigned B2V5R_PD       :1;
    unsigned B2MA_PDB       :1;
    unsigned REF            :1;
    unsigned                :4;
} AFEREFCbits_t;

#define AFEREFCbits     (*(volatile AFEREFCbits_t *)AFEREFC)


#endif