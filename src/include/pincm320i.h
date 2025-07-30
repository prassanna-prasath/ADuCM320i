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

/*----------------------------
Analog Comparator Byte Registers
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define AFECOMP         __UINT16__(0x40087838)
#endif

/*----------------------------
Analog Comparator Bit field definition
-----------------------------*/
typedef struct {
    unsigned HYS            :1;
    unsigned SPEED          :2;
    unsigned INV            :1;
    unsigned OUT            :2;
    unsigned INNEG          :2;
    unsigned EN             :1;
    unsigned                :7;
} AFECOMPbits_t;

#define AFECOMPbits     (*(volatile AFECOMPbits_t *)AFECOMP)

/*----------------------------
IDAC Byte Registers
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define IDAC0DAT        __UINT32__(0x40086800)
#define IDAC0CON        __UINT8__(0x40086804)
#define IDAC1DAT        __UINT32__(0x40086808)
#define IDAC1CON        __UINT8__(0x4008680C)
#define IDAC2DAT        __UINT32__(0x40086810)
#define IDAC2CON        __UINT8__(0x40086814)
#define IDAC3DAT        __UINT32__(0x40086818)
#define IDAC3CON        __UINT8__(0x4008681C)
#endif

/*----------------------------
VDAC Byte Registers
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define DAC0CON         __UINT16__(0x40082400)
#define DAC1CON         __UINT16__(0x40082404)
#define DAC2CON         __UINT16__(0x40082408)
#define DAC3CON         __UINT16__(0x4008240C)
#define DAC4CON         __UINT16__(0x40082410)
#define DAC5CON         __UINT16__(0x40082414)
#define DAC6CON         __UINT16__(0x40082418)
#define DAC7CON         __UINT16__(0x4008241C)
#define DAC0DAT         __UINT32__(0x40086404)
#define DAC1DAT         __UINT32__(0x40086408)
#define DAC2DAT         __UINT32__(0x4008640C)
#define DAC3DAT         __UINT32__(0x40086410)
#define DAC4DAT         __UINT32__(0x40086414)
#define DAC5DAT         __UINT32__(0x40086418)
#define DAC6DAT         __UINT32__(0x4008641C)
#define DAC7DAT         __UINT32__(0x40086420)
#endif

/*----------------------------
External Interrupts Byte Registers
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define EI0CFG          __UINT16__(0x40002420)
#define EI1CFG          __UINT16__(0x40002424)
#define EI2CFG          __UINT16__(0x40002428)
#define EICLR           __UINT16__(0x40002430)
#endif
/*----------------------------
Ext Interrupts Bit field definition
-----------------------------*/
typedef struct {
    unsigned IRQ0MDE        :3;
    unsigned IRQ0EN         :1;
    unsigned IRQ1MDE        :3;
    unsigned IRQ1EN         :1;
    unsigned IRQ2MDE        :3;
    unsigned IRQ2EN         :1;
    unsigned                :4;
} EI0CFGbits_t;

#define EI0CFGbits     (*(volatile EI0CFGbits_t *)EI0CFG)

typedef struct {
    unsigned IRQ4MDE        :3;
    unsigned IRQ4EN         :1;
    unsigned IRQ5MDE        :3;
    unsigned IRQ5EN         :1;
    unsigned                :4;
    unsigned IRQ7MDE        :3;
    unsigned IRQ7EN         :1;
} EI1CFGbits_t;

#define EI1CFGbits     (*(volatile EI1CFGbits_t *)EI1CFG)

typedef struct {
    unsigned IRQ8MDE        :3;
    unsigned IRQ8EN         :1;
    unsigned                :12;
} EI2CFGbits_t;

#define EI2CFGbits     (*(volatile EI2CFGbits_t *)EI2CFG)

typedef struct {
    unsigned IRQ0           :1;
    unsigned IRQ1           :1;
    unsigned IRQ2           :1;
    unsigned                :1;
    unsigned IRQ4           :1;
    unsigned IRQ5           :1;
    unsigned                :1;
    unsigned IRQ7           :1;
    unsigned IRQ8           :1;
    unsigned                :7;
} EICLRbits_t;

