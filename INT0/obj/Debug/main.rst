                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ISO C Compiler 
                                      3 ; Version 4.4.0 #14620 (MINGW32)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _external_interrupt_0
                                     13 	.globl _delay_ms
                                     14 	.globl _CY
                                     15 	.globl _AC
                                     16 	.globl _F0
                                     17 	.globl _RS1
                                     18 	.globl _RS0
                                     19 	.globl _OV
                                     20 	.globl _F1
                                     21 	.globl _P
                                     22 	.globl _PS
                                     23 	.globl _PT1
                                     24 	.globl _PX1
                                     25 	.globl _PT0
                                     26 	.globl _PX0
                                     27 	.globl _RD
                                     28 	.globl _WR
                                     29 	.globl _T1
                                     30 	.globl _T0
                                     31 	.globl _INT1
                                     32 	.globl _INT0
                                     33 	.globl _TXD
                                     34 	.globl _RXD
                                     35 	.globl _P3_7
                                     36 	.globl _P3_6
                                     37 	.globl _P3_5
                                     38 	.globl _P3_4
                                     39 	.globl _P3_3
                                     40 	.globl _P3_2
                                     41 	.globl _P3_1
                                     42 	.globl _P3_0
                                     43 	.globl _EA
                                     44 	.globl _ES
                                     45 	.globl _ET1
                                     46 	.globl _EX1
                                     47 	.globl _ET0
                                     48 	.globl _EX0
                                     49 	.globl _P2_7
                                     50 	.globl _P2_6
                                     51 	.globl _P2_5
                                     52 	.globl _P2_4
                                     53 	.globl _P2_3
                                     54 	.globl _P2_2
                                     55 	.globl _P2_1
                                     56 	.globl _P2_0
                                     57 	.globl _SM0
                                     58 	.globl _SM1
                                     59 	.globl _SM2
                                     60 	.globl _REN
                                     61 	.globl _TB8
                                     62 	.globl _RB8
                                     63 	.globl _TI
                                     64 	.globl _RI
                                     65 	.globl _P1_7
                                     66 	.globl _P1_6
                                     67 	.globl _P1_5
                                     68 	.globl _P1_4
                                     69 	.globl _P1_3
                                     70 	.globl _P1_2
                                     71 	.globl _P1_1
                                     72 	.globl _P1_0
                                     73 	.globl _TF1
                                     74 	.globl _TR1
                                     75 	.globl _TF0
                                     76 	.globl _TR0
                                     77 	.globl _IE1
                                     78 	.globl _IT1
                                     79 	.globl _IE0
                                     80 	.globl _IT0
                                     81 	.globl _P0_7
                                     82 	.globl _P0_6
                                     83 	.globl _P0_5
                                     84 	.globl _P0_4
                                     85 	.globl _P0_3
                                     86 	.globl _P0_2
                                     87 	.globl _P0_1
                                     88 	.globl _P0_0
                                     89 	.globl _B
                                     90 	.globl _ACC
                                     91 	.globl _PSW
                                     92 	.globl _IP
                                     93 	.globl _P3
                                     94 	.globl _IE
                                     95 	.globl _P2
                                     96 	.globl _SBUF
                                     97 	.globl _SCON
                                     98 	.globl _P1
                                     99 	.globl _TH1
                                    100 	.globl _TH0
                                    101 	.globl _TL1
                                    102 	.globl _TL0
                                    103 	.globl _TMOD
                                    104 	.globl _TCON
                                    105 	.globl _PCON
                                    106 	.globl _DPH
                                    107 	.globl _DPL
                                    108 	.globl _SP
                                    109 	.globl _P0
                                    110 ;--------------------------------------------------------
                                    111 ; special function registers
                                    112 ;--------------------------------------------------------
                                    113 	.area RSEG    (ABS,DATA)
      000000                        114 	.org 0x0000
                           000080   115 G$P0$0_0$0 == 0x0080
                           000080   116 _P0	=	0x0080
                           000081   117 G$SP$0_0$0 == 0x0081
                           000081   118 _SP	=	0x0081
                           000082   119 G$DPL$0_0$0 == 0x0082
                           000082   120 _DPL	=	0x0082
                           000083   121 G$DPH$0_0$0 == 0x0083
                           000083   122 _DPH	=	0x0083
                           000087   123 G$PCON$0_0$0 == 0x0087
                           000087   124 _PCON	=	0x0087
                           000088   125 G$TCON$0_0$0 == 0x0088
                           000088   126 _TCON	=	0x0088
                           000089   127 G$TMOD$0_0$0 == 0x0089
                           000089   128 _TMOD	=	0x0089
                           00008A   129 G$TL0$0_0$0 == 0x008a
                           00008A   130 _TL0	=	0x008a
                           00008B   131 G$TL1$0_0$0 == 0x008b
                           00008B   132 _TL1	=	0x008b
                           00008C   133 G$TH0$0_0$0 == 0x008c
                           00008C   134 _TH0	=	0x008c
                           00008D   135 G$TH1$0_0$0 == 0x008d
                           00008D   136 _TH1	=	0x008d
                           000090   137 G$P1$0_0$0 == 0x0090
                           000090   138 _P1	=	0x0090
                           000098   139 G$SCON$0_0$0 == 0x0098
                           000098   140 _SCON	=	0x0098
                           000099   141 G$SBUF$0_0$0 == 0x0099
                           000099   142 _SBUF	=	0x0099
                           0000A0   143 G$P2$0_0$0 == 0x00a0
                           0000A0   144 _P2	=	0x00a0
                           0000A8   145 G$IE$0_0$0 == 0x00a8
                           0000A8   146 _IE	=	0x00a8
                           0000B0   147 G$P3$0_0$0 == 0x00b0
                           0000B0   148 _P3	=	0x00b0
                           0000B8   149 G$IP$0_0$0 == 0x00b8
                           0000B8   150 _IP	=	0x00b8
                           0000D0   151 G$PSW$0_0$0 == 0x00d0
                           0000D0   152 _PSW	=	0x00d0
                           0000E0   153 G$ACC$0_0$0 == 0x00e0
                           0000E0   154 _ACC	=	0x00e0
                           0000F0   155 G$B$0_0$0 == 0x00f0
                           0000F0   156 _B	=	0x00f0
                                    157 ;--------------------------------------------------------
                                    158 ; special function bits
                                    159 ;--------------------------------------------------------
                                    160 	.area RSEG    (ABS,DATA)
      000000                        161 	.org 0x0000
                           000080   162 G$P0_0$0_0$0 == 0x0080
                           000080   163 _P0_0	=	0x0080
                           000081   164 G$P0_1$0_0$0 == 0x0081
                           000081   165 _P0_1	=	0x0081
                           000082   166 G$P0_2$0_0$0 == 0x0082
                           000082   167 _P0_2	=	0x0082
                           000083   168 G$P0_3$0_0$0 == 0x0083
                           000083   169 _P0_3	=	0x0083
                           000084   170 G$P0_4$0_0$0 == 0x0084
                           000084   171 _P0_4	=	0x0084
                           000085   172 G$P0_5$0_0$0 == 0x0085
                           000085   173 _P0_5	=	0x0085
                           000086   174 G$P0_6$0_0$0 == 0x0086
                           000086   175 _P0_6	=	0x0086
                           000087   176 G$P0_7$0_0$0 == 0x0087
                           000087   177 _P0_7	=	0x0087
                           000088   178 G$IT0$0_0$0 == 0x0088
                           000088   179 _IT0	=	0x0088
                           000089   180 G$IE0$0_0$0 == 0x0089
                           000089   181 _IE0	=	0x0089
                           00008A   182 G$IT1$0_0$0 == 0x008a
                           00008A   183 _IT1	=	0x008a
                           00008B   184 G$IE1$0_0$0 == 0x008b
                           00008B   185 _IE1	=	0x008b
                           00008C   186 G$TR0$0_0$0 == 0x008c
                           00008C   187 _TR0	=	0x008c
                           00008D   188 G$TF0$0_0$0 == 0x008d
                           00008D   189 _TF0	=	0x008d
                           00008E   190 G$TR1$0_0$0 == 0x008e
                           00008E   191 _TR1	=	0x008e
                           00008F   192 G$TF1$0_0$0 == 0x008f
                           00008F   193 _TF1	=	0x008f
                           000090   194 G$P1_0$0_0$0 == 0x0090
                           000090   195 _P1_0	=	0x0090
                           000091   196 G$P1_1$0_0$0 == 0x0091
                           000091   197 _P1_1	=	0x0091
                           000092   198 G$P1_2$0_0$0 == 0x0092
                           000092   199 _P1_2	=	0x0092
                           000093   200 G$P1_3$0_0$0 == 0x0093
                           000093   201 _P1_3	=	0x0093
                           000094   202 G$P1_4$0_0$0 == 0x0094
                           000094   203 _P1_4	=	0x0094
                           000095   204 G$P1_5$0_0$0 == 0x0095
                           000095   205 _P1_5	=	0x0095
                           000096   206 G$P1_6$0_0$0 == 0x0096
                           000096   207 _P1_6	=	0x0096
                           000097   208 G$P1_7$0_0$0 == 0x0097
                           000097   209 _P1_7	=	0x0097
                           000098   210 G$RI$0_0$0 == 0x0098
                           000098   211 _RI	=	0x0098
                           000099   212 G$TI$0_0$0 == 0x0099
                           000099   213 _TI	=	0x0099
                           00009A   214 G$RB8$0_0$0 == 0x009a
                           00009A   215 _RB8	=	0x009a
                           00009B   216 G$TB8$0_0$0 == 0x009b
                           00009B   217 _TB8	=	0x009b
                           00009C   218 G$REN$0_0$0 == 0x009c
                           00009C   219 _REN	=	0x009c
                           00009D   220 G$SM2$0_0$0 == 0x009d
                           00009D   221 _SM2	=	0x009d
                           00009E   222 G$SM1$0_0$0 == 0x009e
                           00009E   223 _SM1	=	0x009e
                           00009F   224 G$SM0$0_0$0 == 0x009f
                           00009F   225 _SM0	=	0x009f
                           0000A0   226 G$P2_0$0_0$0 == 0x00a0
                           0000A0   227 _P2_0	=	0x00a0
                           0000A1   228 G$P2_1$0_0$0 == 0x00a1
                           0000A1   229 _P2_1	=	0x00a1
                           0000A2   230 G$P2_2$0_0$0 == 0x00a2
                           0000A2   231 _P2_2	=	0x00a2
                           0000A3   232 G$P2_3$0_0$0 == 0x00a3
                           0000A3   233 _P2_3	=	0x00a3
                           0000A4   234 G$P2_4$0_0$0 == 0x00a4
                           0000A4   235 _P2_4	=	0x00a4
                           0000A5   236 G$P2_5$0_0$0 == 0x00a5
                           0000A5   237 _P2_5	=	0x00a5
                           0000A6   238 G$P2_6$0_0$0 == 0x00a6
                           0000A6   239 _P2_6	=	0x00a6
                           0000A7   240 G$P2_7$0_0$0 == 0x00a7
                           0000A7   241 _P2_7	=	0x00a7
                           0000A8   242 G$EX0$0_0$0 == 0x00a8
                           0000A8   243 _EX0	=	0x00a8
                           0000A9   244 G$ET0$0_0$0 == 0x00a9
                           0000A9   245 _ET0	=	0x00a9
                           0000AA   246 G$EX1$0_0$0 == 0x00aa
                           0000AA   247 _EX1	=	0x00aa
                           0000AB   248 G$ET1$0_0$0 == 0x00ab
                           0000AB   249 _ET1	=	0x00ab
                           0000AC   250 G$ES$0_0$0 == 0x00ac
                           0000AC   251 _ES	=	0x00ac
                           0000AF   252 G$EA$0_0$0 == 0x00af
                           0000AF   253 _EA	=	0x00af
                           0000B0   254 G$P3_0$0_0$0 == 0x00b0
                           0000B0   255 _P3_0	=	0x00b0
                           0000B1   256 G$P3_1$0_0$0 == 0x00b1
                           0000B1   257 _P3_1	=	0x00b1
                           0000B2   258 G$P3_2$0_0$0 == 0x00b2
                           0000B2   259 _P3_2	=	0x00b2
                           0000B3   260 G$P3_3$0_0$0 == 0x00b3
                           0000B3   261 _P3_3	=	0x00b3
                           0000B4   262 G$P3_4$0_0$0 == 0x00b4
                           0000B4   263 _P3_4	=	0x00b4
                           0000B5   264 G$P3_5$0_0$0 == 0x00b5
                           0000B5   265 _P3_5	=	0x00b5
                           0000B6   266 G$P3_6$0_0$0 == 0x00b6
                           0000B6   267 _P3_6	=	0x00b6
                           0000B7   268 G$P3_7$0_0$0 == 0x00b7
                           0000B7   269 _P3_7	=	0x00b7
                           0000B0   270 G$RXD$0_0$0 == 0x00b0
                           0000B0   271 _RXD	=	0x00b0
                           0000B1   272 G$TXD$0_0$0 == 0x00b1
                           0000B1   273 _TXD	=	0x00b1
                           0000B2   274 G$INT0$0_0$0 == 0x00b2
                           0000B2   275 _INT0	=	0x00b2
                           0000B3   276 G$INT1$0_0$0 == 0x00b3
                           0000B3   277 _INT1	=	0x00b3
                           0000B4   278 G$T0$0_0$0 == 0x00b4
                           0000B4   279 _T0	=	0x00b4
                           0000B5   280 G$T1$0_0$0 == 0x00b5
                           0000B5   281 _T1	=	0x00b5
                           0000B6   282 G$WR$0_0$0 == 0x00b6
                           0000B6   283 _WR	=	0x00b6
                           0000B7   284 G$RD$0_0$0 == 0x00b7
                           0000B7   285 _RD	=	0x00b7
                           0000B8   286 G$PX0$0_0$0 == 0x00b8
                           0000B8   287 _PX0	=	0x00b8
                           0000B9   288 G$PT0$0_0$0 == 0x00b9
                           0000B9   289 _PT0	=	0x00b9
                           0000BA   290 G$PX1$0_0$0 == 0x00ba
                           0000BA   291 _PX1	=	0x00ba
                           0000BB   292 G$PT1$0_0$0 == 0x00bb
                           0000BB   293 _PT1	=	0x00bb
                           0000BC   294 G$PS$0_0$0 == 0x00bc
                           0000BC   295 _PS	=	0x00bc
                           0000D0   296 G$P$0_0$0 == 0x00d0
                           0000D0   297 _P	=	0x00d0
                           0000D1   298 G$F1$0_0$0 == 0x00d1
                           0000D1   299 _F1	=	0x00d1
                           0000D2   300 G$OV$0_0$0 == 0x00d2
                           0000D2   301 _OV	=	0x00d2
                           0000D3   302 G$RS0$0_0$0 == 0x00d3
                           0000D3   303 _RS0	=	0x00d3
                           0000D4   304 G$RS1$0_0$0 == 0x00d4
                           0000D4   305 _RS1	=	0x00d4
                           0000D5   306 G$F0$0_0$0 == 0x00d5
                           0000D5   307 _F0	=	0x00d5
                           0000D6   308 G$AC$0_0$0 == 0x00d6
                           0000D6   309 _AC	=	0x00d6
                           0000D7   310 G$CY$0_0$0 == 0x00d7
                           0000D7   311 _CY	=	0x00d7
                                    312 ;--------------------------------------------------------
                                    313 ; overlayable register banks
                                    314 ;--------------------------------------------------------
                                    315 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        316 	.ds 8
                                    317 ;--------------------------------------------------------
                                    318 ; overlayable bit register bank
                                    319 ;--------------------------------------------------------
                                    320 	.area BIT_BANK	(REL,OVR,DATA)
      000020                        321 bits:
      000020                        322 	.ds 1
                           008000   323 	b0 = bits[0]
                           008100   324 	b1 = bits[1]
                           008200   325 	b2 = bits[2]
                           008300   326 	b3 = bits[3]
                           008400   327 	b4 = bits[4]
                           008500   328 	b5 = bits[5]
                           008600   329 	b6 = bits[6]
                           008700   330 	b7 = bits[7]
                                    331 ;--------------------------------------------------------
                                    332 ; internal ram data
                                    333 ;--------------------------------------------------------
                                    334 	.area DSEG    (DATA)
                                    335 ;--------------------------------------------------------
                                    336 ; overlayable items in internal ram
                                    337 ;--------------------------------------------------------
                                    338 ;--------------------------------------------------------
                                    339 ; Stack segment in internal ram
                                    340 ;--------------------------------------------------------
                                    341 	.area SSEG
      000021                        342 __start__stack:
      000021                        343 	.ds	1
                                    344 
                                    345 ;--------------------------------------------------------
                                    346 ; indirectly addressable internal ram data
                                    347 ;--------------------------------------------------------
                                    348 	.area ISEG    (DATA)
                                    349 ;--------------------------------------------------------
                                    350 ; absolute internal ram data
                                    351 ;--------------------------------------------------------
                                    352 	.area IABS    (ABS,DATA)
                                    353 	.area IABS    (ABS,DATA)
                                    354 ;--------------------------------------------------------
                                    355 ; bit data
                                    356 ;--------------------------------------------------------
                                    357 	.area BSEG    (BIT)
                                    358 ;--------------------------------------------------------
                                    359 ; paged external ram data
                                    360 ;--------------------------------------------------------
                                    361 	.area PSEG    (PAG,XDATA)
                                    362 ;--------------------------------------------------------
                                    363 ; uninitialized external ram data
                                    364 ;--------------------------------------------------------
                                    365 	.area XSEG    (XDATA)
                                    366 ;--------------------------------------------------------
                                    367 ; absolute external ram data
                                    368 ;--------------------------------------------------------
                                    369 	.area XABS    (ABS,XDATA)
                                    370 ;--------------------------------------------------------
                                    371 ; initialized external ram data
                                    372 ;--------------------------------------------------------
                                    373 	.area XISEG   (XDATA)
                                    374 	.area HOME    (CODE)
                                    375 	.area GSINIT0 (CODE)
                                    376 	.area GSINIT1 (CODE)
                                    377 	.area GSINIT2 (CODE)
                                    378 	.area GSINIT3 (CODE)
                                    379 	.area GSINIT4 (CODE)
                                    380 	.area GSINIT5 (CODE)
                                    381 	.area GSINIT  (CODE)
                                    382 	.area GSFINAL (CODE)
                                    383 	.area CSEG    (CODE)
                                    384 ;--------------------------------------------------------
                                    385 ; interrupt vector
                                    386 ;--------------------------------------------------------
                                    387 	.area HOME    (CODE)
      000000                        388 __interrupt_vect:
      000000 02 00 09         [24]  389 	ljmp	__sdcc_gsinit_startup
      000003 02 00 89         [24]  390 	ljmp	_external_interrupt_0
                                    391 ;--------------------------------------------------------
                                    392 ; global & static initialisations
                                    393 ;--------------------------------------------------------
                                    394 	.area HOME    (CODE)
                                    395 	.area GSINIT  (CODE)
                                    396 	.area GSFINAL (CODE)
                                    397 	.area GSINIT  (CODE)
                                    398 	.globl __sdcc_gsinit_startup
                                    399 	.globl __sdcc_program_startup
                                    400 	.globl __start__stack
                                    401 	.globl __mcs51_genXINIT
                                    402 	.globl __mcs51_genXRAMCLEAR
                                    403 	.globl __mcs51_genRAMCLEAR
                                    404 	.area GSFINAL (CODE)
      000062 02 00 06         [24]  405 	ljmp	__sdcc_program_startup
                                    406 ;--------------------------------------------------------
                                    407 ; Home
                                    408 ;--------------------------------------------------------
                                    409 	.area HOME    (CODE)
                                    410 	.area HOME    (CODE)
      000006                        411 __sdcc_program_startup:
      000006 02 00 D5         [24]  412 	ljmp	_main
                                    413 ;	return from main will return to caller
                                    414 ;--------------------------------------------------------
                                    415 ; code
                                    416 ;--------------------------------------------------------
                                    417 	.area CSEG    (CODE)
                                    418 ;------------------------------------------------------------
                                    419 ;Allocation info for local variables in function 'external_interrupt_0'
                                    420 ;------------------------------------------------------------
                           000000   421 	G$external_interrupt_0$0$0 ==.
                           000000   422 	C$main.c$14$0_0$3 ==.
                                    423 ;	main.c:14: void external_interrupt_0(void) __interrupt(0){
                                    424 ;	-----------------------------------------
                                    425 ;	 function external_interrupt_0
                                    426 ;	-----------------------------------------
      000089                        427 _external_interrupt_0:
                           000007   428 	ar7 = 0x07
                           000006   429 	ar6 = 0x06
                           000005   430 	ar5 = 0x05
                           000004   431 	ar4 = 0x04
                           000003   432 	ar3 = 0x03
                           000002   433 	ar2 = 0x02
                           000001   434 	ar1 = 0x01
                           000000   435 	ar0 = 0x00
      000089 C0 20            [24]  436 	push	bits
      00008B C0 E0            [24]  437 	push	acc
      00008D C0 F0            [24]  438 	push	b
      00008F C0 82            [24]  439 	push	dpl
      000091 C0 83            [24]  440 	push	dph
      000093 C0 07            [24]  441 	push	(0+7)
      000095 C0 06            [24]  442 	push	(0+6)
      000097 C0 05            [24]  443 	push	(0+5)
      000099 C0 04            [24]  444 	push	(0+4)
      00009B C0 03            [24]  445 	push	(0+3)
      00009D C0 02            [24]  446 	push	(0+2)
      00009F C0 01            [24]  447 	push	(0+1)
      0000A1 C0 00            [24]  448 	push	(0+0)
      0000A3 C0 D0            [24]  449 	push	psw
      0000A5 75 D0 00         [24]  450 	mov	psw,#0x00
                           00001F   451 	C$main.c$15$1_0$3 ==.
                                    452 ;	main.c:15: LED_INT = 1;                                    // Liga o LED (P1.3)
                                    453 ;	assignBit
      0000A8 D2 93            [12]  454 	setb	_P1_3
                           000021   455 	C$main.c$16$1_0$3 ==.
                                    456 ;	main.c:16: delay_ms(500);                                  // Aguarda 500ms
      0000AA 90 01 F4         [24]  457 	mov	dptr,#0x01f4
      0000AD 12 00 65         [24]  458 	lcall	_delay_ms
                           000027   459 	C$main.c$17$1_0$3 ==.
                                    460 ;	main.c:17: LED_INT = 0;                                    // Desliga o LED (nível alto)
                                    461 ;	assignBit
      0000B0 C2 93            [12]  462 	clr	_P1_3
                           000029   463 	C$main.c$18$1_0$3 ==.
                                    464 ;	main.c:18: delay_ms(500);                                  // Aguarda 500ms
      0000B2 90 01 F4         [24]  465 	mov	dptr,#0x01f4
      0000B5 12 00 65         [24]  466 	lcall	_delay_ms
                           00002F   467 	C$main.c$19$1_0$3 ==.
                                    468 ;	main.c:19: }
      0000B8 D0 D0            [24]  469 	pop	psw
      0000BA D0 00            [24]  470 	pop	(0+0)
      0000BC D0 01            [24]  471 	pop	(0+1)
      0000BE D0 02            [24]  472 	pop	(0+2)
      0000C0 D0 03            [24]  473 	pop	(0+3)
      0000C2 D0 04            [24]  474 	pop	(0+4)
      0000C4 D0 05            [24]  475 	pop	(0+5)
      0000C6 D0 06            [24]  476 	pop	(0+6)
      0000C8 D0 07            [24]  477 	pop	(0+7)
      0000CA D0 83            [24]  478 	pop	dph
      0000CC D0 82            [24]  479 	pop	dpl
      0000CE D0 F0            [24]  480 	pop	b
      0000D0 D0 E0            [24]  481 	pop	acc
      0000D2 D0 20            [24]  482 	pop	bits
                           00004B   483 	C$main.c$19$1_0$3 ==.
                           00004B   484 	XG$external_interrupt_0$0$0 ==.
      0000D4 32               [24]  485 	reti
                                    486 ;------------------------------------------------------------
                                    487 ;Allocation info for local variables in function 'main'
                                    488 ;------------------------------------------------------------
                           00004C   489 	G$main$0$0 ==.
                           00004C   490 	C$main.c$21$1_0$5 ==.
                                    491 ;	main.c:21: void main(void){
                                    492 ;	-----------------------------------------
                                    493 ;	 function main
                                    494 ;	-----------------------------------------
      0000D5                        495 _main:
                           00004C   496 	C$main.c$22$1_0$5 ==.
                                    497 ;	main.c:22: IT0 = 1;                                        // Configura a interrupção INT0 para ser sensível à borda de descida
                                    498 ;	assignBit
      0000D5 D2 88            [12]  499 	setb	_IT0
                           00004E   500 	C$main.c$23$1_0$5 ==.
                                    501 ;	main.c:23: EX0 = 1;                                        // Habilita a interrupção externa INT0
                                    502 ;	assignBit
      0000D7 D2 A8            [12]  503 	setb	_EX0
                           000050   504 	C$main.c$24$1_0$5 ==.
                                    505 ;	main.c:24: EA = 1;                                         // Habilita todas as interrupções
                                    506 ;	assignBit
      0000D9 D2 AF            [12]  507 	setb	_EA
                           000052   508 	C$main.c$26$1_0$5 ==.
                                    509 ;	main.c:26: LED_INT = 0;                                    // Inicialmente desliga o LED (P1.3)
                                    510 ;	assignBit
      0000DB C2 93            [12]  511 	clr	_P1_3
                           000054   512 	C$main.c$28$1_0$5 ==.
                                    513 ;	main.c:28: while(1){
      0000DD                        514 00102$:
                           000054   515 	C$main.c$29$2_0$6 ==.
                                    516 ;	main.c:29: BOARDLED = 0;                           // Liga o LED (nível baixo)
                                    517 ;	assignBit
      0000DD C2 92            [12]  518 	clr	_P1_2
                           000056   519 	C$main.c$30$2_0$6 ==.
                                    520 ;	main.c:30: delay_ms(500);                          // Aguarda 500ms
      0000DF 90 01 F4         [24]  521 	mov	dptr,#0x01f4
      0000E2 12 00 65         [24]  522 	lcall	_delay_ms
                           00005C   523 	C$main.c$31$2_0$6 ==.
                                    524 ;	main.c:31: BOARDLED = 1;                           // Desliga o LED (nível alto)
                                    525 ;	assignBit
      0000E5 D2 92            [12]  526 	setb	_P1_2
                           00005E   527 	C$main.c$32$2_0$6 ==.
                                    528 ;	main.c:32: delay_ms(500);                          // Aguarda 500ms
      0000E7 90 01 F4         [24]  529 	mov	dptr,#0x01f4
      0000EA 12 00 65         [24]  530 	lcall	_delay_ms
      0000ED 80 EE            [24]  531 	sjmp	00102$
                           000066   532 	C$main.c$34$1_0$5 ==.
                                    533 ;	main.c:34: }
                           000066   534 	C$main.c$34$1_0$5 ==.
                           000066   535 	XG$main$0$0 ==.
      0000EF 22               [24]  536 	ret
                                    537 	.area CSEG    (CODE)
                                    538 	.area CONST   (CODE)
                                    539 	.area XINIT   (CODE)
                                    540 	.area CABS    (ABS,CODE)
