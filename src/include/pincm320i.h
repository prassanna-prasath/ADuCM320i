/* Header file
 * Description: Pin definitions for ADuCM320i
 * Author: Prassanna
 */


#ifndef PINCM320I_H_
#define PINCM320I_H_

/*----------------------------
Clock Byte Registers
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define CLKCON0     __UINT16__(0x40028000)
#define CLKCON1     __UINT16__(0x40028004)
#define CLKCON5     __UINT16__(0x40028014)
#define CLKSTAT0    __UINT16__(0x40028018)
#endif

/*----------------------------
Clock Bit field definition
-----------------------------*/

typedef struct {
    unsigned CLKMUX         :2;
    unsigned                :2;
    unsigned CLKOUT         :4;
    unsigned                :3;
    unsigned PLLMUX         :1;
    unsigned                :1;
    unsigned SPLLIE         :1;
    unsigned                :1;
    unsigned HFXTALIE       :1;
} CLKCON0bits_t;

#define CLKCON0bits     (*(volatile CLKCON0bits_t *)CLKCON0)

typedef struct {
    unsigned CDHCLK         :3;
    unsigned                :5;
    unsigned CDPCLK         :3;
    unsigned CDD2DCLK       :1;
    unsigned                :4;
} CLKCON1bits_t;

#define CLKCON1bits     (*(volatile CLKCON1bits_t *)CLKCON1)

typedef struct {
    unsigned UCLKSPI0OFF    :1;
    unsigned UCLKSPI1OFF    :1;
    unsigned                :1;
    unsigned UCLKI2C0OFF    :1;
    unsigned UCLKI2C1OFF    :1;
    unsigned UCLKUARTOFF    :1;
    unsigned                :10;
} CLKCON5bits_t;

#define CLKCON5bits     (*(volatile CLKCON5bits_t *)CLKCON5)

typedef struct {
    unsigned SPLLSTATUS     :1;
    unsigned SPLLLOCK       :1;
    unsigned SPLLUNLOCK     :1;
    unsigned                :9;
    unsigned HFXTALSTATUS   :1;
    unsigned HFXTALOK       :1;
    unsigned HFXTALNOK      :1;
    unsigned                :1;
} CLKSTAT0bits_t;

#define CLKSTAT0bits    (*(volatile CLKSTAT0bits_t *)CLKSTAT0)


/*----------------------------
PWR management Byte Registers
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define PWR_MOD     __UINT16__(0x40002400)
#define PWR_KEY     __UINT16__(0x40002404)
#endif

/*----------------------------
PWR management Bit field definition
-----------------------------*/

typedef struct {
    unsigned PWRMOD         :2;
    unsigned                :14;    
} PWRMODbits_t;

#define PWRMODbits      (*(volatile PWRMODbits_t *)PWR_MOD)

typedef struct {
    unsigned PWRKEY         :16;
} PWRKEYbits_t;

#define PWRKEYbits      (*(volatile PWRKEYbits_t *)PWR_KEY)

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
#define RST_KEY         __UINT16__(0x4000240C)
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
    unsigned RSTKEY             :16;
} RSTKEYbits_t;

#define RSTKEYbits      (*(volatile RSTKEYbits_t *)RST_KEY)

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

#define LVRSTbits       (*(volatile LVRSTbits_t *)LVRST)

/*----------------------------
DMA Byte Registers
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define DMASTA          __UINT32__(0x40010000)
#define DMACFG          __UINT32__(0x40010004)
#define DMAPDBPTR       __UINT32__(0x40010008)
#define DMAADBPTR       __UINT32__(0x4001000C)
#define DMASWREQ        __UINT32__(0x40010014)
#define DMARMSKSET      __UINT32__(0x40010020)
#define DMARMSKCLR      __UINT32__(0x40010024)
#define DMAENSET        __UINT32__(0x40010028)
#define DMAENCLR        __UINT32__(0x4001002C)
#define DMAALTSET       __UINT32__(0x40010030)
#define DMAALTCLR       __UINT32__(0x40010034)
#define DMAPRISET       __UINT32__(0x40010038)
#define DMAPRICLR       __UINT32__(0x4001003C)
#define DMAERRCLR       __UINT32__(0x4001004C)
#define DMABSSET        __UINT32__(0x40010800)
#define DMABSCLR        __UINT32__(0x40010804)
#endif

/*----------------------------
DMA Bit field Definitions
-----------------------------*/

