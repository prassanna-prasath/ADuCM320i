/* Header file
 * Description: Pin definitions for ADuCM320i
 * Author: Prassanna
 */


#ifndef PINCM320I_H_
#define PINCM320I_H_

//Macros for boolean
#define ON                          1
#define HI                          1
#define OFF                         0
#define LO                          0 

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
    #define PWR_MOD         __UINT16__(0x40002400)
    #define PWR_KEY         __UINT16__(0x40002404)
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
    #define ADCCON          __UINT16__(0x40082174)
    #define ADCDAT0         __UINT32__(0x40086000)
    #define ADCDAT1         __UINT32__(0x40086004)
    #define ADCDAT2         __UINT32__(0x40086008)
    #define ADCDAT3         __UINT32__(0x4008600C)
    #define ADCDAT4         __UINT32__(0x40086010)
    #define ADCDAT5         __UINT32__(0x40086014)
    #define ADCDAT6         __UINT32__(0x40086018)
    #define ADCDAT7         __UINT32__(0x4008601C)
    #define ADCDAT8         __UINT32__(0x40086020)
    #define ADCDAT9         __UINT32__(0x40086024)
    #define ADCDAT10        __UINT32__(0x40086028)
    #define ADCDAT11        __UINT32__(0x4008602C)
    #define ADCDAT12        __UINT32__(0x40086030)
    #define ADCDAT13        __UINT32__(0x40086034)
    #define ADCDAT14        __UINT32__(0x40086038)
    #define ADCDAT15        __UINT32__(0x4008603C)
    #define ADCDAT16        __UINT32__(0x40086040)
    #define ADCDAT17        __UINT32__(0x40086044)
    #define ADCDAT18        __UINT32__(0x40086048)
    #define ADCDAT19        __UINT32__(0x4008604C)
    #define ADCDAT20        __UINT32__(0x40086050)
    #define ADCDAT21        __UINT32__(0x40086054)
    #define ADCDAT22        __UINT32__(0x40086058)
    #define ADCDAT23        __UINT32__(0x4008605C)
    #define ADCDAT24        __UINT32__(0x40086060)
    #define ADCDAT25        __UINT32__(0x40086064)
    #define ADCDAT26        __UINT32__(0x40086068)
    #define ADCDAT27        __UINT32__(0x4008606C)
    #define ADCCHA          __UINT16__(0x40086080)
    #define ADCSEQ          __UINT32__(0x40086088)
    #define ADCSEQC         __UINT32__(0x4008608C)
    #define ADCCMP          __UINT32__(0x40086098)
    #define ADCCNVC         __UINT32__(0x4008609C)
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

/*----------------------------
Si Verification Byte Registers
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#define CHIPID              __UINT16__(0x40002024)
#define LV_ID                __UINT16__(0x40082C30)
#endif

/*----------------------------
Si Verification Bit field definition
-----------------------------*/

typedef struct {
    unsigned REV            :4;
    unsigned PARTID         :12;
} CHIPIDbits_t;

#define CHIPIDbits      (*(volatile CHIPIDbits_t *)CHIPID)

typedef struct {
    unsigned LVREV          :4;
    unsigned LVID           :12;   
} LVIDbits_t;

#define LVIDbits        (*(volatile LVIDbits_t *)LVID)

/*----------------------------
GPIO Byte Registers
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
    #define GP0CON              __UINT16__(0x40020000)
    #define GP1CON              __UINT16__(0x40020040)
    #define GP2CON              __UINT16__(0x40020080)
    #define GP3CON              __UINT16__(0x400200C0)
    #define GP4CON              __UINT16__(0x40020100)
    #define GP5CON              __UINT16__(0x40020140)
    /*-------*/
    #define GP0OE               __UINT8__(0x40020004)
    #define GP1OE               __UINT8__(0x40020044)
    #define GP2OE               __UINT8__(0x40020084)
    #define GP3OE               __UINT8__(0x400200C4)
    #define GP4OE               __UINT8__(0x40020104)
    #define GP5OE               __UINT8__(0x40020144)
    /*-------*/
    #define GP0PUL              __UINT8__(0x40020008)
    #define GP1PUL              __UINT8__(0x40020048)
    #define GP2PUL              __UINT8__(0x40020088)
    #define GP3PUL              __UINT8__(0x400200C8)
    #define GP4PUL              __UINT8__(0x40020108)
    #define GP5PUL              __UINT8__(0x40020148)
    /*-------*/
    #define GP0IE               __UINT8__(0x4002000C)
    #define GP1IE               __UINT8__(0x4002004C)
    #define GP2IE               __UINT8__(0x4002008C)
    #define GP3IE               __UINT8__(0x400200CC)
    #define GP4IE               __UINT8__(0x4002010C)
    #define GP5IE               __UINT8__(0x4002014C)
    /*-------*/
    #define GP0IN               __UINT8__(0x40020010)
    #define GP1IN               __UINT8__(0x40020050)
    #define GP2IN               __UINT8__(0x40020090)
    #define GP3IN               __UINT8__(0x400200D0)
    #define GP4IN               __UINT8__(0x40020110)
    #define GP5IN               __UINT8__(0x40020150)
    /*-------*/
    #define GP0OUT              __UINT8__(0x40020014)
    #define GP0OUT              __UINT8__(0x40020014)
    #define GP1OUT              __UINT8__(0x40020054)
    #define GP2OUT              __UINT8__(0x40020094)
    #define GP3OUT              __UINT8__(0x400200D4)
    #define GP4OUT              __UINT8__(0x40020114)
    #define GP5OUT              __UINT8__(0x40020154)
    /*-------*/
    #define GP0SET              __UINT8__(0x40020018)
    #define GP1SET              __UINT8__(0x40020058)
    #define GP2SET              __UINT8__(0x40020098)
    #define GP3SET              __UINT8__(0x400200D8)
    #define GP4SET              __UINT8__(0x40020118)
    #define GP5SET              __UINT8__(0x40020158)
    /*-------*/
    #define GP0CLR              __UINT8__(0x4002001C)
    #define GP1CLR              __UINT8__(0x4002005C)
    #define GP2CLR              __UINT8__(0x4002009C)
    #define GP3CLR              __UINT8__(0x400200DC)
    #define GP4CLR              __UINT8__(0x4002011C)
    #define GP5CLR              __UINT8__(0x4002015C)
    /*-------*/
    #define GP0TGL              __UINT8__(0x40020020)
    #define GP1TGL              __UINT8__(0x40020060)
    #define GP2TGL              __UINT8__(0x400200A0)
    #define GP3TGL              __UINT8__(0x400200E0)
    #define GP4TGL              __UINT8__(0x40020120)
    #define GP5TGL              __UINT8__(0x40020160)
    /*-------*/
    #define GP0ODE              __UINT8__(0x40020024)
    #define GP1ODE              __UINT8__(0x40020064)
    #define GP2ODE              __UINT8__(0x400200A4)
    #define GP3ODE              __UINT8__(0x400200E4)
    #define GP4ODE              __UINT8__(0x40020124)
    #define GP5ODE              __UINT8__(0x40020164)