#define EICLRbits     (*(volatile EICLRbits_t *)EICLR)

/*----------------------------
Low Voltage Die Interrupt Byte Registers
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define INTCLR          __UINT16__(0x40083004)
#define INTSEL          __UINT16__(0x40083008)
#define INTSTA          __UINT16__(0x4008300C)
#endif

/*----------------------------
Low Voltage Die Interrupts Bit field definition
-----------------------------*/
typedef struct {
    unsigned CLR_ADC_SOFTCONV   :1;
    unsigned CLR_ADC_SEQ        :1;
    unsigned CLR_DCOMP          :1;
    unsigned CLR_ACOMP          :1;
    unsigned CLR_IDAC_TSHUT     :1;
    unsigned CLR_IDAC_EXTRESLOW :1;
    unsigned CLR_RDECC_ERR      :1;
    unsigned CLR_WRECC_ERR      :1;
} INTCLRbits_t;

#define INTCLRbits     (*(volatile INTCLRbits_t *)INTCLR)

typedef struct {
    unsigned SEL_ADC_SOFTCONV_1     :1;
    unsigned SEL_ADC_SEQ_1          :1;
    unsigned SEL_DCOMP_1            :1;
    unsigned SEL_ACOMP_1            :1;
    unsigned SEL_IDAC_TSHUT_1       :1;
    unsigned SLE_IDAC_EXTRESLOW_1   :1;
    unsigned SEL_RDECC_ERR_1        :1;
    unsigned SEL_WRECC_ERR_1        :1;
    unsigned SEL_ADC_SOFTCONV_0     :1;
    unsigned SEL_ADC_SEQ_0          :1;
    unsigned SEL_DCOMP_0            :1;
    unsigned SEL_ACOMP_0            :1;
    unsigned SEL_IDAC_TSHUT_0       :1;
    unsigned SLE_IDAC_EXTRESLOW_0   :1;
    unsigned SEL_RDECC_ERR_0        :1;
    unsigned SEL_WRECC_ERR_0        :1;
} INTSELbits_t;

#define INTSELbits     (*(volatile INTSELbits_t *)INTSEL)

typedef struct {
    unsigned ADC_SOFTCONV           :1;
    unsigned ADC_SEQ                :1;
    unsigned DCOMP                  :1;
    unsigned ACOMP                  :1;
    unsigned IDAC_TSHUT             :1;
    unsigned IDAC_EXTRESLOW         :1;
    unsigned RDECC_ERR              :1;
    unsigned WRECC_ERR              :1;
} INTSTAbits_t;

#define INTSTAbits     (*(volatile INTSTAbits_t *)INTSTA)

/*----------------------------
Reset Byte Registers
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define RSTCFG          __UINT16__(0x40002408)
#define RSTKEY          __UINT16__(0x4000240C)
#define RSTSTA          __UINT16__(0x40002440)
#define LVRST           __UINT16__(0x40082C34)
#endif

/*----------------------------
Reset Bit field definition
-----------------------------*/
typedef struct {
    unsigned GPIO_PLA_RETAIN    :1;
    unsigned                    :15;
} RSTCFGbits_t;

#define RSTCFGbits     (*(volatile RSTCFGbits_t *)RSTCFG)

typedef struct {
    unsigned RstKEY             :16;
} RSTKEYbits_t;

#define RSTKEYbits      (*(volatile RSTKEYbits_t *)RSTKEY)

typedef struct {
    unsigned POR            :1;
    unsigned EXTRST         :1;
    unsigned WDRST          :1;
    unsigned SWRST          :1;
    unsigned                :12; 
} RSTSTAbits_t;

#define RSTSTAbits      (*(volatile RSTSTAbits_t *)RSTSTA)

typedef struct {
    unsigned RETAIN             :1;
    unsigned                    :15;
} LVRSTbits_t;

#define LVRSTbits       (*(volatile LVARSTbits_t *)LVARST)

#endif