typedef struct {
    unsigned MENABLE            :1;
    unsigned                    :3;
    unsigned STATE              :4;
    unsigned                    :8;
    unsigned CHNLSM1            :5;
    unsigned                    :11;
} DMASTAbits_t;

#define DMASTAbits      (*(volatile DMASTAbits_t *)DMASTA)

typedef struct {
    unsigned MENABLE            :1;
    unsigned                    :31;
} DMACFGbits_t;

#define DMACFGbits      (*(volatile DMACFGbits_t *)DMACFG)

typedef struct {
    unsigned CTRLBASEPTR        :32;
} DMAPDBPTRbits_t;

#define DMAPDBPTRbits   (*(volatile DMAPDBPTRbits_t *)DMAPDBPTR)

typedef struct {
    unsigned ALTCBPTR           :32;
} DMAADBPTRbits_t;

#define DMAADBPTRbits   (*(volatile DMAADBPTRbits_t *)DMAADBPTR)

typedef struct {
    unsigned CHSWREQ            :14;
    unsigned                    :8;
} DMASWREQbits_t;

#define DMASWREQbits    (*(volatile DMASWREQbits_t *)DMASWREQ)

typedef struct {
    unsigned CHREQMSET          :14;
    unsigned                    :8;
} DMARMSKSETbits_t;

#define DMARMSKSETbits  (*(volatile DMARMSKSETbits_t *)DMARMSKSET)

typedef struct {
    unsigned CHREQMCLR          :14;
    unsigned                    :8;
} DMARMSKCLRbits_t;

#define DMARMSKCLRbits  (*(volatile DMARMSKCLRbits_t *)DMARMSKCLR)

typedef struct {
    unsigned CHENSET            :14;
    unsigned                    :8;
} DMAENSETbits_t;

#define DMAENSETbits    (*(volatile DMAENSETbits_t *)DMAENSET)

typedef struct {
    unsigned CHENCLR            :14;
    unsigned                    :8;
} DMAENCLRbits_t;

#define DMAENCLRbits    (*(volatile DMAENCLRbits_t *)DMAENCLR)

typedef struct {
    unsigned CHPRIALTSET        :14;
    unsigned                    :8;
} DMAALTSETbits_t;

#define DMAALTSETbits   (*(volatile DMAALTSETbits_t *)DMAALTSET)

typedef struct {
    unsigned CHPRIALTCLR        :14;
    unsigned                    :8;
} DMAALTCLRbits_t;

#define DMAALTCLRbits   (*(volatile DMAALTCLRbits_t *)DMAALTCLR)

typedef struct {
    unsigned CHPRISET           :14;
    unsigned                    :8;
} DMAPRISETbits_t;

#define DMAPRISETbits   (*(volatile DMAPRISETbits_t *)DMAPRISET)

typedef struct {
    unsigned CHPRICLR           :14;
    unsigned                    :8;
} DMAPRICLRbits_t;

#define DMAPRICLRbits   (*(volatile DMAPRICLRbits_t *)DMAPRICLR)

typedef struct {
    unsigned ERRCLR             :14;
    unsigned                    :8;
} DMAERRCLRbits_t;

#define DMAERRCLRbits   (*(volatile DMAERRCLRbits_t *)DMAERRCLR)

typedef struct {
    unsigned CHBSWAPSET         :14;
    unsigned                    :8;
} DMABSSETbits_t;