#endif

/*----------------------------
GPIO Byte Registers
-----------------------------*/
typedef struct {
    unsigned CON0           :2;
    unsigned CON1           :2;
    unsigned CON2           :2;
    unsigned CON3           :2;
    unsigned CON4           :2;
    unsigned CON5           :2;
    unsigned CON6           :2;
    unsigned CON7           :2;    
} GPxCONbits_t;

#define GP0CONbits      (*(volatile GPxCONbits_t *)GP0CON)
#define GP1CONbits      (*(volatile GPxCONbits_t *)GP1CON)
#define GP2CONbits      (*(volatile GPxCONbits_t *)GP2CON)
#define GP3CONbits      (*(volatile GPxCONbits_t *)GP3CON)
#define GP4CONbits      (*(volatile GPxCONbits_t *)GP4CON)
#define GP5CONbits      (*(volatile GPxCONbits_t *)GP5CON)

typedef struct {
    unsigned OE             :8;
} GPxOEbits_t;

#define GP0OEbits       (*(volatile GPxOEbits_t *)GP0OE)
#define GP1OEbits       (*(volatile GPxOEbits_t *)GP1OE)
#define GP2OEbits       (*(volatile GPxOEbits_t *)GP2OE)
#define GP3OEbits       (*(volatile GPxOEbits_t *)GP3OE)
#define GP4OEbits       (*(volatile GPxOEbits_t *)GP4OE)
#define GP5OEbits       (*(volatile GPxOEbits_t *)GP5OE)

typedef struct {
    unsigned PUL            :8;
} GPxPULbits_t;

/*Pull ups*/
#define GP0PULbits      (*(volatile GPxPULbits_t *)GP0PUL)
#define GP1PULbits      (*(volatile GPxPULbits_t *)GP1PUL)
#define GP2PULbits      (*(volatile GPxPULbits_t *)GP2PUL)
#define GP3PULbits      (*(volatile GPxPULbits_t *)GP3PUL)
/*Pull downs*/
#define GP4PULbits      (*(volatile GPxPULbits_t *)GP4PUL)
#define GP5PULbits      (*(volatile GPxPULbits_t *)GP5PUL)

typedef struct {
    unsigned IEN            :8; 
} GPxIEbits_t;

#define GP0IEbits       (*(volatile GPxIEbits_t *)GP0IE)
#define GP1IEbits       (*(volatile GPxIEbits_t *)GP1IE)
#define GP2IEbits       (*(volatile GPxIEbits_t *)GP2IE)
#define GP3IEbits       (*(volatile GPxIEbits_t *)GP3IE)
#define GP4IEbits       (*(volatile GPxIEbits_t *)GP4IE)
#define GP5IEbits       (*(volatile GPxIEbits_t *)GP5IE)

typedef struct {
    unsigned IN             :8;
} GPxINbits_t;

#define GP0INbits       (*(volatile GPxINbits_t *)GP0IN)
#define GP1INbits       (*(volatile GPxINbits_t *)GP1IN)
#define GP2INbits       (*(volatile GPxINbits_t *)GP2IN)
#define GP3INbits       (*(volatile GPxINbits_t *)GP3IN)
#define GP4INbits       (*(volatile GPxINbits_t *)GP4IN)
#define GP5INbits       (*(volatile GPxINbits_t *)GP5IN)

typedef struct {
    unsigned OUT            :8;
} GPxOUTbits_t;

#define GP0OUTbits      (*(volatile GPxOUTbits_t *)GP0OUT)
#define GP1OUTbits      (*(volatile GPxOUTbits_t *)GP1OUT)
#define GP2OUTbits      (*(volatile GPxOUTbits_t *)GP2OUT)
#define GP3OUTbits      (*(volatile GPxOUTbits_t *)GP3OUT)
#define GP4OUTbits      (*(volatile GPxOUTbits_t *)GP4OUT)
#define GP5OUTbits      (*(volatile GPxOUTbits_t *)GP5OUT)

typedef struct {
    unsigned CLR            :8;
} GPxCLRbits_t;

#define GP0CLRbits      (*(volatile GPxCLRbits_t *)GP0CLR)
#define GP1CLRbits      (*(volatile GPxCLRbits_t *)GP1CLR)
#define GP2CLRbits      (*(volatile GPxCLRbits_t *)GP2CLR)
#define GP3CLRbits      (*(volatile GPxCLRbits_t *)GP3CLR)
#define GP4CLRbits      (*(volatile GPxCLRbits_t *)GP4CLR)
#define GP5CLRbits      (*(volatile GPxCLRbits_t *)GP5CLR)

typedef struct {
    unsigned TGL            :8;
} GPxTGLbits_t;

