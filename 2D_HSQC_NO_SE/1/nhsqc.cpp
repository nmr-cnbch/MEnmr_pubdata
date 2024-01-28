# 1 "/opt/wtopspin/gorka/2D/pp/nhsqc"
# 1 "<built-in>"
#define __STDC__ 1
#define __cplusplus 199711L
#define __STDC_HOSTED__ 1
# 1 "<command-line>"
#define _GNU_SOURCE 1
#define AV3 1
#define LABEL_CN 1
# 1 "/opt/wtopspin/gorka/2D/pp/nhsqc"
prosol relations=<triple>
; copyright by 2017 Michal Jakub Gorka <michal.gorka@fuw.edu.pl> All rights reserved.
; Do not use without explicit permission.

# 1 "/opt/topspin3.6.1mjg/exp/stan/nmr/lists/pp/Avance.incl" 1
;Avance3.incl
;   for AV III
;
;avance-version (13/06/17)
;
;$CLASS=HighRes Incl
;$COMMENT=



#define AVANCE_INCL 


/*;use 2H channel for lock or pulse (lockswitch)*/
#define H2_LOCK h2lock ;setnmr4^24 or interleave_incr
#define H2_PULSE h2pulse ;setnmr4|24 or interleave_incr

/*;allow for 2H decoupling (lockswitch)*/
#define LOCKDEC_ON setnmr4|28
#define LOCKDEC_OFF setnmr4^28

/*;use 19F channel for lock or pulse (lockswitch)*/
#define F19_LOCK setnmr3^11
#define F19_PULSE setnmr3|11

/*;allow for 19F decoupling (lockswitch)*/
#define FLOCKDEC_ON setnmr3|10
#define FLOCKDEC_OFF setnmr3^10

/*;turn lock-hold on/off (BSMS)*/
#define LOCKH_ON setnmr3|0
#define LOCKH_OFF setnmr3^0

/*;switch between 1H or 19F output (H amplifier)*/
#define SWITO_F setnmr3|2
#define SWITO_H setnmr3^2

/*;select output for 19F (amplifier)*/
#define QNP_X setnmr3|3
#define QNP_F setnmr3^3

/*;homospoil on/off (BSMS)*/
#define HS_ON setnmr3|1
#define HS_OFF setnmr3^1

/*;for Q-switch probes*/
#define LOWQ setnmr4|27
#define HIGHQ setnmr4^27

/*;for mixing probe*/
#define MIX_UP setnmr3|5
#define MIX_DOWN setnmr3^5

/*;gating pulse for RX22, ADC and HPPR - no longer active*/
#define RGP_RX_ON 
#define RGP_ADC_ON 
#define RGP_PA_ON 

/*;generate dwell clock*/
#define DWELL_GEN cpdngs17

/*;blank/unblank receiver path*/
#define REC_BLK setrtp1^5
#define REC_UNBLK setrtp1|5

/*;turn dwell clock on/off*/
#define DWL_CLK_ON setrtp1|0
#define DWL_CLK_OFF setrtp1^0

/*;enable receiver - not active*/
#define REC_ENABLE 


/*;for multiple receiver systems*/

/*;gating pulse for RX22, ADC and HPPR - no longer active*/
#define RGP_RX_ON_F1 RGP_RX_ON
#define RGP_ADC_ON_F1 RGP_ADC_ON
#define RGP_PA_ON_F1 RGP_PA_ON

#define RGP_RX_ON_F2 
#define RGP_ADC_ON_F2 
#define RGP_PA_ON_F2 

#define RGP_RX_ON_F3 
#define RGP_ADC_ON_F3 
#define RGP_PA_ON_F3 

#define RGP_RX_ON_F4 
#define RGP_ADC_ON_F4 
#define RGP_PA_ON_F4 

/*;generate dwell clock*/
#define DWELL_GEN1 cpdngs17:f1
#define DWELL_GEN2 cpdngs18:f2
#define DWELL_GEN3 cpdngs19:f3
#define DWELL_GEN4 cpdngs20:f4

/*;blank/unblank receiver path*/
#define REC_BLK2 setrtp2^5
#define REC_UNBLK2 setrtp2|5
#define REC_BLK3 setrtp3^5
#define REC_UNBLK3 setrtp3|5
#define REC_BLK4 setrtp4^5
#define REC_UNBLK4 setrtp4|5