#define DMABSSETbits    (*(volatile DMABSSETbits_t *)DMABSSET)

typedef struct {
    unsigned CHBSWAPCLR         :14;
    unsigned                    :8;
} DMABSCLRbits_t;

#define DMABSCLRbits    (*(volatile DMABSCLRbits_t *)DMABSCLR)

/*----------------------------
Flash Controller Byte Registers
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define FEESTA              __UINT32__(0x40018000)
#define FEECON0             __UINT32__(0x40018004)
#define FEECMD              __UINT32__(0x40018008)
#define FEEFLADR            __UINT32__(0x4001800C)
#define FEEFLDATA0          __UINT32__(0x40018010)
#define FEEFLDATA1          __UINT32__(0x40018014)
#define FEEADR0             __UINT32__(0x40018018)
#define FEEADR1             __UINT32__(0x4001801C)
#define FEEKEY              __UINT32__(0x40018020)
#define FEEPRO0             __UINT32__(0x40018028)
#define FEEPRO1             __UINT32__(0x4001802C)
#define FEESIG              __UINT32__(0x40018034)
#define FEECON1             __UINT32__(0x40018038)
#define FEEWRADDRA          __UINT32__(0x40018040)
#define FEEAEN0             __UINT32__(0x40018048)
#define FEEAEN1             __UINT32__(0x4001804C)
#define FEEECCCONFIG        __UINT32__(0x40018064)
#define FEEECCADDR0         __UINT32__(0x40018074)
#define FEEECCADDR1         __UINT32__(0x40018078)
#define CACHESTAT           __UINT32__(0x400180C0)
#define CACHESETUP          __UINT32__(0x400180C4)
#define CACHEKEY            __UINT32__(0x400180C8)
#endif

/*----------------------------
Flash Controller Bit field Definitions
-----------------------------*/
typedef struct {
    unsigned CMDBUSY            :1;
    unsigned WRCLOSE            :1;
    unsigned CMDDONE            :1;
    unsigned WRALMOSTDONE       :1;
    unsigned CMDRES             :2;
    unsigned                    :1;
    unsigned ECCERRCMD          :2;
    unsigned ECCREADERRFLSH0    :2;
    unsigned ECCREADERRFLSH1    :2;
    unsigned SIGNERR            :1;
    unsigned ECCERRSIGN         :3;
    unsigned ECCCOUNTFLASH      :3;
    unsigned                    :3;
    unsigned ECCCOUNTFLASH1     :3;
    unsigned ECCREADERRDBUS     :2;
    unsigned ECCREADERRIBUS     :2;
    unsigned                    :3;
} FEESTAbits_t;

#define FEESTAbits      (*(volatile FEESTAbits_t *)FEESTA)

typedef struct {
    unsigned IENCMD             :1;
    unsigned IWRALCOMP          :1;
    unsigned IENERR             :1;
    unsigned                    :29;
} FEECON0bits_t;

#define FEECON0bits      (*(volatile FEECON0bits_t *)FEECON0)

typedef struct {
    unsigned CMD                :5;
    unsigned                    :27;
} FEECMDbits_t;

#define FEECMDbits      (*(volatile FEECMDbits_t *)FEECMD)

typedef struct {
    unsigned                    :3;
    unsigned FLADDR             :16;
    unsigned                    :13;
} FEEFLADRbits_t;

#define FEEFLADRbits    (*(volatile FEEFLADRbits_t *)FEEFLADR)

typedef struct {
    unsigned FLDATA0            :32;
} FEEFLDATA0bits_t;

#define FEEFLDATA0bits  (*(volatile FEEFLDATA0bits_t *)FEEFLDATA0)

typedef struct {
    unsigned FLDATA1            :32;
} FEEFLDATA1bits_t;

#define FEEFLDATA1bits  (*(volatile FEEFLDATA1bits_t *)FEEFLDATA1)

typedef struct {
    unsigned                    :11;
    unsigned PAGEADDR0          :8;
    unsigned                    :13;
} FEEADR0bits_t;