#define GP0TGLbits      (*(volatile GPxTGLbits_t *)GP0TGL)
#define GP1TGLbits      (*(volatile GPxTGLbits_t *)GP1TGL)
#define GP2TGLbits      (*(volatile GPxTGLbits_t *)GP2TGL)
#define GP3TGLbits      (*(volatile GPxTGLbits_t *)GP3TGL)
#define GP4TGLbits      (*(volatile GPxTGLbits_t *)GP4TGL)
#define GP5TGLbits      (*(volatile GPxTGLbits_t *)GP5TGL)

typedef struct {
    unsigned ODE            :8;
} GPxODEbits_t;

#define GP0ODEbits      (*(volatile GPxODEbits_t *)GP0ODE)
#define GP1ODEbits      (*(volatile GPxODEbits_t *)GP1ODE)
#define GP2ODEbits      (*(volatile GPxODEbits_t *)GP2ODE)
#define GP3ODEbits      (*(volatile GPxODEbits_t *)GP3ODE)
#define GP4ODEbits      (*(volatile GPxODEbits_t *)GP4ODE)
#define GP5ODEbits      (*(volatile GPxODEbits_t *)GP5ODE)

/*----------------------------
I2C0 Byte Registers
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
    #define I2C0MCON            __UINT16__(0x40003000)
    #define I2C0MSTA            __UINT16__(0x40003004)
    #define I2C0MRX             __UINT16__(0x40003008)
    #define I2C0MTX             __UINT16__(0x4000300C)
    #define I2C0MRXCNT          __UINT16__(0x40003010)
    #define I2C0MCRXCNT         __UINT16__(0x40003014)
    #define I2C0ADR0            __UINT16__(0x40003018)
    #define I2C0ADR1            __UINT16__(0x4000301C)
    #define I2C0DIV             __UINT16__(0x40003024)
    #define I2C0SCON            __UINT16__(0x40003028)
    #define I2C0SSTA            __UINT16__(0x4000302C)
    #define I2C0SRX             __UINT16__(0x40003030)
    #define I2C0STX             __UINT16__(0x40003034)
    #define I2C0ALT             __UINT16__(0x40003038)
    #define I2C0ID0             __UINT16__(0x4000303C)
    #define I2C0ID1             __UINT16__(0x40003040)
    #define I2C0ID2             __UINT16__(0x40003044)
    #define I2C0ID3             __UINT16__(0x40003048)
    #define I2C0FSTA            __UINT16__(0x4000304C)
    #define I2C0SHCON           __UINT16__(0x40003050)
    #define I2C0ASSCL           __UINT16__(0x40003058)
#endif

/*----------------------------
I2C1 Byte Registers
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
    #define I2C1MCON            __UINT16__(0x40003400)
    #define I2C1MSTA            __UINT16__(0x40003404)
    #define I2C1MRX             __UINT16__(0x40003408)
    #define I2C1MTX             __UINT16__(0x4000340C)
    #define I2C1MRXCNT          __UINT16__(0x40003410)
    #define I2C1MCRXCNT         __UINT16__(0x40003414)
    #define I2C1ADR0            __UINT16__(0x40003418)
    #define I2C1ADR1            __UINT16__(0x4000341C)
    #define I2C1DIV             __UINT16__(0x40003424)
    #define I2C1SCON            __UINT16__(0x40003428)
    #define I2C1SSTA            __UINT16__(0x4000342C)
    #define I2C1SRX             __UINT16__(0x40003430)
    #define I2C1STX             __UINT16__(0x40003434)
    #define I2C1ALT             __UINT16__(0x40003438)
    #define I2C1ID0             __UINT16__(0x4000343C)
    #define I2C1ID1             __UINT16__(0x40003440)
    #define I2C1ID2             __UINT16__(0x40003444)
    #define I2C1ID3             __UINT16__(0x40003448)
    #define I2C1FSTA            __UINT16__(0x4000344C)
    #define I2C1SHCON           __UINT16__(0x40003450)
    #define I2C1ASSCL           __UINT16__(0x40003458)
#endif

/*----------------------------
I2C0/1 Bit field definitions
-----------------------------*/
typedef struct {
    unsigned MASEN              :1;
    unsigned COMPETE            :1;
    unsigned LOOPBACK           :1;
    unsigned                    :1;
    unsigned IENMRX             :1;
    unsigned IENMTX             :1;
    unsigned IENALOST           :1;
    unsigned IENACK             :1;
    unsigned IENCMP             :1;
    unsigned                    :1;
    unsigned MRXDMA             :1;
    unsigned MTXDMA             :1;
    unsigned                    :1;
} I2CxMCONbits_t;

#define I2C0MCONbits    (*(volatile I2CxMCONbits_t *)I2C0MCON)
#define I2C1MCONbits    (*(volatile I2CxMCONbits_t *)I2C1MCON)

typedef struct {
    unsigned MTXFSTA            :2;
    unsigned MTXREQ             :1;
    unsigned MRXREQ             :1;
    unsigned NACKADDR           :1;
    unsigned ALOST              :1;
    unsigned MBUSY              :1;
    unsigned NACKDATA           :1;
    unsigned TCOMP              :1;
    unsigned MRXOF              :1;
    unsigned LINEBUSY           :1;
    unsigned MSTOP              :1;
    unsigned MTXUFLOW           :1;
    unsigned SDA_FILTERED       :1;
    unsigned SCL_FILTERED       :1;
    unsigned                    :1;
} I2CxMSTAbits_t;

#define I2C0MSTAbits    (*(volatile I2CxMSTAbits_t *)I2C0MSTA)
#define I2C1MSTAbits    (*(volatile I2CxMSTAbits_t *)I2C1MSTA)

typedef struct {
    unsigned ICMRX              :8;
    unsigned                    :8;
} I2CxMRXbits_t;

#define I2C0MRXbits     (*(volatile I2CxMRXbits_t *)I2C0MRX)
#define I2C1MRXbits     (*(volatile I2CxMRXbits_t *)I2C1MRX)

typedef struct {
    unsigned ICMTX              :8;
    unsigned                    :8;
} I2CxMTXbits_t;