/*;turn dwell clock on/off*/
#define DWL_CLK_ON2 setrtp2|0
#define DWL_CLK_OFF2 setrtp2^0
#define DWL_CLK_ON3 setrtp3|0
#define DWL_CLK_OFF3 setrtp3^0
#define DWL_CLK_ON4 setrtp4|0
#define DWL_CLK_OFF4 setrtp4^0

/*;select LOT - not active*/
#define MULREC_LOT_SELECT 

/*;interleave increment signal*/
#define INTERLEAVE_INCR_ON setrtp1|1
#define INTERLEAVE_INCR_OFF setrtp1^1


/*;for imaging systems*/

/*;trigger outputs 1-4*/
#define TTL1_LOW setnmr3|28
#define TTL1_HIGH setnmr3^28

#define TTL2_LOW setnmr3|29
#define TTL2_HIGH setnmr3^29

#define TTL3_LOW setnmr3|30
#define TTL3_HIGH setnmr3^30

#define TTL4_LOW setnmr3|31
#define TTL4_HIGH setnmr3^31

/*;timestamps for external triggers*/
#define STAMP1_LOW setnmr3|6
#define STAMP1_HIGH setnmr3^6
#define STAMP2_LOW setnmr3|24
#define STAMP2_HIGH setnmr3^24
#define STAMP4_LOW setnmr3|25
#define STAMP4_HIGH setnmr3^25

/*;ECG-timestamp signals*/
#define ECG_STAMP_LOW setnmr3|6
#define ECG_STAMP_HIGH setnmr3^6

/*;auto tuning signal*/
#define AUT_TUNING_IN_LOW setnmr3|25
#define AUT_TUNING_IN_HIGH setnmr3^25

/*;active decoupling signal*/
#define ACT_DEC_TTL1_LOW setnmr3|26
#define ACT_DEC_TTL1_HIGH setnmr3^26

#define ACT_DEC_TTL2_LOW setnmr3|27
#define ACT_DEC_TTL2_HIGH setnmr3^27

/*;trigger signal for gradient synchronisation*/
#define GRAD_SYNC trigpe3






;$Id: Avance3.incl,v 1.10.2.2 2013/08/30 09:43:33 ber Exp $
# 6 "/opt/wtopspin/gorka/2D/pp/nhsqc" 2
# 1 "/opt/topspin3.6.1mjg/exp/stan/nmr/lists/pp/Grad.incl" 1
;Grad2.incl  -  include file for Gradient Spectroscopy
;   for TCU3
;
;avance-version (07/01/17)
;
;$CLASS=HighRes Incl
;$COMMENT=


/*;gradient pulse for gs-syntax*/
#define GRADIENT(ampl) p16:ngrad
#define GRADIENT2(ampl) p19:ngrad

/*;blank/unblank gradient amplifier and turn lock-hold on/off*/
#define BLKGRAD setnmr3^0 setnmr0^34^32^33 ctrlgrad 7
#define UNBLKGRAD setnmr3|0 setnmr0|34|32|33 ctrlgrad 0

/*;blank/unblank gradient amplifier*/
#define BLKGRAMP setnmr0^34^32^33 ctrlgrad 7
#define UNBLKGRAMP setnmr0|34|32|33 ctrlgrad 0

/*;for RCB board (BSMS)*/
#define RCB_INCR setnmr3|4
#define RCB_CONT setnmr3^4


define list<gradient> EA=<EA>



;$Id: Grad2.incl,v 1.14 2012/01/31 17:49:21 ber Exp $
# 7 "/opt/wtopspin/gorka/2D/pp/nhsqc" 2

; Set up chemical shift evolution times:
"in1 = inf1"
define delay T1
"T1 = 0"

; Set up delays:
define delay timeHN
"timeHN = d25"
define delay timeNandH
"timeNandH = timeHN"

;d25 time for HNz->H and N->NHz evolution [5.2 msec]

define delay DELTA
define delay DELTAHN
define delay DELTAHN2
define delay DELTANandH
define delay ECHOCOMP
define delay ECHOTIME

"DELTAHN = timeHN/2 - p16 - d16"
"DELTAHN2 = DELTAHN - p21"
"DELTANandH = timeNandH/2 - p16 - d16"

"ECHOCOMP = p21*4/PI"
"ECHOTIME = d16 + de - p1*2/PI"


"DELTA = larger(p2,p8)"




"acqt0 = 0"
baseopt_echo

1 ze
  d11

2 d1
  4u UNBLKGRAD