#define FEEADR0bits     (*(volatile FEEADR0bits_t *)FEEADR0)

typedef struct {
    unsigned                    :11;
    unsigned PAGEADDR1          :8;
    unsigned                    :13;
} FEEADR1bits_t;

#define FEEADR1bits     (*(volatile FEEADR1bits_t *)FEEADR1)

typedef struct {
    unsigned KEY                :32;
} FEEKEYbits_t;

#define FEEKEYbits      (*(volatile FEEKEYbits_t *)FEEKEY)

typedef struct {
    unsigned WRPROT0            :32;
} FEEPRO0bits_t;

#define FEEPRO0bits     (*(volatile FEEPRO0bits_t *)FEEPRO0)

typedef struct {
    unsigned SIGN               :24;
    unsigned                    :8;
} FEESIGbits_t;

#define FEESIGbits      (*(volatile FEESIGbits_t *)FEESIG)

typedef struct {
    unsigned DBG                :1;
    unsigned KHDMA              :1;
    unsigned INCR               :1;
    unsigned SWAP               :1;
    unsigned MDIO               :1;
    unsigned                    :27;
} FEECON1bits_t;

#define FEECON1bits     (*(volatile FEECON1bits_t *)FEECON1)

typedef struct {
    unsigned WRABORTADDR        :32;
} FEEWRADDRAbits_t;

#define FEEWRADDRAbits  (*(volatile FEEWRADDRAbits_t *)FEEWRADDRA)

typedef struct {
    unsigned SYSIRQABORTEN      :32;
} FEEAEN0bits_t;

#define FEEAEN0bits     (*(volatile FEEAEN0bits_t *)FEEAEN0)

typedef struct {
    unsigned SYSIRQABORTEN      :32;
} FEEAEN1bits_t;

#define FEEAEN1bits     (*(volatile FEEAEN1bits_t *)FEEAEN1)

typedef struct {
    unsigned ECCDISABLE         :1;
    unsigned ECCCMDAHBEN        :2;
    unsigned ECCCMDINTEN        :2;
    unsigned                    :27;
} FEEECCCONFIGbits_t;

#define FEEECCCONFIGbits    (*(volatile FEEECCCONFIGbits_t *)FEEECCCONFIG)

typedef struct {
    unsigned VALUE              :19;
    unsigned                    :13;
} FEEECCADDR0bits_t;

#define FEEECCADDR0bits (*(volatile FEEECCADDR0bits_t *)FEEECCADDR0)

typedef struct {
    unsigned VALUE              :19;
    unsigned                    :13;
} FEEECCADDR1bits_t;

#define FEEECCADDR1bits (*(volatile FEEECCADDR1bits_t *)FEEECCADDR1)

typedef struct {
    unsigned IINIT              :1;
    unsigned IEN                :1;
    unsigned ILOCK              :1;
    unsigned                    :12;
    unsigned DINIT              :1;
    unsigned DEN                :1;
    unsigned DLOCK              :1;
    unsigned                    :12;
} CACHESTATbits_t;

#define CACHESTATbits   (*(volatile CACHESTATbits_t *)CACHESTAT)

typedef struct {
    unsigned IINIT              :1;
    unsigned IEN                :1;
    unsigned ILOCK              :1;
    unsigned IWRBUF             :1;
    unsigned IRDBUF             :1;
    unsigned                    :11;
    unsigned DINIT              :1;
    unsigned DEN                :1;
    unsigned DLOCK              :1;
    unsigned DWRBUF             :1;
    unsigned                    :21;
} CACHESETUPbits_t;

#define CACHESETUPbits  (*(volatile CACHESETUPbits_t *)CACHESETUP)

typedef struct {
    unsigned KEY                :32;
} CACHEKEYbits_t;

#define CACHEKEYbits    (*(volatile CACHEKEYbits_t *)CACHEKEY)


#endif