#define I2C0MTXbits     (*(volatile I2CxMTXbits_t *)I2C0MTX)
#define I2C1MTXbits     (*(volatile I2CxMTXbits_t *)I2C1MTX)

typedef struct {
    unsigned COUNT              :8;
    unsigned EXTEND             :1;
    unsigned                    :7;
} I2CxMRXCNTbits_t;

#define I2C0MRXCNTbits  (*(volatile I2CxMRXCNTbits_t *)I2C0MRXCNT)
#define I2C1MRXCNTbits  (*(volatile I2CxMRXCNTbits_t *)I2C1MRXCNT)

typedef struct {
    unsigned COUNT              :8;
    unsigned                    :8;
} I2CxMCRXCNTbits_t;

#define I2C0MCRXCNTbits (*(volatile I2CxMCRXCNTbits_t *)I2C0MCRXCNT)
#define I2C1MCRXCNTbits (*(volatile I2CxMCRXCNTbits_t *)I2C1MCRXCNT)

typedef struct {
    unsigned ADR0               :8;
    unsigned                    :8;
} I2CxADR0bits_t;

#define I2C0ADR0bits    (*(volatile I2CxADR0bits_t *)I2C0ADR0)
#define I2C1ADR0bits    (*(volatile I2CxADR0bits_t *)I2C1ADR0)

typedef struct {
    unsigned ADR1               :8;
    unsigned                    :8;
} I2CxADR1bits_t;

#define I2C0ADR1bits    (*(volatile I2CxADR0bits_t *)I2C0ADR1)
#define I2C1ADR1bits    (*(volatile I2CxADR0bits_t *)I2C1ADR1)

typedef struct {
    unsigned LOW                :8;
    unsigned HIGH               :8;
} I2CxDIVbits_t;

#define I2C0DIVbits     (*(volatile I2CxDIVbits_t *)I2C0DIV)
#define I2C1DIVbits     (*(volatile I2CxDIVbits_t *)I2C1DIV)

typedef struct {
    unsigned SLVEN              :1;
    unsigned ADR10EN            :1;
    unsigned GCEN               :1;
    unsigned HGCEN              :1;
    unsigned GCSBCLR            :1;
    unsigned EARLYTXR           :1;
    unsigned                    :1;
    unsigned NACK               :1;
    unsigned IENSTOP            :1;
    unsigned IENSRX             :1;
    unsigned IENSTX             :1;
    unsigned                    :1;
    unsigned IENREPST           :1;
    unsigned SRXDMA             :1;
    unsigned STXDMA             :1;
    unsigned                    :1;
} I2CxSCONbits_t;

#define I2C0SCONbits    (*(volatile I2CxSCONbits_t *)I2C0SCON)
#define I2C1SCONbits    (*(volatile I2CxSCONbits_t *)I2C1SCON)

typedef struct {
    unsigned STXFSEREQ          :1;
    unsigned STXUR              :1;
    unsigned STXREQ             :1;
    unsigned SRXREQ             :1;
    unsigned SRXOF              :1;
    unsigned NOACK              :1;
    unsigned SBUSY              :1;
    unsigned GCINT              :1;
    unsigned GCID               :2;
    unsigned STOP               :1;
    unsigned IDMAT              :2;
    unsigned REPSTART           :1;
    unsigned START              :1;
    unsigned                    :1;
} I2CxSSTAbits_t;

#define I2C0SSTAbits    (*(volatile I2CxSSTAbits_t *)I2C0SSTA)
#define I2C1SSTAbits    (*(volatile I2CxSSTAbits_t *)I2C1SSTA)

typedef struct {
    unsigned ICSRX              :8;
    unsigned                    :8;
} I2CxSRXbits_t;

#define I2C0SRXbits     (*(volatile I2CxSRXbits_t *)I2C0SRX)
#define I2C1SRXbits     (*(volatile I2CxSRXbits_t *)I2C1SRX)

typedef struct {
    unsigned ICSTX              :8;
    unsigned                    :8;
} I2CxSTXbits_t;

#define I2C0STXbits     (*(volatile I2CxSTXbits_t *)I2C0STX)
#define I2C1STXbits     (*(volatile I2CxSTXbits_t *)I2C1STX)

typedef struct {
    unsigned ALT                :8;
    unsigned                    :8;
} I2CxALTbits_t;

#define I2C0ALTbits     (*(volatile I2CxALTbits_t *)I2C0ALT)
#define I2C1ALTbits     (*(volatile I2CxALTbits_t *)I2C1ALT)

typedef struct {
    unsigned ID0                :8;
    unsigned                    :8;
} I2CxID0bits_t;

#define I2C0ID0bits     (*(volatile I2CxID0bits_t *)I2C0ID0)
#define I2C1ID0bits     (*(volatile I2CxID0bits_t *)I2C1ID0)

typedef struct {
    unsigned ID1                :8;
    unsigned                    :8;
} I2CxID1bits_t;

#define I2C0ID1bits     (*(volatile I2CxID1bits_t *)I2C0ID1)
#define I2C1ID1bits     (*(volatile I2CxID1bits_t *)I2C1ID1)

typedef struct {
    unsigned ID2                :8;
    unsigned                    :8;
} I2CxID2bits_t;

#define I2C0ID2bits     (*(volatile I2CxID2bits_t *)I2C0ID2)
#define I2C1ID2bits     (*(volatile I2CxID2bits_t *)I2C1ID2)

typedef struct {
    unsigned ID3                :8;
    unsigned                    :8;
} I2CxID3bits_t;

#define I2C0ID3bits     (*(volatile I2CxID3bits_t *)I2C0ID3)
#define I2C1ID3bits     (*(volatile I2CxID3bits_t *)I2C1ID3)

typedef struct {
    unsigned STXFSTA            :2;
    unsigned SRXFSTA            :2;
    unsigned MTXFSTA            :2;
    unsigned MRXFSTA            :2;
    unsigned SFLUSH             :1;
    unsigned MFLUSH             :1;
    unsigned                    :6;
} I2CxFSTAbits_t;