; Hz -> HzNz:
  (p1 ph23 pl1):f1
  p16:gp10
  d16
  DELTAHN
  (center (p2 ph1 pl1):f1 (p22 ph21 pl3):f3)
  DELTAHN
  p16:gp10
  d16
  (p1 ph1 pl1):f1
  (p11:sp1 ph0+ph23):f1    ; H2O to +z.
  p16:gp1
  d16

; HzNz -> HzNy + HzNx with N evolution (T1):
  (p21 ph22 pl3):f3
  T1*0.5

  (center (p2 ph0 pl1):f1 (p8:sp13 ph0):f2) ; H2O to -z



  T1*0.5
  p16:gp21*EA
  d16
  (p22 ph0 pl3):f3
  p16:gp22*EA
  d16
  DELTA
  (p21 ph0 pl3):f3

; COS-INEPT:
  ECHOCOMP
  (p1 ph0 pl1):f1
  p16:gp11
  d16
  DELTANandH
  (center (p2 ph0 pl1):f1 (p22 ph0 pl3):f3)
  DELTANandH
  p16:gp11
  d16
  (p1 ph1 pl1):f1
  
  (p21 ph11 pl3):f3  ; E/A selecting pulse.
  p16:gp12
  d16
  DELTAHN2
  (center (p2 ph0 pl1):f1 (p22 ph0 pl3):f3)
  DELTAHN
  p16:gp12
  d16
  
  (p1 ph0 pl1):f1
  p16:gp23
  ECHOTIME
  (p2 ph0 pl1):f1
  p16:gp24
  d16 pl16:f3 BLKGRAD
  go=2 ph31 cpds3:f3 finally do:f3
  d1 mc #0 to 2 
     F1EA(calgrad(EA) & calph(ph11, +180), caldel(T1, +in1) & calph(ph21, +180) & calph(ph22, +180) & calph(ph31, +180))
exit
   
; Constant phases:
ph0 = 0
ph1 = 1
ph2 = 2
ph3 = 3

; E/A selecting phase:
ph11 = 1

; Phase of N inversion pulse in H INEPT (for proper TPPI in T1):
ph21 = 0
; Phase of first N pulse in N evolution (for TPPI in T1):
ph22 = 0 2  ; N excitation.
ph23 = 0 0 2 2  ; H excitation.
; Receiver phase:
ph31 = 0 2 2 0
  
;pl1 : f1 channel - power level for pulse (default)
;pl3 : f3 channel - power level for pulse (default)
;pl16: f3 channel - power level for CPD/BB decoupling
;sp1: f1 channel - shaped pulse  90 degree
;sp13: f2 channel - shaped pulse 180 degree (adiabatic)
;p1 : f1 channel -  90 degree high power pulse
;p2 : f1 channel - 180 degree high power pulse
;p8 : f2 channel - 180 degree shaped pulse for inversion (adiabatic)
;p11: f1 channel -  90 degree shaped pulse
;p16: homospoil/gradient pulse                         [1 msec]
;p21: f3 channel -  90 degree high power pulse
;p22: f3 channel - 180 degree high power pulse
;d1 : relaxation delay; 1-5 * T1
;d11: delay for disk I/O                               [30 msec]
;d16: delay for homospoil/gradient recovery
;inf1: 1/SW(X) = 2 * DW(X)
;ns: 1 * n
;ds: >= 16
;td1: number of experiments
;FnMODE: echo-antiecho
;cpd3: decoupling according to sequence defined by cpdprg3
;pcpd3: f3 channel - 90 degree pulse for decoupling sequence

;gpnam0: SMSQ10.100
;gpnam1: SMSQ10.100
;gpnam10: SMSQ10.100
;gpnam11: SMSQ10.100
;gpnam12: SMSQ10.100
;gpnam21: SMSQ10.100
;gpnam22: SMSQ10.100

;gpz0: N homospoil gradient: 59%.
;gpz1: Homospoil gradient after H: 91%.

;gpz10: Gradient in Hz -> HzNz INEPT: 11%.

;gpz11: Gradient in first COS-INEPT echo: 5%.
;gpz12: Gradient in second COS-INEPT echo: 2%.

;gpz21: First coherence selection gradient (on N): 60%.
;gpz22: Second coherence selection gradient (on N): -100%.
;gpz23: Third coherence selection gradient (on H): 3%.
;gpz24: Forth coherence selection gradient (on H): 19.2%.
                                     ;preprocessor-flags-start
;LABEL_CN: for C-13 and N-15 labeled samples start experiment with 
;             option -DLABEL_CN (eda: ZGOPTNS)
                                          ;preprocessor-flags-end

