                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ISO C Compiler 
                                      3 ; Version 4.4.0 #14620 (MINGW32)
                                      4 ;--------------------------------------------------------
                                      5 	.module delay
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _CY
                                     12 	.globl _AC
                                     13 	.globl _F0
                                     14 	.globl _RS1
                                     15 	.globl _RS0
                                     16 	.globl _OV
                                     17 	.globl _F1
                                     18 	.globl _P
                                     19 	.globl _PS
                                     20 	.globl _PT1
                                     21 	.globl _PX1
                                     22 	.globl _PT0
                                     23 	.globl _PX0
                                     24 	.globl _RD
                                     25 	.globl _WR
                                     26 	.globl _T1
                                     27 	.globl _T0
                                     28 	.globl _INT1
                                     29 	.globl _INT0
                                     30 	.globl _TXD
                                     31 	.globl _RXD
                                     32 	.globl _P3_7
                                     33 	.globl _P3_6
                                     34 	.globl _P3_5
                                     35 	.globl _P3_4
                                     36 	.globl _P3_3
                                     37 	.globl _P3_2
                                     38 	.globl _P3_1
                                     39 	.globl _P3_0
                                     40 	.globl _EA
                                     41 	.globl _ES
                                     42 	.globl _ET1
                                     43 	.globl _EX1
                                     44 	.globl _ET0
                                     45 	.globl _EX0
                                     46 	.globl _P2_7
                                     47 	.globl _P2_6
                                     48 	.globl _P2_5
                                     49 	.globl _P2_4
                                     50 	.globl _P2_3
                                     51 	.globl _P2_2
                                     52 	.globl _P2_1
                                     53 	.globl _P2_0
                                     54 	.globl _SM0
                                     55 	.globl _SM1
                                     56 	.globl _SM2
                                     57 	.globl _REN
                                     58 	.globl _TB8
                                     59 	.globl _RB8
                                     60 	.globl _TI
                                     61 	.globl _RI
                                     62 	.globl _P1_7
                                     63 	.globl _P1_6
                                     64 	.globl _P1_5
                                     65 	.globl _P1_4
                                     66 	.globl _P1_3
                                     67 	.globl _P1_2
                                     68 	.globl _P1_1
                                     69 	.globl _P1_0
                                     70 	.globl _TF1
                                     71 	.globl _TR1
                                     72 	.globl _TF0
                                     73 	.globl _TR0
                                     74 	.globl _IE1
                                     75 	.globl _IT1
                                     76 	.globl _IE0
                                     77 	.globl _IT0
                                     78 	.globl _P0_7
                                     79 	.globl _P0_6
                                     80 	.globl _P0_5
                                     81 	.globl _P0_4
                                     82 	.globl _P0_3
                                     83 	.globl _P0_2
                                     84 	.globl _P0_1
                                     85 	.globl _P0_0
                                     86 	.globl _B
                                     87 	.globl _ACC
                                     88 	.globl _PSW
                                     89 	.globl _IP
                                     90 	.globl _P3
                                     91 	.globl _IE
                                     92 	.globl _P2
                                     93 	.globl _SBUF
                                     94 	.globl _SCON
                                     95 	.globl _P1
                                     96 	.globl _TH1
                                     97 	.globl _TH0
                                     98 	.globl _TL1
                                     99 	.globl _TL0
                                    100 	.globl _TMOD
                                    101 	.globl _TCON
                                    102 	.globl _PCON
                                    103 	.globl _DPH
                                    104 	.globl _DPL
                                    105 	.globl _SP
                                    106 	.globl _P0
                                    107 	.globl _delay_ms
                                    108 ;--------------------------------------------------------
                                    109 ; special function registers
                                    110 ;--------------------------------------------------------
                                    111 	.area RSEG    (ABS,DATA)
      000000                        112 	.org 0x0000
                           000080   113 G$P0$0_0$0 == 0x0080
                           000080   114 _P0	=	0x0080
                           000081   115 G$SP$0_0$0 == 0x0081
                           000081   116 _SP	=	0x0081
                           000082   117 G$DPL$0_0$0 == 0x0082
                           000082   118 _DPL	=	0x0082
                           000083   119 G$DPH$0_0$0 == 0x0083
                           000083   120 _DPH	=	0x0083
                           000087   121 G$PCON$0_0$0 == 0x0087
                           000087   122 _PCON	=	0x0087
                           000088   123 G$TCON$0_0$0 == 0x0088
                           000088   124 _TCON	=	0x0088
                           000089   125 G$TMOD$0_0$0 == 0x0089
                           000089   126 _TMOD	=	0x0089
                           00008A   127 G$TL0$0_0$0 == 0x008a
                           00008A   128 _TL0	=	0x008a
                           00008B   129 G$TL1$0_0$0 == 0x008b
                           00008B   130 _TL1	=	0x008b
                           00008C   131 G$TH0$0_0$0 == 0x008c
                           00008C   132 _TH0	=	0x008c
                           00008D   133 G$TH1$0_0$0 == 0x008d
                           00008D   134 _TH1	=	0x008d
                           000090   135 G$P1$0_0$0 == 0x0090
                           000090   136 _P1	=	0x0090
                           000098   137 G$SCON$0_0$0 == 0x0098
                           000098   138 _SCON	=	0x0098
                           000099   139 G$SBUF$0_0$0 == 0x0099
                           000099   140 _SBUF	=	0x0099
                           0000A0   141 G$P2$0_0$0 == 0x00a0
                           0000A0   142 _P2	=	0x00a0
                           0000A8   143 G$IE$0_0$0 == 0x00a8
                           0000A8   144 _IE	=	0x00a8
                           0000B0   145 G$P3$0_0$0 == 0x00b0
                           0000B0   146 _P3	=	0x00b0
                           0000B8   147 G$IP$0_0$0 == 0x00b8
                           0000B8   148 _IP	=	0x00b8
                           0000D0   149 G$PSW$0_0$0 == 0x00d0
                           0000D0   150 _PSW	=	0x00d0
                           0000E0   151 G$ACC$0_0$0 == 0x00e0
                           0000E0   152 _ACC	=	0x00e0
                           0000F0   153 G$B$0_0$0 == 0x00f0
                           0000F0   154 _B	=	0x00f0
                                    155 ;--------------------------------------------------------
                                    156 ; special function bits
                                    157 ;--------------------------------------------------------
                                    158 	.area RSEG    (ABS,DATA)
      000000                        159 	.org 0x0000
                           000080   160 G$P0_0$0_0$0 == 0x0080
                           000080   161 _P0_0	=	0x0080
                           000081   162 G$P0_1$0_0$0 == 0x0081
                           000081   163 _P0_1	=	0x0081
                           000082   164 G$P0_2$0_0$0 == 0x0082
                           000082   165 _P0_2	=	0x0082
                           000083   166 G$P0_3$0_0$0 == 0x0083
                           000083   167 _P0_3	=	0x0083
                           000084   168 G$P0_4$0_0$0 == 0x0084
                           000084   169 _P0_4	=	0x0084
                           000085   170 G$P0_5$0_0$0 == 0x0085
                           000085   171 _P0_5	=	0x0085
                           000086   172 G$P0_6$0_0$0 == 0x0086
                           000086   173 _P0_6	=	0x0086
                           000087   174 G$P0_7$0_0$0 == 0x0087
                           000087   175 _P0_7	=	0x0087
                           000088   176 G$IT0$0_0$0 == 0x0088
                           000088   177 _IT0	=	0x0088
                           000089   178 G$IE0$0_0$0 == 0x0089
                           000089   179 _IE0	=	0x0089
                           00008A   180 G$IT1$0_0$0 == 0x008a
                           00008A   181 _IT1	=	0x008a
                           00008B   182 G$IE1$0_0$0 == 0x008b
                           00008B   183 _IE1	=	0x008b
                           00008C   184 G$TR0$0_0$0 == 0x008c
                           00008C   185 _TR0	=	0x008c
                           00008D   186 G$TF0$0_0$0 == 0x008d
                           00008D   187 _TF0	=	0x008d
                           00008E   188 G$TR1$0_0$0 == 0x008e
                           00008E   189 _TR1	=	0x008e
                           00008F   190 G$TF1$0_0$0 == 0x008f
                           00008F   191 _TF1	=	0x008f
                           000090   192 G$P1_0$0_0$0 == 0x0090
                           000090   193 _P1_0	=	0x0090
                           000091   194 G$P1_1$0_0$0 == 0x0091
                           000091   195 _P1_1	=	0x0091
                           000092   196 G$P1_2$0_0$0 == 0x0092
                           000092   197 _P1_2	=	0x0092
                           000093   198 G$P1_3$0_0$0 == 0x0093
                           000093   199 _P1_3	=	0x0093
                           000094   200 G$P1_4$0_0$0 == 0x0094
                           000094   201 _P1_4	=	0x0094
                           000095   202 G$P1_5$0_0$0 == 0x0095
                           000095   203 _P1_5	=	0x0095
                           000096   204 G$P1_6$0_0$0 == 0x0096
                           000096   205 _P1_6	=	0x0096
                           000097   206 G$P1_7$0_0$0 == 0x0097
                           000097   207 _P1_7	=	0x0097
                           000098   208 G$RI$0_0$0 == 0x0098
                           000098   209 _RI	=	0x0098
                           000099   210 G$TI$0_0$0 == 0x0099
                           000099   211 _TI	=	0x0099
                           00009A   212 G$RB8$0_0$0 == 0x009a
                           00009A   213 _RB8	=	0x009a
                           00009B   214 G$TB8$0_0$0 == 0x009b
                           00009B   215 _TB8	=	0x009b
                           00009C   216 G$REN$0_0$0 == 0x009c
                           00009C   217 _REN	=	0x009c
                           00009D   218 G$SM2$0_0$0 == 0x009d
                           00009D   219 _SM2	=	0x009d
                           00009E   220 G$SM1$0_0$0 == 0x009e
                           00009E   221 _SM1	=	0x009e
                           00009F   222 G$SM0$0_0$0 == 0x009f
                           00009F   223 _SM0	=	0x009f
                           0000A0   224 G$P2_0$0_0$0 == 0x00a0
                           0000A0   225 _P2_0	=	0x00a0
                           0000A1   226 G$P2_1$0_0$0 == 0x00a1
                           0000A1   227 _P2_1	=	0x00a1
                           0000A2   228 G$P2_2$0_0$0 == 0x00a2
                           0000A2   229 _P2_2	=	0x00a2
                           0000A3   230 G$P2_3$0_0$0 == 0x00a3
                           0000A3   231 _P2_3	=	0x00a3
                           0000A4   232 G$P2_4$0_0$0 == 0x00a4
                           0000A4   233 _P2_4	=	0x00a4
                           0000A5   234 G$P2_5$0_0$0 == 0x00a5
                           0000A5   235 _P2_5	=	0x00a5
                           0000A6   236 G$P2_6$0_0$0 == 0x00a6
                           0000A6   237 _P2_6	=	0x00a6
                           0000A7   238 G$P2_7$0_0$0 == 0x00a7
                           0000A7   239 _P2_7	=	0x00a7
                           0000A8   240 G$EX0$0_0$0 == 0x00a8
                           0000A8   241 _EX0	=	0x00a8
                           0000A9   242 G$ET0$0_0$0 == 0x00a9
                           0000A9   243 _ET0	=	0x00a9
                           0000AA   244 G$EX1$0_0$0 == 0x00aa
                           0000AA   245 _EX1	=	0x00aa
                           0000AB   246 G$ET1$0_0$0 == 0x00ab
                           0000AB   247 _ET1	=	0x00ab
                           0000AC   248 G$ES$0_0$0 == 0x00ac
                           0000AC   249 _ES	=	0x00ac
                           0000AF   250 G$EA$0_0$0 == 0x00af
                           0000AF   251 _EA	=	0x00af
                           0000B0   252 G$P3_0$0_0$0 == 0x00b0
                           0000B0   253 _P3_0	=	0x00b0
                           0000B1   254 G$P3_1$0_0$0 == 0x00b1
                           0000B1   255 _P3_1	=	0x00b1
                           0000B2   256 G$P3_2$0_0$0 == 0x00b2
                           0000B2   257 _P3_2	=	0x00b2
                           0000B3   258 G$P3_3$0_0$0 == 0x00b3
                           0000B3   259 _P3_3	=	0x00b3
                           0000B4   260 G$P3_4$0_0$0 == 0x00b4
                           0000B4   261 _P3_4	=	0x00b4
                           0000B5   262 G$P3_5$0_0$0 == 0x00b5
                           0000B5   263 _P3_5	=	0x00b5
                           0000B6   264 G$P3_6$0_0$0 == 0x00b6
                           0000B6   265 _P3_6	=	0x00b6
                           0000B7   266 G$P3_7$0_0$0 == 0x00b7
                           0000B7   267 _P3_7	=	0x00b7
                           0000B0   268 G$RXD$0_0$0 == 0x00b0
                           0000B0   269 _RXD	=	0x00b0
                           0000B1   270 G$TXD$0_0$0 == 0x00b1
                           0000B1   271 _TXD	=	0x00b1
                           0000B2   272 G$INT0$0_0$0 == 0x00b2
                           0000B2   273 _INT0	=	0x00b2
                           0000B3   274 G$INT1$0_0$0 == 0x00b3
                           0000B3   275 _INT1	=	0x00b3
                           0000B4   276 G$T0$0_0$0 == 0x00b4
                           0000B4   277 _T0	=	0x00b4
                           0000B5   278 G$T1$0_0$0 == 0x00b5
                           0000B5   279 _T1	=	0x00b5
                           0000B6   280 G$WR$0_0$0 == 0x00b6
                           0000B6   281 _WR	=	0x00b6
                           0000B7   282 G$RD$0_0$0 == 0x00b7
                           0000B7   283 _RD	=	0x00b7
                           0000B8   284 G$PX0$0_0$0 == 0x00b8
                           0000B8   285 _PX0	=	0x00b8
                           0000B9   286 G$PT0$0_0$0 == 0x00b9
                           0000B9   287 _PT0	=	0x00b9
                           0000BA   288 G$PX1$0_0$0 == 0x00ba
                           0000BA   289 _PX1	=	0x00ba
                           0000BB   290 G$PT1$0_0$0 == 0x00bb
                           0000BB   291 _PT1	=	0x00bb
                           0000BC   292 G$PS$0_0$0 == 0x00bc
                           0000BC   293 _PS	=	0x00bc
                           0000D0   294 G$P$0_0$0 == 0x00d0
                           0000D0   295 _P	=	0x00d0
                           0000D1   296 G$F1$0_0$0 == 0x00d1
                           0000D1   297 _F1	=	0x00d1
                           0000D2   298 G$OV$0_0$0 == 0x00d2
                           0000D2   299 _OV	=	0x00d2
                           0000D3   300 G$RS0$0_0$0 == 0x00d3
                           0000D3   301 _RS0	=	0x00d3
                           0000D4   302 G$RS1$0_0$0 == 0x00d4
                           0000D4   303 _RS1	=	0x00d4
                           0000D5   304 G$F0$0_0$0 == 0x00d5
                           0000D5   305 _F0	=	0x00d5
                           0000D6   306 G$AC$0_0$0 == 0x00d6
                           0000D6   307 _AC	=	0x00d6
                           0000D7   308 G$CY$0_0$0 == 0x00d7
                           0000D7   309 _CY	=	0x00d7
                                    310 ;--------------------------------------------------------
                                    311 ; overlayable register banks
                                    312 ;--------------------------------------------------------
                                    313 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        314 	.ds 8
                                    315 ;--------------------------------------------------------
                                    316 ; internal ram data
                                    317 ;--------------------------------------------------------
                                    318 	.area DSEG    (DATA)
                                    319 ;--------------------------------------------------------
                                    320 ; overlayable items in internal ram
                                    321 ;--------------------------------------------------------
                                    322 	.area	OSEG    (OVR,DATA)
                                    323 ;--------------------------------------------------------
                                    324 ; indirectly addressable internal ram data
                                    325 ;--------------------------------------------------------
                                    326 	.area ISEG    (DATA)
                                    327 ;--------------------------------------------------------
                                    328 ; absolute internal ram data
                                    329 ;--------------------------------------------------------
                                    330 	.area IABS    (ABS,DATA)
                                    331 	.area IABS    (ABS,DATA)
                                    332 ;--------------------------------------------------------
                                    333 ; bit data
                                    334 ;--------------------------------------------------------
                                    335 	.area BSEG    (BIT)
                                    336 ;--------------------------------------------------------
                                    337 ; paged external ram data
                                    338 ;--------------------------------------------------------
                                    339 	.area PSEG    (PAG,XDATA)
                                    340 ;--------------------------------------------------------
                                    341 ; uninitialized external ram data
                                    342 ;--------------------------------------------------------
                                    343 	.area XSEG    (XDATA)
                                    344 ;--------------------------------------------------------
                                    345 ; absolute external ram data
                                    346 ;--------------------------------------------------------
                                    347 	.area XABS    (ABS,XDATA)
                                    348 ;--------------------------------------------------------
                                    349 ; initialized external ram data
                                    350 ;--------------------------------------------------------
                                    351 	.area XISEG   (XDATA)
                                    352 	.area HOME    (CODE)
                                    353 	.area GSINIT0 (CODE)
                                    354 	.area GSINIT1 (CODE)
                                    355 	.area GSINIT2 (CODE)
                                    356 	.area GSINIT3 (CODE)
                                    357 	.area GSINIT4 (CODE)
                                    358 	.area GSINIT5 (CODE)
                                    359 	.area GSINIT  (CODE)
                                    360 	.area GSFINAL (CODE)
                                    361 	.area CSEG    (CODE)
                                    362 ;--------------------------------------------------------
                                    363 ; global & static initialisations
                                    364 ;--------------------------------------------------------
                                    365 	.area HOME    (CODE)
                                    366 	.area GSINIT  (CODE)
                                    367 	.area GSFINAL (CODE)
                                    368 	.area GSINIT  (CODE)
                                    369 ;--------------------------------------------------------
                                    370 ; Home
                                    371 ;--------------------------------------------------------
                                    372 	.area HOME    (CODE)
                                    373 	.area HOME    (CODE)
                                    374 ;--------------------------------------------------------
                                    375 ; code
                                    376 ;--------------------------------------------------------
                                    377 	.area CSEG    (CODE)
                                    378 ;------------------------------------------------------------
                                    379 ;Allocation info for local variables in function 'delay_ms'
                                    380 ;------------------------------------------------------------
                                    381 ;time                      Allocated to registers r6 r7 
                                    382 ;i                         Allocated to registers r4 r5 
                                    383 ;j                         Allocated to registers r2 r3 
                                    384 ;------------------------------------------------------------
                           000000   385 	G$delay_ms$0$0 ==.
                           000000   386 	C$delay.c$5$0_0$4 ==.
                                    387 ;	delay.c:5: void delay_ms(unsigned int time){
                                    388 ;	-----------------------------------------
                                    389 ;	 function delay_ms
                                    390 ;	-----------------------------------------
      000062                        391 _delay_ms:
                           000007   392 	ar7 = 0x07
                           000006   393 	ar6 = 0x06
                           000005   394 	ar5 = 0x05
                           000004   395 	ar4 = 0x04
                           000003   396 	ar3 = 0x03
                           000002   397 	ar2 = 0x02
                           000001   398 	ar1 = 0x01
                           000000   399 	ar0 = 0x00
      000062 AE 82            [24]  400 	mov	r6, dpl
      000064 AF 83            [24]  401 	mov	r7, dph
                           000004   402 	C$delay.c$7$2_0$4 ==.
                                    403 ;	delay.c:7: for (i = 0; i < time; i++)
      000066 7C 00            [12]  404 	mov	r4,#0x00
      000068 7D 00            [12]  405 	mov	r5,#0x00
      00006A                        406 00107$:
      00006A C3               [12]  407 	clr	c
      00006B EC               [12]  408 	mov	a,r4
      00006C 9E               [12]  409 	subb	a,r6
      00006D ED               [12]  410 	mov	a,r5
      00006E 9F               [12]  411 	subb	a,r7
      00006F 50 14            [24]  412 	jnc	00109$
                           00000F   413 	C$delay.c$8$2_0$4 ==.
                                    414 ;	delay.c:8: for (j = 0; j < 140; j++);      // Aproximadamente 1ms
      000071 7A 8C            [12]  415 	mov	r2,#0x8c
      000073 7B 00            [12]  416 	mov	r3,#0x00
      000075                        417 00105$:
      000075 1A               [12]  418 	dec	r2
      000076 BA FF 01         [24]  419 	cjne	r2,#0xff,00138$
      000079 1B               [12]  420 	dec	r3
      00007A                        421 00138$:
      00007A EA               [12]  422 	mov	a,r2
      00007B 4B               [12]  423 	orl	a,r3
      00007C 70 F7            [24]  424 	jnz	00105$
                           00001C   425 	C$delay.c$7$2_0$4 ==.
                                    426 ;	delay.c:7: for (i = 0; i < time; i++)
      00007E 0C               [12]  427 	inc	r4
      00007F BC 00 E8         [24]  428 	cjne	r4,#0x00,00107$
      000082 0D               [12]  429 	inc	r5
      000083 80 E5            [24]  430 	sjmp	00107$
      000085                        431 00109$:
                           000023   432 	C$delay.c$9$2_0$4 ==.
                                    433 ;	delay.c:9: }
                           000023   434 	C$delay.c$9$2_0$4 ==.
                           000023   435 	XG$delay_ms$0$0 ==.
      000085 22               [24]  436 	ret
                                    437 	.area CSEG    (CODE)
                                    438 	.area CONST   (CODE)
                                    439 	.area XINIT   (CODE)
                                    440 	.area CABS    (ABS,CODE)