#define I2C0FSTAbits    (*(volatile I2CxFSTAbits_t *)I2C0FSTA)
#define I2C1FSTAbits    (*(volatile I2CxFSTAbits_t *)I2C1FSTA)

typedef struct {
    unsigned RESET              :1;
    unsigned                    :15;
} I2CxSHCONbits_t;

#define I2C0SHCONbits   (*(volatile I2CxSHCONbits_t *)I2C0SHCON)
#define I2C1SHCONbits   (*(volatile I2CxSHCONbits_t *)I2C1SHCON)

typedef struct {
    unsigned MSTRCON            :4;
    unsigned SSTRCON            :4;
    unsigned MSTRTSTA           :1;
    unsigned SSRTSTA            :1;
    unsigned                    :6;
} I2CxASSCLbits_t;

#define I2C0ASSCLbits   (*(volatile I2CxASSCLbits_t *)I2C0ASSCL)
#define I2C1ASSCLbits   (*(volatile I2CxASSCLbits_t *)I2C1ASSCL)

/*----------------------------
SPI0 Byte Registers
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
    #define SPI0STA             __UINT16__(0x4002C000)
    #define SPI0RX              __UINT16__(0x4002C004)
    #define SPI0TX              __UINT16__(0x4002C008)
    #define SPI0DIV             __UINT16__(0x4002C00C)
    #define SPI0CON             __UINT16__(0x4002C010)
    #define SPI0DMA             __UINT16__(0x4002C014)
    #define SPI0CNT             __UINT16__(0x4002C018)
#endif

/*----------------------------
SPI1 Byte Registers
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
    #define SPI1STA             __UINT16__(0x40030000)
    #define SPI1RX              __UINT16__(0x40030004)
    #define SPI1TX              __UINT16__(0x40030008)
    #define SPI1DIV             __UINT16__(0x4003000C)
    #define SPI1CON             __UINT16__(0x40030010)
    #define SPI1DMA             __UINT16__(0x40030014)
    #define SPI1CNT             __UINT16__(0x40030018)
#endif

/*----------------------------
SPI0/1 Bit field definitions
-----------------------------*/
typedef struct {
    unsigned IRQ                :1;
    unsigned TXFSTA             :3;
    unsigned TXUR               :1;
    unsigned TX                 :1;
    unsigned RX                 :1;
    unsigned RXOF               :1;
    unsigned RXFSTA             :3;
    unsigned RXS                :1;
    unsigned CSERR              :1;
    unsigned CSFLG              :1;
    unsigned CSRSG              :1;
    unsigned                    :1;      
} SPIxSTAbits_t;

#define SPI0STAbits     (*(volatile SPIxSTAbits_t *)SPI0STA)
#define SPI1STAbits     (*(volatile SPIxSTAbits_t *)SPI1STA)

typedef struct {
    unsigned DATA_BYTE_1        :8;
    unsigned DMA_DATA_BYTE_2    :8;
} SPIxRXbits_t;

#define SPI0RXbits      (*(volatile SPIxRXbits_t *)SPI0RX)
#define SPI1RXbits      (*(volatile SPIxRXbits_t *)SPI1RX)

typedef struct {
    unsigned DATA_BYTE_1        :8;
    unsigned DMA_DATA_BYTE2     :8;
} SPIxTXbits_t;

#define SPI0TXbits      (*(volatile SPIxTXbits_t *)SPI0TX)
#define SPI1TXbits      (*(volatile SPIxTXbits_t *)SPI1TX)

typedef struct {
    unsigned DIV                :6;
    unsigned HFM                :1;
    unsigned BCRST              :1;
    unsigned CSIRQ_EN           :1;
    unsigned                    :7;
} SPIxDIVbits_t;

#define SPI0DIVbits     (*(volatile SPIxDIVbits_t *)SPI0DIV)
#define SPI1DIVbits     (*(volatile SPIxDIVbits_t *)SPI1DIV)

typedef struct {
    unsigned ENABLE             :1;
    unsigned MASEN              :1;
    unsigned CPHA               :1;
    unsigned CPOL               :1;
    unsigned WOM                :1;
    unsigned LSB                :1;
    unsigned TIM                :1;
    unsigned ZEN                :1;
    unsigned RXOF               :1;
    unsigned OEN                :1;
    unsigned LOOPBACK           :1;
    unsigned CON                :1;
    unsigned RFLUSH             :1;
    unsigned TFLUSH             :1;
    unsigned MOD                :2;
} SPIxCONbits_t;

#define SPI0CONbits     (*(volatile SPIxCONbits_t *)SPI0CON)
#define SPI1CONbits     (*(volatile SPIxCONbits_t *)SPI1CON)

typedef struct {
    unsigned ENABLE             :1;
    unsigned IENTXDMA           :1;
    unsigned IENRXDMA           :1;
    unsigned                    :13;
} SPIxDMAbits_t;

#define SPI0DMAbits     (*(volatile SPIxDMAbits_t *)SPI0DMA)
#define SPI1DMAbits     (*(volatile SPIxDMAbits_t *)SPI1DMA)

typedef struct {
    unsigned COUNT              :8;
    unsigned                    :8;
} SPIxCNTbits_t;

#define SPI0CNTbits     (*(volatile SPIxCNTbits_t *)SPI0CNT)
#define SPI1CNTbits     (*(volatile SPIxCNTbits_t *)SPI1CNT)

/*----------------------------
UART Byte Registers
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
    #define COMTX               __UINT16__(0x40005000)
    #define COMRX               __UINT16__(0x40005000)
    #define COMIEN              __UINT16__(0x40005004)
    #define COMIIR              __UINT16__(0x40005008)
    #define COMLCR              __UINT16__(0x4000500C)
    #define COMMCR              __UINT16__(0x40005010)
    #define COMLSR              __UINT16__(0x40005014)
    #define COMMSR              __UINT16__(0x40005018)
    #define COMSCR              __UINT16__(0x4000501C)
    #define COMFBR              __UINT16__(0x40005024)
    #define COMDIV              __UINT16__(0x40005028)
#endif

/*----------------------------
UART Bit field definitions
-----------------------------*/
typedef struct {
    unsigned THR            :8;
    unsigned                :8;
} COMTXbits_t;

#define COMTXbits       (*(volatile COMTXbits_t *)COMTX)

typedef struct {
    unsigned RBR            :8;
    unsigned                :8;
} COMRXbits_t;

#define COMRXbits       (*(volatile COMRXbits_t *)COMRX)

typedef struct {
    unsigned ERBFI          :1;
    unsigned ETBEI          :1;
    unsigned ELSI           :1;
    unsigned EDSSI          :1;
    unsigned EDMAT          :1;
    unsigned EDMAR          :1;
    unsigned                :10;
} COMIENbits_t;

#define COMIENbits      (*(volatile COMIENbits_t *)COMIEN)

typedef struct {
    unsigned NIRQ           :1;
    unsigned STA            :2;
    unsigned                :13;
} COMIIRbits_t;

#define COMIIRbits      (*(volatile COMIIRbits_t *)COMIIR)

typedef struct {
    unsigned WLS            :2;
    unsigned STOP           :1;
    unsigned PEN            :1;
    unsigned EPS            :1;
    unsigned SP             :1;
    unsigned BRK            :1;
    unsigned                :9;
} COMLCRbits_t;

#define COMLCRbits      (*(volatile COMLCRbits_t *)COMLCR)

typedef struct {
    unsigned DTR            :1;
    unsigned RTS            :1;
    unsigned OUT1           :1;
    unsigned OUT2           :1;
    unsigned LOOPBACK       :1;
    unsigned                :11;
} COMMCRbits_t;

#define COMMCRbits      (*(volatile COMMCRbits_t *)COMMCR)

typedef struct {
    unsigned DR             :1;
    unsigned OE             :1;
    unsigned PE             :1;
    unsigned FE             :1;
    unsigned BI             :1;
    unsigned THRE           :1;
    unsigned TEMT           :1;
    unsigned                :9;
} COMLSRbits_t;

#define COMLSRbits      (*(volatile COMLSRbits_t *)COMLSR)

typedef struct {
    unsigned DCTS           :1;
    unsigned DDSR           :1;
    unsigned TERI           :1;
    unsigned DDCD           :1;
    unsigned CTS            :1;
    unsigned DSR            :1;
    unsigned RI             :1;
    unsigned DCD            :1;
    unsigned                :8;
} COMMSRbits_t;

#define COMMSRbits      (*(volatile COMMSRbits_t *)COMMSR)

typedef struct {
    unsigned SCR            :8;
    unsigned                :8;
} COMSCRbits_t;

#define COMSCRbits      (*(volatile COMSCRbits_t *)COMSCR)

typedef struct {
    unsigned DIVN           :11;
    unsigned DIVM           :2;
    unsigned                :2;
    unsigned FBEN           :1;
} COMFBRbits_t;

#define COMFBRbits      (*(volatile COMFBRbits_t *)COMFBR)

typedef struct {
    unsigned DIV            :16;
} COMDIVbits_t;

#define COMDIVbits      (*(volatile COMDIVbits_t *)COMDIV)

/*----------------------------
General Purpose Timers Byte Registers
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
    #define T0LD            __UINT16__(0x40000000)
    #define T0VAL           __UINT16__(0x40000004)
    #define T0CON           __UINT16__(0x40000008)
    #define T0CLRI          __UINT16__(0x4000000C)
    #define T0CAP           __UINT16__(0x40000010)
    #define T0STA           __UINT16__(0x4000001C)

    #define T1LD            __UINT16__(0x40000400)
    #define T1VAL           __UINT16__(0x40000404)
    #define T1CON           __UINT16__(0x40000408)
    #define T1CLRI          __UINT16__(0x4000040C)
    #define T1CAP           __UINT16__(0x40000410)
    #define T1STA           __UINT16__(0x4000041C)

    #define T1LD            __UINT16__(0x40000800)
    #define T1VAL           __UINT16__(0x40000804)
    #define T1CON           __UINT16__(0x40000808)
    #define T1CLRI          __UINT16__(0x4000080C)
    #define T1CAP           __UINT16__(0x40000810)
    #define T1STA           __UINT16__(0x4000081C)
#endif

/*----------------------------
General Purpose Timers bit field definitions
-----------------------------*/

typedef struct {
    unsigned LOAD           :16;
} TxLDbits_t;

#define T0LDbits        (*(volatile TxLDbits_t *)T0LDbit)
#define T1LDbits        (*(volatile TxLDbits_t *)T1LDbit)
#define T2LDbits        (*(volatile TxLDbits_t *)T2LDbit)

typedef struct {
    unsigned VAL            :16;
} TxVALbits_t;

#define T0VALbits       (*(volatile TxVALbits_t *)T0VAL)
#define T1VALbits       (*(volatile TxVALbits_t *)T1VAL)
#define T2VALbits       (*(volatile TxVALbits_t *)T2VAL)

typedef struct {
    unsigned PRE            :2;
    unsigned UP             :1;
    unsigned MOD            :1;
    unsigned ENABLE         :1;
    unsigned CLK            :1;
    unsigned RLD            :2;
    unsigned EVENT          :4;
    unsigned EVENTEN        :1;
    unsigned                :3;
} TxCONbits_t;

#define T0CONbits       (*(volatile TxCONbits_t *)T0CON)
#define T1CONbits       (*(volatile TxCONbits_t *)T1CON)
#define T2CONbits       (*(volatile TxCONbits_t *)T2CON)

typedef struct {
    unsigned TMOUT          :1;
    unsigned CAP            :1;
    unsigned                :14;
} TxCLRIbits_t;

#define T0CLRI          (*(volatile TxCLRIbits_t *)T0CLRI)
#define T1CLRI          (*(volatile TxCLRIbits_t *)T1CLRI)
#define T2CLRI          (*(volatile TxCLRIbits_t *)T2CLRI)

typedef struct {
    unsigned CAP            :16;
} TxCAPbits_t;

#define T0CAPbits       (*(volatile TxCAPbits_t *)T0CAP)
#define T1CAPbits       (*(volatile TxCAPbits_t *)T1CAP)
#define T2CAPbits       (*(volatile TxCAPbits_t *)T2CAP)

typedef struct {
    unsigned TMOUT          :1;
    unsigned CAP            :1;
    unsigned                :3;
    unsigned BUSY           :1;
    unsigned PDOK           :1;
    unsigned                :8;
} TxSTAbits_t;

#define T0STAbits       (*(volatile TxSTAbits_t *)T0STA)
#define T1STAbits       (*(volatile TxSTAbits_t *)T1STA)
#define T2STAbits       (*(volatile TxSTAbits_t *)T2STA)

/*----------------------------
Watchdog Timer Byte register
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
    #define T3LD            __UINT16__(0x40002580)
    #define T3VAL           __UINT16__(0x40002584)
    #define T3CON           __UINT16__(0x40002588)
    #define T3CLRI          __UINT16__(0x4000258C)
    #define T3STA           __UINT16__(0x40002598)
#endif

/*----------------------------
Watchdog Timer Bit field definitions
-----------------------------*/

typedef struct {
    unsigned LOAD           :16;
} T3LDbits_t;

#define T3LDbits        (*(volatile T3LDbits_t *)T3LD)

typedef struct {
    unsigned CCOUNT         :16;
} T3VALbits_t;

#define T3VALbits       (*(volatile T3VALbits_t *)T3VAL)

typedef struct {
    unsigned PMD            :1;
    unsigned IRQ            :1;
    unsigned PRE            :2;
    unsigned                :1;
    unsigned ENABLE         :1;
    unsigned MOD            :1;
    unsigned                :9;
} T3CONbits_t;

#define T3CONbits       (*(volatile T3CONbits_t *)T3CON)

typedef struct {
    unsigned CLRWDG         :16;
} T3CLRIbits_t;

#define T3CLRIbits      (*(volatile T3CLRIbits_t *)T3CLRI)

typedef struct {
    unsigned IRQ            :1;
    unsigned CLRI           :1;
    unsigned LD             :1;
    unsigned CON            :1;
    unsigned LOCK           :1;
    unsigned                :11;
} T3STAbits_t;

#define T3STAbits       (*(volatile T3STAbits_t *)T3STA)

/*----------------------------
Wake Up Timer Byte register
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
    #define T4VAL0              __UINT16__(0x40002500)
    #define T4VAL1              __UINT16__(0x40002504)
    #define T4CON               __UINT16__(0x40002508)
    #define T4INC               __UINT16__(0x4000250C)
    #define T4WUFB0             __UINT16__(0x40002510)
    #define T4WUFB1             __UINT16__(0x40002514)
    #define T4WUFC0             __UINT16__(0x40002518)
    #define T4WUFC1             __UINT16__(0x4000251C)
    #define T4WUFD0             __UINT16__(0x40002520)
    #define T4WUFD1             __UINT16__(0x40002524)
    #define T4IEN               __UINT16__(0x40002528)
    #define T4STA               __UINT16__(0x4000252C)
    #define T4CLRI              __UINT16__(0x40002530)
    #define T4WUFA0             __UINT16__(0x4000253C)
    #define T4WUFA1             __UINT16__(0x40002540)
#endif

/*----------------------------
Wake Up Timer bit field definitions
-----------------------------*/

typedef struct {
    unsigned T4VALL         :16;
} T4VAL0bits_t;

#define T4VAL0bits          (*(volatile T4VAL0bits_t *)T4VAL0)

typedef struct {
    unsigned T4VALH         :16;
} T4VAL1bits_t;

#define T4VAL1bits          (*(volatile T4VAL1bits_t *)T4VAL1)

typedef  struct {
    unsigned PRE            :2;
    unsigned                :1;
    unsigned FREEZE         :1;
    unsigned                :2;
    unsigned MOD            :1;
    unsigned ENABLE         :1;
    unsigned WUEN           :1;
    unsigned CLK            :2;
    unsigned STOP_WUFA      :1;
    unsigned                :4;
} T4CONbits_t;

#define T4CONbits       (*(volatile T4CONbits_t *)T4CON)

typedef struct {
    unsigned INTERVAL       :12;
    unsigned                :4;
} T4INCbits_t;

#define T4INCbits       (*(volatile T4INCbits_t *)T4INC)

typedef struct {
    unsigned T4WUFBL        :16;
} T4WUFB0bits_t;

#define T4WUFB0bits     (*(volatile T4WUFB0bits_t *)T4WUFB0)

typedef struct {
    unsigned T4WUFBH        :16;
} T4WUFB1bits_t;

#define T4WUFB1bits     (*(volatile T4WUFB1bits_t *)T4WUFB1)

typedef struct {
    unsigned T4WUFCL        :16;
} T4WUFC0bits_t;

#define T4WUFCLbits     (*(volatile T4WUFC0bits_t *)T4WUFC0)

typedef struct {
    unsigned T4WUFCH        :16;
} T4WUFC1bits_t;

#define T4WUFC1bits     (*(volatile T4WUFC1bits_t *)T4WUFC1)

typedef struct {
    unsigned WUFD0        :16;
} T4WUFD0bits_t;

#define T4WUFD0bits     (*(volatile T4WUFD0bits_t *)T4WUFD0)

typedef  struct {
    unsigned T4WUFDH        :16;
} T4WUFD1bits_t;

#define T4WUFD1bits     (*(volatile T4WUFD1bits_t *)T4WUFD1)

typedef struct {
    unsigned WUFA           :1;
    unsigned WUFB           :1;
    unsigned WUFC           :1;
    unsigned WUFD           :1;
    unsigned ROLL           :1;
    unsigned                :11;
} T4IENbits_t;

#define T4IENbits       (*(volatile T4IENbits_t *)T4IEN)

typedef struct {
    unsigned WUFA           :1;
    unsigned WUFB           :1;
    unsigned WUFC           :1;
    unsigned WUFD           :1;
    unsigned ROLL           :1;
    unsigned                :1;
    unsigned IRQCRY         :1;
    unsigned FREEZE         :1;
    unsigned PDOK           :1;
    unsigned                :7;
} T4STAbits_t;

#define T4STAbits       (*(volatile T4STAbits_t *)T4STA)

typedef struct {
    unsigned WUFA           :1;
    unsigned WUFB           :1;
    unsigned WUFC           :1;
    unsigned WUFD           :1;
    unsigned ROLL           :1;
    unsigned                :11;
} T4CLRIbits_t;

#define T4CLRIbits      (*(volatile T4CLRIbits_t *)T4CLRI)

typedef struct {
    unsigned T4WUFAL        :16;
} T4WUFA0bits_t;

#define T4WUFA0bits     (*(volatile T4WUFA0bits_t *)T4WUFA0)

typedef struct {
    unsigned T4WUFAH        :16;
} T4WUFA1bits_t;

#define T4WUFA1bits     (*(volatile T4WUFA1bits_t *)T4WUFA1)

/*----------------------------
PWM Byte register
-----------------------------*/
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
    #define PWMCON0             __UINT16__(0x40024000)
    #define PWMCON1             __UINT16__(0x40024004)
    #define PWMICLR             __UINT16__(0x40024008)
    #define PWM0COM0            __UINT16__(0x40024010)
    #define PWM0COM1            __UINT16__(0x40024014)
    #define PWM0COM2            __UINT16__(0x40024018)
    #define PWM0LEN             __UINT16__(0x4002401C)
    #define PWM1COM0            __UINT16__(0x40024020)
    #define PWM1COM1            __UINT16__(0x40024024)
    #define PWM1COM2            __UINT16__(0x40024028)
    #define PWM1LEN             __UINT16__(0x4002402C)
    #define PWM2COM0            __UINT16__(0x40024030)
    #define PWM2COM1            __UINT16__(0x40024034)
    #define PWM2COM2            __UINT16__(0x40024038)
    #define PWM2LEN             __UINT16__(0x4002403C)
    #define PWM3COM0            __UINT16__(0x40024040)
    #define PWM3COM1            __UINT16__(0x40024044)
    #define PWM3COM2            __UINT16__(0x40024048)
    #define PWM3LEN             __UINT16__(0x4002404C)
#endif

/*----------------------------
PWM Bit field definitions
-----------------------------*/
typedef struct {
    unsigned PWMEN              :1;
    unsigned HMODE              :1;
    unsigned DIR                :1;
    unsigned LCOMP              :1;
    unsigned HOFF               :1;
    unsigned POINV              :1;
    unsigned PWMCMP             :3;
    unsigned ENA                :1;
    unsigned PWMIEN             :1;
    unsigned PWM1INV            :1;
    unsigned PWM3INV            :1;
    unsigned PWM5INV            :1;
    unsigned PWM7INV            :1;
    unsigned SYNC               :1;
} PWMCON0bits_t;

#define PWMCON0bits     (*(volatile PWMCON0bits_t *)PWMCON0)

typedef struct {
    unsigned                    :6;
    unsigned TRIP_EN            :1;
    unsigned                    :9;
} PWMCON1bits_t;

#define PWMCON1bits     (*(volatile PWMCON1bits_t *)PWMCON1)

typedef struct {
    unsigned PWM0               :1;
    unsigned PWM1               :1;
    unsigned PWM2               :1;
    unsigned PWM3               :1;
    unsigned TRIP               :1;
    unsigned                    :11;
} PWMICLRbits_t;

#define PWMICLRbits     (*(volatile PWMICLRbits_t *)PWMICLR)

typedef struct {
    unsigned COM0               :16;
} PWMxCOM0bits_t;

#define PWM0COM0bits    (*(volatile PWMxCOM0bits_t *)PWM0COM0)
#define PWM1COM0bits    (*(volatile PWMxCOM0bits_t *)PWM1COM0)
#define PWM2COM0bits    (*(volatile PWMxCOM0bits_t *)PWM2COM0)
#define PWM3COM0bits    (*(volatile PWMxCOM0bits_t *)PWM3COM0)

typedef struct {
    unsigned COM1               :16;
} PWMxCOM1bits_t;

#define PWM0COM1bits    (*(volatile PWMxCOM1bits_t *)PWM0COM1)
#define PWM1COM1bits    (*(volatile PWMxCOM1bits_t *)PWM1COM1) 
#define PWM2COM1bits    (*(volatile PWMxCOM1bits_t *)PWM2COM1) 
#define PWM3COM1bits    (*(volatile PWMxCOM1bits_t *)PWM3COM1) 


typedef struct {
    unsigned COM0               :16;
} PWMxCOM0bits_t;

#define PWM0COM2bits    (*(volatile PWMxCOM2bits_t *)PWM0COM2)
#define PWM1COM2bits    (*(volatile PWMxCOM2bits_t *)PWM1COM2)
#define PWM2COM2bits    (*(volatile PWMxCOM2bits_t *)PWM2COM2)
#define PWM3COM2bits    (*(volatile PWMxCOM2bits_t *)PWM3COM2)

typedef struct {
    unsigned LEN                :16;
} PWMxLENbits_t;

#define PWM0LENbits     (*(volatile PWMxLENbits_t *)PWM0LEN)
#define PWM1LENbits     (*(volatile PWMxLENbits_t *)PWM1LEN)
#define PWM2LENbits     (*(volatile PWMxLENbits_t *)PWM2LEN)
#define PWM3LENbits     (*(volatile PWMxLENbits_t *)PWM3LEN)

#endif