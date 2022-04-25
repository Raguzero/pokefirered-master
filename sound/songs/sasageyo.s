	.include "MPlayDef.s"

	.equ	sasageyo_grp, voicegroup191
	.equ	sasageyo_pri, 0
	.equ	sasageyo_rev, reverb_set+50
	.equ	sasageyo_mvl, 100
	.equ	sasageyo_key, 0
	.equ	sasageyo_tbs, 1
	.equ	sasageyo_exg, 1
	.equ	sasageyo_cmp, 1

	.section .rodata
	.global	sasageyo
	.align	2

@**************** Track 1 (Midi-Chn.1) ****************@

sasageyo_1:
	.byte	KEYSH , sasageyo_key+0
@ 000   ----------------------------------------
	.byte	TEMPO , 160*sasageyo_tbs/2
	.byte		VOICE , 60
	.byte		VOL   , 100*sasageyo_mvl/mxv
	.byte		        100*sasageyo_mvl/mxv
	.byte		PAN   , c_v-1
	.byte		        c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte		N11   , An1 , v052
	.byte	W12
	.byte		N11   
	.byte	W24
	.byte		N20   
	.byte	W24
	.byte		N20   
	.byte	W24
	.byte		N20   
	.byte	W12
@ 003   ----------------------------------------
	.byte	W12
	.byte		        Fn1 
	.byte	W24
	.byte		N20   
	.byte	W24
	.byte		        En1 
	.byte	W24
	.byte		N11   
	.byte	W11
sasageyo_1_B1:
	.byte	W01
@ 004   ----------------------------------------
sasageyo_1_004:
	.byte		N11   , Fs2 , v080
	.byte	W12
	.byte		N17   , Cs3 
	.byte	W24
	.byte		        Dn3 
	.byte	W24
	.byte		        Bn2 
	.byte	W24
	.byte		        Cs3 
	.byte	W12
	.byte	PEND
@ 005   ----------------------------------------
	.byte	W12
	.byte		N17   
	.byte	W24
	.byte		        Dn3 
	.byte	W24
	.byte		N20   , Bn2 
	.byte	W24
	.byte		N11   , Fs2 
	.byte	W12
@ 006   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_1_004
@ 007   ----------------------------------------
sasageyo_1_007:
	.byte	W12
	.byte		N17   , Cs3 , v080
	.byte	W24
	.byte		        Dn3 
	.byte	W24
	.byte		N20   , Bn2 
	.byte	W24
	.byte		N05   , Fs2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte	PEND
@ 008   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_1_004
@ 009   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_1_007
@ 010   ----------------------------------------
	.byte		N11   , Fs2 , v080
	.byte	W12
	.byte		N17   , Cs3 
	.byte	W24
	.byte		N23   , Dn3 
	.byte	W36
	.byte		        Bn2 
	.byte	W24
@ 011   ----------------------------------------
	.byte		N68   , Cs3 , v080, gtp3
	.byte	W84
	.byte		N05   , An2 , v096
	.byte	W06
	.byte		N05   
	.byte	W06
@ 012   ----------------------------------------
	.byte		N07   
	.byte	W12
	.byte		        En2 
	.byte		N17   , En3 
	.byte	W12
	.byte		N07   , An2 
	.byte	W12
	.byte		        En2 
	.byte		N17   , Fn3 
	.byte	W12
	.byte		N07   , An2 
	.byte	W12
	.byte		        En2 
	.byte		N17   , Dn3 
	.byte	W12
	.byte		N07   , An2 
	.byte	W12
	.byte		        En2 
	.byte		N17   , En3 
	.byte	W12
@ 013   ----------------------------------------
	.byte		N07   , An2 
	.byte	W12
	.byte		        En2 
	.byte		N17   , En3 
	.byte	W12
	.byte		N07   , An2 
	.byte	W12
	.byte		        En2 
	.byte		N17   , Fn3 
	.byte	W12
	.byte		N07   , An2 
	.byte	W12
	.byte		        En2 
	.byte		N17   , Dn3 
	.byte	W12
	.byte		N07   , Gn2 
	.byte	W12
	.byte		        Dn2 
	.byte		N11   , An2 
	.byte	W12
@ 014   ----------------------------------------
	.byte		N07   , Fn2 
	.byte		N11   , An2 
	.byte	W12
	.byte		N07   , Cn2 
	.byte		N17   , En3 
	.byte	W12
	.byte		N07   , Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte		N17   , Fn3 
	.byte	W12
	.byte		N07   , Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte		N17   , Dn3 
	.byte	W12
	.byte		N07   , Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte		N17   , En3 
	.byte	W12
@ 015   ----------------------------------------
	.byte		N07   , Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte		N17   , En3 
	.byte	W12
	.byte		N07   , Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte		N17   , Fn3 
	.byte	W12
	.byte		N07   , Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte		N17   , Dn3 
	.byte	W12
	.byte		N07   , En2 
	.byte	W12
	.byte		        Cn2 
	.byte		N05   , An2 
	.byte	W06
	.byte		N05   
	.byte	W06
@ 016   ----------------------------------------
	.byte		N07   , Dn2 
	.byte		N11   , An2 
	.byte	W12
	.byte		N07   , An1 
	.byte		N17   , En3 
	.byte	W12
	.byte		N07   , Dn2 
	.byte	W12
	.byte		        An1 
	.byte		N17   , Fn3 
	.byte	W12
	.byte		N07   , Dn2 
	.byte	W12
	.byte		        An1 
	.byte		N17   , Dn3 
	.byte	W12
	.byte		N07   , Dn2 
	.byte	W12
	.byte		        An1 
	.byte		N17   , En3 
	.byte	W12
@ 017   ----------------------------------------
	.byte		N07   , Cn2 
	.byte	W12
	.byte		        Gn1 
	.byte		N17   , En3 
	.byte	W12
	.byte		N07   , Cn2 
	.byte	W12
	.byte		        Gn1 
	.byte		N17   , Fn3 
	.byte	W12
	.byte		N07   , Cn2 
	.byte	W12
	.byte		        Gn1 
	.byte		N17   , Dn3 
	.byte	W12
	.byte		N07   , Cn2 
	.byte	W12
	.byte		        Gn1 
	.byte		N05   , An2 
	.byte	W06
	.byte		N05   
	.byte	W06
@ 018   ----------------------------------------
	.byte		N07   , As1 
	.byte		N11   , An2 
	.byte	W12
	.byte		N07   , Fn1 
	.byte		N17   , En3 
	.byte	W12
	.byte		N07   , As1 
	.byte	W12
	.byte		        Fn1 
	.byte		N23   , Fn3 
	.byte	W12
	.byte		N07   , As1 
	.byte	W12
	.byte		        Fn1 
	.byte	W12
	.byte		        As1 
	.byte		N23   , Dn3 
	.byte	W12
	.byte		N07   , Fn1 
	.byte	W12
@ 019   ----------------------------------------
	.byte		        En2 
	.byte		N92   , En3 , v096, gtp3
	.byte	W12
	.byte		N07   , Bn1 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        Bn1 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        Bn1 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        Bn1 
	.byte	W12
@ 020   ----------------------------------------
	.byte		N11   , Cs3 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        Cs3 
	.byte	W12
@ 021   ----------------------------------------
	.byte		N32   , En3 , v096, gtp3
	.byte	W36
	.byte		N11   , Bn2 
	.byte	W12
	.byte		N32   , Cs3 , v096, gtp3
	.byte	W48
@ 022   ----------------------------------------
	.byte		N11   , Fs2 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Fs2 
	.byte	W12
@ 023   ----------------------------------------
	.byte		        En3 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		        En3 
	.byte	W12
	.byte		N05   , Bn2 
	.byte	W06
	.byte		N40   , Cs3 , v096, gtp1
	.byte	W54
@ 024   ----------------------------------------
sasageyo_1_024:
	.byte		N11   , En3 , v096
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		        En3 
	.byte	W12
	.byte	PEND
@ 025   ----------------------------------------
	.byte		        Dn3 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		N05   , Gn3 
	.byte	W06
	.byte		N40   , Gn3 , v096, gtp1
	.byte	W54
@ 026   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_1_024
@ 027   ----------------------------------------
	.byte		N44   , Dn3 , v096, gtp3
	.byte	W48
	.byte		        En3 , v096, gtp3
	.byte	W48
@ 028   ----------------------------------------
	.byte		N11   , Fn2 
	.byte		N11   , En3 
	.byte	W12
	.byte		        Cn2 
	.byte		N11   , Dn3 
	.byte	W12
	.byte		        Fn2 
	.byte		N11   , Cn3 
	.byte	W12
	.byte		        Cn2 
	.byte		N11   , Bn2 
	.byte	W12
	.byte		        Fn2 
	.byte		N11   , An2 
	.byte	W12
	.byte		        Cn2 
	.byte		N05   , Bn2 
	.byte	W06
	.byte		N17   , Cn3 
	.byte	W06
	.byte		N23   , Fn2 
	.byte	W12
	.byte		N11   , En3 
	.byte	W12
@ 029   ----------------------------------------
	.byte		        En2 
	.byte		N11   , Dn3 
	.byte	W12
	.byte		        Bn1 
	.byte		N11   , Cn3 
	.byte	W12
	.byte		        En2 
	.byte		N11   , Bn2 
	.byte	W12
	.byte		        Bn1 
	.byte		N11   , Cn3 
	.byte	W12
	.byte		        En2 
	.byte		N23   , Dn3 
	.byte	W12
	.byte		N11   , Bn1 
	.byte	W12
	.byte		N23   , En2 
	.byte		N23   , Gn3 
	.byte	W24
@ 030   ----------------------------------------
	.byte		N44   , An1 , v064, gtp3
	.byte		N11   , En3 
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		N44   , Bn1 , v064, gtp3
	.byte		N11   , An2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		        En3 , v080
	.byte	W12
@ 031   ----------------------------------------
	.byte		N44   , Cn2 , v096, gtp3
	.byte		N32   , Gn3 , v080, gtp3
	.byte	W36
	.byte		N11   , Bn2 
	.byte	W12
	.byte		N44   , Cs2 , v096, gtp3
	.byte		N23   , Cs3 , v080
	.byte	W36
	.byte		N05   , En3 , v112
	.byte	W06
	.byte		N05   
	.byte	W06
@ 032   ----------------------------------------
	.byte		N44   , Dn2 , v052, gtp3
	.byte		N32   , Fn3 , v112, gtp3
	.byte	W36
	.byte		N11   
	.byte	W12
	.byte		N44   , Ds2 , v052, gtp3
	.byte		N05   , Fs3 , v112
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N11   , Ds3 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		        An3 
	.byte	W12
@ 033   ----------------------------------------
	.byte		N44   , En2 , v052, gtp3
	.byte		N44   , An3 , v112, gtp3
	.byte	W48
	.byte		        En1 , v052, gtp3
	.byte		N32   , Gs3 , v112, gtp3
	.byte	W36
	.byte		N11   , Cn3 , v096
	.byte	W12
@ 034   ----------------------------------------
	.byte		N44   , An1 , v080, gtp3
	.byte		N32   , Cn3 , v096, gtp3
	.byte	W36
	.byte		N11   , Dn3 
	.byte	W12
	.byte		N44   , Gn1 , v080, gtp3
	.byte		N28   , Dn3 , v096, gtp1
	.byte	W36
	.byte		N11   , Fn3 
	.byte	W12
@ 035   ----------------------------------------
	.byte		N44   , Cn2 , v080, gtp3
	.byte		N32   , Fn3 , v096, gtp3
	.byte	W36
	.byte		N11   , En3 
	.byte	W12
	.byte		N44   , Cn1 , v080, gtp3
	.byte		N40   , En3 , v096, gtp1
	.byte	W48
@ 036   ----------------------------------------
	.byte		N44   , Fn1 , v080, gtp3
	.byte		N44   , Cn3 , v096, gtp3
	.byte	W48
	.byte		        Gn1 , v080, gtp3
	.byte		N11   , Dn3 , v096
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        An2 
	.byte	W12
@ 037   ----------------------------------------
	.byte		N44   , Cn1 , v080, gtp3
	.byte		N32   , An2 , v096, gtp3
	.byte	W36
	.byte		N11   , Gn2 
	.byte	W12
	.byte		N44   , Cn1 , v080, gtp3
	.byte		N28   , Gn2 , v096, gtp1
	.byte	W36
	.byte		N11   
	.byte	W12
@ 038   ----------------------------------------
	.byte		N32   , Cn3 , v096, gtp3
	.byte	W36
	.byte		N11   , Dn3 
	.byte	W12
	.byte		N28   , Dn3 , v096, gtp1
	.byte	W36
	.byte		N11   , Fn3 
	.byte	W12
@ 039   ----------------------------------------
	.byte		N44   , Fn3 , v096, gtp3
	.byte	W48
	.byte		N28   , En3 , v096, gtp1
	.byte	W36
	.byte		N11   , Dn3 
	.byte	W12
@ 040   ----------------------------------------
	.byte		N44   , Fn1 , v080, gtp3
	.byte		N32   , Cn3 , v112, gtp3
	.byte	W36
	.byte		N11   
	.byte	W12
	.byte		N44   , Gn1 , v080, gtp3
	.byte		N11   , Dn3 , v112
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        Fn3 
	.byte	W12
@ 041   ----------------------------------------
	.byte		N44   , En2 , v080, gtp3
	.byte		N32   , An3 , v112, gtp3
	.byte	W36
	.byte		N11   , Gs3 
	.byte	W12
	.byte		N44   , En1 , v080, gtp3
	.byte		N28   , Gs3 , v112, gtp1
	.byte	W36
	.byte		N11   , Ds3 
	.byte	W12
@ 042   ----------------------------------------
sasageyo_1_042:
	.byte		N44   , Cn2 , v080, gtp3
	.byte		N32   , Ds3 , v112, gtp3
	.byte	W36
	.byte		N11   , Fn3 
	.byte	W12
	.byte		N44   , Dn2 , v080, gtp3
	.byte		N28   , Fn3 , v112, gtp1
	.byte	W36
	.byte		N11   , Gs3 
	.byte	W12
	.byte	PEND
@ 043   ----------------------------------------
	.byte		N44   , Ds2 , v080, gtp3
	.byte		N32   , Gs3 , v112, gtp3
	.byte	W36
	.byte		N11   , Gn3 
	.byte	W12
	.byte		N23   , Ds2 , v080
	.byte		N40   , Gn3 , v112, gtp1
	.byte	W24
	.byte		N23   , As1 , v080
	.byte	W24
@ 044   ----------------------------------------
	.byte		N44   , Gs1 , v080, gtp3
	.byte		N44   , Ds3 , v112, gtp3
	.byte	W48
	.byte		        As1 , v080, gtp3
	.byte		N11   , Fn3 , v112
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
@ 045   ----------------------------------------
	.byte		N44   , Ds2 , v080, gtp3
	.byte		N32   , Cn3 , v112, gtp3
	.byte	W36
	.byte		N11   , As2 
	.byte	W12
	.byte		N23   , Ds2 , v080
	.byte		N28   , As2 , v112, gtp1
	.byte	W24
	.byte		N23   , Dn2 , v080
	.byte	W12
	.byte		N11   , As2 , v112
	.byte	W12
@ 046   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_1_042
@ 047   ----------------------------------------
	.byte		N44   , Ds2 , v080, gtp3
	.byte		N44   , Gs3 , v112, gtp3
	.byte	W48
	.byte		N23   , Ds2 , v080
	.byte		N28   , Gn3 , v112, gtp1
	.byte	W24
	.byte		N23   , Ds2 , v080
	.byte	W12
	.byte		N05   , Fn3 , v112
	.byte	W06
	.byte		N05   
	.byte	W06
@ 048   ----------------------------------------
	.byte		N11   , Gs1 , v080
	.byte		N32   , Ds3 , v112, gtp3
	.byte	W36
	.byte		N11   
	.byte	W12
	.byte		        Fn3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N23   , Gn1 , v080
	.byte		N17   , Dn3 , v112
	.byte	W24
@ 049   ----------------------------------------
	.byte		N92   , Cn3 , v112, gtp3
	.byte	W12
	.byte		N11   , Cn2 , v080
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		        As1 
	.byte	W12
@ 050   ----------------------------------------
	.byte	W12
	.byte		        Cn2 
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		        As1 
	.byte	W12
@ 051   ----------------------------------------
	.byte	W12
	.byte		        Cn2 
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		        Gs1 
	.byte	W12
@ 052   ----------------------------------------
	.byte	W12
	.byte		N11   
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		        Gn1 
	.byte	W24
	.byte		N11   
	.byte	W12
@ 053   ----------------------------------------
sasageyo_1_053:
	.byte	W12
	.byte		N11   , Ds2 , v080
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		        Cs2 
	.byte	W12
	.byte	PEND
@ 054   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_1_053
@ 055   ----------------------------------------
	.byte	W12
	.byte		N11   , Ds2 , v080
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		        Bn1 
	.byte	W12
@ 056   ----------------------------------------
	.byte	W12
	.byte		N11   
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		        As1 
	.byte	W24
	.byte		N11   
	.byte	W12
@ 057   ----------------------------------------
	.byte		        Ds2 
	.byte	W11
	.byte	GOTO
	 .word	sasageyo_1_B1
sasageyo_1_B2:
	.byte	FINE

@**************** Track 2 (Midi-Chn.2) ****************@

sasageyo_2:
	.byte	KEYSH , sasageyo_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 80
	.byte		VOL   , 100*sasageyo_mvl/mxv
	.byte		        100*sasageyo_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W92
	.byte	W03
sasageyo_2_B1:
	.byte	W01
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
sasageyo_2_012:
	.byte		N11   , An2 , v064
	.byte	W12
	.byte		N17   , Cn3 
	.byte	W24
	.byte		        Dn3 
	.byte	W24
	.byte		        Bn2 
	.byte	W24
	.byte		        Cn3 
	.byte	W12
	.byte	PEND
@ 013   ----------------------------------------
sasageyo_2_013:
	.byte	W12
	.byte		N17   , Cn3 , v064
	.byte	W24
	.byte		        Dn3 
	.byte	W24
	.byte		        Bn2 
	.byte	W24
	.byte		N11   , An2 
	.byte	W12
	.byte	PEND
@ 014   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_2_012
@ 015   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_2_013
@ 016   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_2_012
@ 017   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_2_013
@ 018   ----------------------------------------
	.byte		N11   , An2 , v064
	.byte	W12
	.byte		N17   , As2 
	.byte	W24
	.byte		N23   
	.byte	W36
	.byte		        An2 
	.byte	W24
@ 019   ----------------------------------------
	.byte		N44   , An2 , v064, gtp3
	.byte	W48
	.byte		        Gs2 , v064, gtp3
	.byte	W48
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte		N32   , En3 , v064, gtp3
	.byte	W36
	.byte		N11   , Bn2 
	.byte	W12
	.byte		N32   , Cs3 , v064, gtp3
	.byte	W48
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte		N11   , En3 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		        En3 
	.byte	W12
	.byte		N05   , Bn2 
	.byte	W06
	.byte		N40   , Cs3 , v064, gtp1
	.byte	W54
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte		N11   , Dn3 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		N05   , Gn3 
	.byte	W06
	.byte		N40   , Gn3 , v064, gtp1
	.byte	W54
@ 026   ----------------------------------------
	.byte	W96
@ 027   ----------------------------------------
	.byte		N44   , An3 , v064, gtp3
	.byte	W48
	.byte		        Gs3 , v064, gtp3
	.byte	W48
@ 028   ----------------------------------------
	.byte	W96
@ 029   ----------------------------------------
	.byte	W96
@ 030   ----------------------------------------
	.byte		N11   , En3 , v080
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		        En3 
	.byte	W12
@ 031   ----------------------------------------
	.byte		N32   , En3 , v080, gtp3
	.byte	W36
	.byte		N11   , Dn3 
	.byte	W12
	.byte		N23   , En3 
	.byte	W48
@ 032   ----------------------------------------
	.byte		N32   , Dn3 , v080, gtp3
	.byte	W36
	.byte		N11   
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
@ 033   ----------------------------------------
	.byte		N44   , En3 , v080, gtp3
	.byte	W48
	.byte		        En3 , v080, gtp3
	.byte	W48
@ 034   ----------------------------------------
	.byte	W96
@ 035   ----------------------------------------
	.byte	W96
@ 036   ----------------------------------------
	.byte	W96
@ 037   ----------------------------------------
	.byte	W96
@ 038   ----------------------------------------
	.byte		N32   , An2 , v052, gtp3
	.byte	W36
	.byte		N11   , Bn2 
	.byte	W12
	.byte		N28   , Bn2 , v052, gtp1
	.byte	W36
	.byte		N11   , Dn3 
	.byte	W12
@ 039   ----------------------------------------
	.byte		N44   , Dn3 , v052, gtp3
	.byte	W48
	.byte		N28   , Cn3 , v052, gtp1
	.byte	W48
@ 040   ----------------------------------------
	.byte	W96
@ 041   ----------------------------------------
	.byte	W96
@ 042   ----------------------------------------
sasageyo_2_042:
	.byte		N32   , Cn3 , v096, gtp3
	.byte	W36
	.byte		N11   , Dn3 
	.byte	W12
	.byte		N28   , Dn3 , v096, gtp1
	.byte	W36
	.byte		N11   , Fn3 
	.byte	W12
	.byte	PEND
@ 043   ----------------------------------------
	.byte		N32   , Fn3 , v096, gtp3
	.byte	W36
	.byte		N11   , Ds3 
	.byte	W12
	.byte		N40   , Ds3 , v096, gtp1
	.byte	W48
@ 044   ----------------------------------------
	.byte		N44   , Ds3 , v096, gtp3
	.byte	W48
	.byte		N11   , Fn3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
@ 045   ----------------------------------------
	.byte		N32   , Cn3 , v096, gtp3
	.byte	W36
	.byte		N11   , As2 
	.byte	W12
	.byte		N28   , As2 , v096, gtp1
	.byte	W36
	.byte		N11   
	.byte	W12
@ 046   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_2_042
@ 047   ----------------------------------------
	.byte		N44   , Fn3 , v096, gtp3
	.byte	W48
	.byte		N28   , Ds3 , v096, gtp1
	.byte	W36
	.byte		N05   , Fn3 
	.byte	W06
	.byte		N05   
	.byte	W06
@ 048   ----------------------------------------
	.byte		N32   , Ds3 , v096, gtp3
	.byte	W36
	.byte		N11   
	.byte	W12
	.byte		        Fn3 
	.byte	W12
	.byte		        Ds3 
	.byte	W12
	.byte		N17   , Dn3 
	.byte	W24
@ 049   ----------------------------------------
	.byte		TIE   , Cn3 
	.byte	W96
@ 050   ----------------------------------------
	.byte	W92
	.byte	W03
	.byte		EOT   
	.byte	W01
@ 051   ----------------------------------------
	.byte	W96
@ 052   ----------------------------------------
	.byte	W96
@ 053   ----------------------------------------
	.byte	W96
@ 054   ----------------------------------------
	.byte	W96
@ 055   ----------------------------------------
	.byte	W96
@ 056   ----------------------------------------
	.byte	W96
@ 057   ----------------------------------------
	.byte	W11
	.byte	GOTO
	 .word	sasageyo_2_B1
sasageyo_2_B2:
	.byte	FINE

@**************** Track 3 (Midi-Chn.3) ****************@

sasageyo_3:
	.byte	KEYSH , sasageyo_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 48
	.byte		VOL   , 100*sasageyo_mvl/mxv
	.byte		        100*sasageyo_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte		TIE   , An3 , v036
	.byte		TIE   , Bn3 
	.byte	W96
@ 001   ----------------------------------------
	.byte	W92
	.byte	W03
	.byte		EOT   , An3 
	.byte		        Bn3 
	.byte	W01
@ 002   ----------------------------------------
	.byte		N11   , An3 , v096
	.byte	W12
	.byte		N17   , En4 
	.byte	W24
	.byte		N20   , Fn4 
	.byte	W24
	.byte		        Dn4 
	.byte	W24
	.byte		        En4 
	.byte	W12
@ 003   ----------------------------------------
	.byte	W12
	.byte		        Cn4 
	.byte	W24
	.byte		        Dn4 
	.byte	W24
	.byte		        Bn3 
	.byte	W24
	.byte		N11   , Cn4 
	.byte	W11
sasageyo_3_B1:
	.byte	W01
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte		N32   , En3 , v096, gtp3
	.byte	W36
	.byte		N11   , Bn2 
	.byte	W12
	.byte		N32   , Cs3 , v096, gtp3
	.byte	W48
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte		N11   , En3 
	.byte	W12
	.byte		        Fs3 
	.byte	W12
	.byte		        En3 
	.byte	W12
	.byte		N05   , Bn2 
	.byte	W06
	.byte		N40   , Cs3 , v096, gtp1
	.byte	W54
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte		N11   , Dn3 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		N05   , Gn3 
	.byte	W06
	.byte		N40   , Gn3 , v096, gtp1
	.byte	W54
@ 026   ----------------------------------------
	.byte	W96
@ 027   ----------------------------------------
sasageyo_3_027:
	.byte		N44   , An4 , v096, gtp3
	.byte	W48
	.byte		        Gs4 , v096, gtp3
	.byte	W48
	.byte	PEND
@ 028   ----------------------------------------
	.byte	W24
	.byte		N11   , Fn3 
	.byte		N11   , Fn4 
	.byte	W48
	.byte		N23   , Fn3 
	.byte		N23   , Fn4 
	.byte	W24
@ 029   ----------------------------------------
	.byte	W24
	.byte		N11   , En3 
	.byte		N11   , En4 
	.byte	W48
	.byte		N23   , En3 
	.byte		N23   , En4 
	.byte	W24
@ 030   ----------------------------------------
	.byte	W24
	.byte		N11   , En3 , v064
	.byte		N11   , En4 
	.byte	W48
	.byte		N23   , Dn3 
	.byte		N23   , Dn4 
	.byte	W24
@ 031   ----------------------------------------
	.byte	W24
	.byte		N11   , En3 , v080
	.byte		N11   , En4 
	.byte	W48
	.byte		N23   , En3 
	.byte		N23   , En4 
	.byte	W24
@ 032   ----------------------------------------
	.byte	W96
@ 033   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_3_027
@ 034   ----------------------------------------
	.byte		N32   , Cn4 , v096, gtp3
	.byte	W36
	.byte		N11   , Dn4 
	.byte	W12
	.byte		N28   , Dn4 , v096, gtp1
	.byte	W36
	.byte		N11   , Fn4 
	.byte	W12
@ 035   ----------------------------------------
	.byte		N32   , Fn4 , v096, gtp3
	.byte	W36
	.byte		N11   , En4 
	.byte	W12
	.byte		N40   , En4 , v096, gtp1
	.byte	W48
@ 036   ----------------------------------------
	.byte		N44   , Cn4 , v096, gtp3
	.byte	W48
	.byte		N11   , Dn4 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        Bn3 
	.byte	W12
	.byte		        An3 
	.byte	W12
@ 037   ----------------------------------------
	.byte		N32   , An3 , v096, gtp3
	.byte	W36
	.byte		N11   , Gn3 
	.byte	W12
	.byte		N28   , Gn3 , v096, gtp1
	.byte	W36
	.byte		N11   
	.byte	W12
@ 038   ----------------------------------------
	.byte		N32   , Cn3 , v096, gtp3
	.byte		N32   , An3 , v096, gtp3
	.byte		N32   , Cn4 , v096, gtp3
	.byte	W36
	.byte		N11   , Dn3 
	.byte		N11   , Bn3 
	.byte		N11   , Dn4 
	.byte	W12
	.byte		N28   , Dn3 , v096, gtp1
	.byte		N28   , Bn3 , v096, gtp1
	.byte		N28   , Dn4 , v096, gtp1
	.byte	W36
	.byte		N11   , Fn3 
	.byte		N11   , Dn4 
	.byte		N11   , Fn4 
	.byte	W12
@ 039   ----------------------------------------
	.byte		N44   , Fn3 , v096, gtp3
	.byte		N44   , Dn4 , v096, gtp3
	.byte		N44   , Fn4 , v096, gtp3
	.byte	W48
	.byte		N28   , En3 , v096, gtp1
	.byte		N28   , Cn4 , v096, gtp1
	.byte		N28   , En4 , v096, gtp1
	.byte	W36
	.byte		N11   , Dn3 
	.byte		N11   , Dn4 
	.byte	W12
@ 040   ----------------------------------------
	.byte		N32   , Cn4 , v096, gtp3
	.byte	W36
	.byte		N11   
	.byte	W12
	.byte		        Dn4 
	.byte	W12
	.byte		        Bn3 
	.byte	W12
	.byte		        Dn4 
	.byte	W12
	.byte		        Fn4 
	.byte	W12
@ 041   ----------------------------------------
	.byte		N32   , An4 , v096, gtp3
	.byte	W36
	.byte		N11   , Gs4 
	.byte	W12
	.byte		N28   , Gs4 , v096, gtp1
	.byte	W36
	.byte		N11   , Ds4 
	.byte	W12
@ 042   ----------------------------------------
sasageyo_3_042:
	.byte		N32   , Ds4 , v112, gtp3
	.byte	W36
	.byte		N11   , Fn4 
	.byte	W12
	.byte		N28   , Fn4 , v112, gtp1
	.byte	W36
	.byte		N11   , Gs4 
	.byte	W12
	.byte	PEND
@ 043   ----------------------------------------
	.byte		N32   , Gs4 , v112, gtp3
	.byte	W36
	.byte		N11   , Gn4 
	.byte	W12
	.byte		N40   , Gn4 , v112, gtp1
	.byte	W48
@ 044   ----------------------------------------
	.byte		N44   , Ds4 , v112, gtp3
	.byte	W48
	.byte		N11   , Fn4 
	.byte	W12
	.byte		        Ds4 
	.byte	W12
	.byte		        Dn4 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
@ 045   ----------------------------------------
	.byte		N32   , Cn4 , v112, gtp3
	.byte	W36
	.byte		N11   , As3 
	.byte	W12
	.byte		N28   , As3 , v112, gtp1
	.byte	W36
	.byte		N11   
	.byte	W12
@ 046   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_3_042
@ 047   ----------------------------------------
	.byte		N44   , Gs4 , v112, gtp3
	.byte	W48
	.byte		N28   , Gn4 , v112, gtp1
	.byte	W36
	.byte		N05   , Fn4 
	.byte	W06
	.byte		N05   
	.byte	W06
@ 048   ----------------------------------------
	.byte		N11   , Ds4 
	.byte	W96
@ 049   ----------------------------------------
sasageyo_3_049:
	.byte		N11   , Cn4 , v112
	.byte	W12
	.byte		N17   , Gn4 
	.byte	W24
	.byte		        Gs4 
	.byte	W24
	.byte		        Fn4 
	.byte	W24
	.byte		N11   , Gn4 
	.byte	W12
	.byte	PEND
@ 050   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_3_049
@ 051   ----------------------------------------
	.byte		N11   , Cn4 , v112
	.byte	W12
	.byte		N17   , Gn4 
	.byte	W24
	.byte		        Gs4 
	.byte	W24
	.byte		        Fn4 
	.byte	W24
	.byte		        Gn4 
	.byte	W12
@ 052   ----------------------------------------
	.byte	W12
	.byte		        Ds4 
	.byte	W24
	.byte		        Fn4 
	.byte	W24
	.byte		        Dn4 
	.byte	W24
	.byte		N11   , Ds4 
	.byte	W12
@ 053   ----------------------------------------
sasageyo_3_053:
	.byte		N11   , Ds4 , v127
	.byte	W12
	.byte		N17   , As4 
	.byte	W24
	.byte		        Bn4 
	.byte	W24
	.byte		        Gs4 
	.byte	W24
	.byte		N11   , As4 
	.byte	W12
	.byte	PEND
@ 054   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_3_053
@ 055   ----------------------------------------
	.byte		N11   , Ds4 , v127
	.byte	W12
	.byte		N17   , As4 
	.byte	W24
	.byte		        Bn4 
	.byte	W24
	.byte		        Gs4 
	.byte	W24
	.byte		        As4 
	.byte	W12
@ 056   ----------------------------------------
	.byte	W12
	.byte		        Fs4 
	.byte	W24
	.byte		        Gs4 
	.byte	W24
	.byte		        Fn4 
	.byte	W24
	.byte		N11   , Fs4 
	.byte	W12
@ 057   ----------------------------------------
	.byte	W11
	.byte	GOTO
	 .word	sasageyo_3_B1
sasageyo_3_B2:
	.byte	FINE

@**************** Track 4 (Midi-Chn.4) ****************@

sasageyo_4:
	.byte	KEYSH , sasageyo_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 33
	.byte		VOL   , 100*sasageyo_mvl/mxv
	.byte		        100*sasageyo_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W84
	.byte		N05   , An1 , v064
	.byte		N05   , En2 
	.byte	W06
	.byte		        An1 
	.byte		N05   , En2 
	.byte	W06
@ 002   ----------------------------------------
	.byte		BEND  , c_v+0
	.byte		        c_v+1
	.byte		N92   , En4 , v080, gtp3
	.byte		N11   , An4 , v052
	.byte	W01
	.byte		BEND  , c_v+3
	.byte	W01
	.byte		        c_v+4
	.byte	W01
	.byte		        c_v+6
	.byte	W01
	.byte		        c_v+8
	.byte		        c_v+9
	.byte	W01
	.byte		        c_v+11
	.byte	W01
	.byte		        c_v+12
	.byte	W01
	.byte		        c_v+14
	.byte	W01
	.byte		        c_v+16
	.byte	W04
	.byte		N17   , En5 
	.byte	W24
	.byte		N19   , Fn5 
	.byte	W12
	.byte		BEND  , c_v+16
	.byte		        c_v+15
	.byte	W01
	.byte		        c_v+15
	.byte	W01
	.byte		        c_v+15
	.byte	W01
	.byte		        c_v+14
	.byte	W01
	.byte		        c_v+14
	.byte		        c_v+14
	.byte	W01
	.byte		        c_v+14
	.byte	W01
	.byte		        c_v+13
	.byte	W01
	.byte		        c_v+13
	.byte	W01
	.byte		        c_v+13
	.byte		        c_v+13
	.byte	W01
	.byte		        c_v+12
	.byte	W01
	.byte		        c_v+12
	.byte	W01
	.byte		        c_v+12
	.byte	W01
	.byte		        c_v+11
	.byte		        c_v+11
	.byte		N19   , Dn5 
	.byte	W01
	.byte		BEND  , c_v+11
	.byte	W01
	.byte		        c_v+11
	.byte	W01
	.byte		        c_v+10
	.byte	W01
	.byte		        c_v+10
	.byte		        c_v+10
	.byte	W01
	.byte		        c_v+10
	.byte	W01
	.byte		        c_v+9
	.byte	W01
	.byte		        c_v+9
	.byte	W01
	.byte		        c_v+9
	.byte		        c_v+9
	.byte	W01
	.byte		        c_v+8
	.byte	W01
	.byte		        c_v+8
	.byte	W01
	.byte		        c_v+8
	.byte	W01
	.byte		        c_v+8
	.byte		        c_v+7
	.byte	W01
	.byte		        c_v+7
	.byte	W01
	.byte		        c_v+7
	.byte	W01
	.byte		        c_v+6
	.byte	W01
	.byte		        c_v+6
	.byte		        c_v+6
	.byte	W01
	.byte		        c_v+6
	.byte	W01
	.byte		        c_v+5
	.byte	W01
	.byte		        c_v+5
	.byte	W01
	.byte		        c_v+5
	.byte		        c_v+5
	.byte	W01
	.byte		        c_v+4
	.byte	W01
	.byte		        c_v+4
	.byte	W01
	.byte		        c_v+4
	.byte	W01
	.byte		        c_v+3
	.byte		        c_v+3
	.byte		N19   , En5 
	.byte	W01
	.byte		BEND  , c_v+3
	.byte	W01
	.byte		        c_v+3
	.byte	W01
	.byte		        c_v+2
	.byte	W01
	.byte		        c_v+2
	.byte		        c_v+2
	.byte	W01
	.byte		        c_v+2
	.byte	W01
	.byte		        c_v+1
	.byte	W01
	.byte		        c_v+1
	.byte	W01
	.byte		        c_v+1
	.byte		        c_v+1
	.byte	W01
	.byte		        c_v+0
	.byte	W01
	.byte		        c_v+0
	.byte	W01
	.byte		        c_v+0
	.byte	W01
@ 003   ----------------------------------------
	.byte		        c_v+0
	.byte		        c_v+0
	.byte		N92   , En4 , v080, gtp3
	.byte	W12
	.byte		N19   , Cn5 , v052
	.byte	W24
	.byte		        Dn5 
	.byte	W24
	.byte		        Bn4 
	.byte	W24
	.byte		N11   , Cn5 
	.byte	W11
sasageyo_4_B1:
	.byte	W01
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W84
	.byte		N11   , Cs4 , v052
	.byte	W12
@ 011   ----------------------------------------
	.byte		N44   , Fs4 , v052, gtp1
	.byte	W48
	.byte		        Fn4 , v052, gtp1
	.byte	W48
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W72
	.byte		N05   , Dn5 , v064
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        En5 
	.byte	W06
@ 016   ----------------------------------------
	.byte	W24
	.byte		        Dn5 
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        En5 
	.byte	W54
@ 017   ----------------------------------------
	.byte	W36
	.byte		        Fn5 
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		N22   , Dn5 
	.byte	W48
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte		N05   , En5 
	.byte	W06
	.byte		        Fn5 
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		        Fn5 
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		        Fn5 
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		        Fn5 
	.byte	W06
	.byte		N44   , En5 , v064, gtp1
	.byte	W48
@ 020   ----------------------------------------
sasageyo_4_020:
	.byte		N11   , An1 , v080
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        En2 
	.byte		N11   , An2 
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        Dn2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte		N11   , An2 
	.byte	W12
	.byte		        Dn2 
	.byte	W12
	.byte	PEND
@ 021   ----------------------------------------
	.byte		        En2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte		N11   , An2 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N23   , Gs1 
	.byte	W24
@ 022   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_4_020
@ 023   ----------------------------------------
	.byte		N11   , En2 , v080
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte		N11   , An2 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        Cs2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        Fs2 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
@ 024   ----------------------------------------
sasageyo_4_024:
	.byte		N11   , An2 , v080
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte		N11   , Gn3 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte		N11   , En3 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte	PEND
@ 025   ----------------------------------------
	.byte		        Gn2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte		N11   , Gn3 
	.byte	W12
	.byte		        Gn2 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Bn1 
	.byte	W12
	.byte		N11   
	.byte	W12
@ 026   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_4_024
@ 027   ----------------------------------------
	.byte		N11   , En2 , v080
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
@ 028   ----------------------------------------
	.byte	W96
@ 029   ----------------------------------------
	.byte	W96
@ 030   ----------------------------------------
	.byte	W96
@ 031   ----------------------------------------
	.byte		N44   , Cn2 , v052, gtp3
	.byte		N44   , En2 , v052, gtp3
	.byte	W48
	.byte		        Cs2 , v064, gtp3
	.byte	W24
	.byte		N05   , En5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        En5 
	.byte	W12
@ 032   ----------------------------------------
	.byte		N23   , Dn2 , v080
	.byte		N44   , Fn4 , v064, gtp1
	.byte	W24
	.byte		N23   , Dn2 , v080
	.byte	W24
	.byte		        Ds2 
	.byte		N44   , Fs4 , v064, gtp1
	.byte	W24
	.byte		N23   , Ds2 , v080
	.byte	W24
@ 033   ----------------------------------------
	.byte		N11   , Bn2 
	.byte		N44   , An4 , v064, gtp1
	.byte	W12
	.byte		N11   , Bn2 , v080
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte		N44   , Gs4 , v064, gtp1
	.byte	W12
	.byte		N11   , Bn2 , v080
	.byte	W12
	.byte		N23   
	.byte	W24
@ 034   ----------------------------------------
	.byte	W96
@ 035   ----------------------------------------
	.byte	W96
@ 036   ----------------------------------------
	.byte	W96
@ 037   ----------------------------------------
	.byte	W96
@ 038   ----------------------------------------
	.byte	W96
@ 039   ----------------------------------------
	.byte	W96
@ 040   ----------------------------------------
	.byte		N11   , Cn3 
	.byte		N44   , Fn4 , v064, gtp1
	.byte	W12
	.byte		N11   , Cn3 , v080
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Dn3 
	.byte		N44   , Gn4 , v064, gtp1
	.byte	W12
	.byte		N11   , Dn3 , v080
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
@ 041   ----------------------------------------
	.byte		        Bn2 
	.byte		N44   , An4 , v064, gtp1
	.byte	W12
	.byte		N11   , Bn2 , v080
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte		N44   , Gs4 , v064, gtp1
	.byte	W12
	.byte		N11   , Bn2 , v080
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
@ 042   ----------------------------------------
sasageyo_4_042:
	.byte		N05   , Ds2 , v080
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Fn2 
	.byte		N05   , Ds5 , v096
	.byte	W06
	.byte		        Fn2 , v080
	.byte		N05   , Fn5 , v096
	.byte	W06
	.byte		        Fn2 , v080
	.byte		N05   , Ds5 , v096
	.byte	W06
	.byte		        Fn2 , v080
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte	PEND
@ 043   ----------------------------------------
sasageyo_4_043:
	.byte		N05   , Gn2 , v080
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N05   , Ds5 , v096
	.byte	W06
	.byte		        Gn2 , v080
	.byte		N05   , Fn5 , v096
	.byte	W06
	.byte		        Gn2 , v080
	.byte		N05   , Ds5 , v096
	.byte	W06
	.byte		        Gn2 , v080
	.byte	W06
	.byte		        Fn2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte	PEND
@ 044   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_4_042
@ 045   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_4_043
@ 046   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_4_042
@ 047   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_4_043
@ 048   ----------------------------------------
	.byte	W60
	.byte		N05   , Dn5 , v096
	.byte	W06
	.byte		        Ds5 
	.byte	W06
	.byte		        Gn1 , v112
	.byte		N05   , Dn5 , v096
	.byte	W06
	.byte		        Gn1 , v112
	.byte		N05   , Ds5 , v096
	.byte	W06
	.byte		N11   , Gn1 , v112
	.byte		N05   , Dn5 , v096
	.byte	W12
@ 049   ----------------------------------------
sasageyo_4_049:
	.byte		N05   , Cn2 , v080
	.byte		N11   , Cn5 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		        Gn2 
	.byte		N17   , Gn5 
	.byte	W06
	.byte		N05   , Gn2 
	.byte	W06
	.byte		        Cn2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Gn2 
	.byte		N19   , Gs5 
	.byte	W06
	.byte		N05   , Gn2 
	.byte	W06
	.byte		        Cn2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Gn2 
	.byte		N19   , Fn5 
	.byte	W06
	.byte		N05   , Gn2 
	.byte	W06
	.byte		        As1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Fn2 
	.byte		N11   , Gn5 
	.byte	W06
	.byte		N05   , Fn2 
	.byte	W06
	.byte	PEND
@ 050   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_4_049
@ 051   ----------------------------------------
	.byte		N05   , Cn2 , v080
	.byte		N11   , Cn5 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		        Gn2 
	.byte		N17   , Gn5 
	.byte	W06
	.byte		N05   , Gn2 
	.byte	W06
	.byte		        Cn2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Gn2 
	.byte		N19   , Gs5 
	.byte	W06
	.byte		N05   , Gn2 
	.byte	W06
	.byte		        Cn2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Gn2 
	.byte		N19   , Fn5 
	.byte	W06
	.byte		N05   , Gn2 
	.byte	W06
	.byte		        Cn2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		BEND  , c_v+0
	.byte		        c_v+1
	.byte		N11   , As3 , v112
	.byte		N19   , Gn5 , v080
	.byte	W01
	.byte		BEND  , c_v+2
	.byte	W01
	.byte		        c_v+4
	.byte	W01
	.byte		        c_v+5
	.byte	W01
	.byte		        c_v+7
	.byte		        c_v+8
	.byte	W01
	.byte		        c_v+9
	.byte	W01
	.byte		        c_v+11
	.byte	W01
	.byte		        c_v+12
	.byte	W01
	.byte		        c_v+14
	.byte		        c_v+15
	.byte	W01
	.byte		        c_v+17
	.byte	W01
	.byte		        c_v+18
	.byte	W01
	.byte		        c_v+19
	.byte	W01
@ 052   ----------------------------------------
	.byte		        c_v+0
	.byte		        c_v+21
	.byte		        c_v+21
	.byte		N92   , As3 , v112, gtp3
	.byte	W12
	.byte		N19   , Ds5 , v080
	.byte	W24
	.byte		        Fn5 
	.byte	W12
	.byte		BEND  , c_v+21
	.byte		        c_v+21
	.byte	W01
	.byte		        c_v+20
	.byte	W01
	.byte		        c_v+20
	.byte	W01
	.byte		        c_v+20
	.byte	W01
	.byte		        c_v+20
	.byte		        c_v+20
	.byte	W01
	.byte		        c_v+20
	.byte	W01
	.byte		        c_v+19
	.byte	W01
	.byte		        c_v+19
	.byte	W01
	.byte		        c_v+19
	.byte		        c_v+19
	.byte	W01
	.byte		        c_v+19
	.byte	W01
	.byte		        c_v+18
	.byte	W01
	.byte		        c_v+18
	.byte	W01
	.byte		        c_v+18
	.byte		        c_v+18
	.byte		N19   , Dn5 
	.byte	W01
	.byte		BEND  , c_v+18
	.byte	W01
	.byte		        c_v+18
	.byte	W01
	.byte		        c_v+17
	.byte	W01
	.byte		        c_v+17
	.byte		        c_v+17
	.byte	W01
	.byte		        c_v+17
	.byte	W01
	.byte		        c_v+17
	.byte	W01
	.byte		        c_v+17
	.byte	W01
	.byte		        c_v+16
	.byte		        c_v+16
	.byte	W01
	.byte		        c_v+16
	.byte	W01
	.byte		        c_v+16
	.byte	W01
	.byte		        c_v+16
	.byte	W01
	.byte		        c_v+16
	.byte		        c_v+15
	.byte	W01
	.byte		        c_v+15
	.byte	W01
	.byte		        c_v+15
	.byte	W01
	.byte		        c_v+15
	.byte	W01
	.byte		        c_v+15
	.byte		        c_v+14
	.byte	W01
	.byte		        c_v+14
	.byte	W01
	.byte		        c_v+14
	.byte	W01
	.byte		        c_v+14
	.byte	W01
	.byte		        c_v+14
	.byte		        c_v+13
	.byte	W01
	.byte		        c_v+13
	.byte	W01
	.byte		        c_v+13
	.byte	W01
	.byte		        c_v+13
	.byte	W01
	.byte		        c_v+13
	.byte		        c_v+13
	.byte		N11   , Ds5 
	.byte	W01
	.byte		BEND  , c_v+12
	.byte	W01
	.byte		        c_v+12
	.byte	W01
	.byte		        c_v+12
	.byte	W01
	.byte		        c_v+12
	.byte		        c_v+12
	.byte	W01
	.byte		        c_v+12
	.byte	W01
	.byte		        c_v+11
	.byte	W01
	.byte		        c_v+11
	.byte	W01
	.byte		        c_v+11
	.byte		        c_v+11
	.byte	W01
	.byte		        c_v+11
	.byte	W01
	.byte		        c_v+10
	.byte	W01
	.byte		        c_v+10
	.byte	W01
@ 053   ----------------------------------------
	.byte		        c_v+0
	.byte		        c_v+10
	.byte		N05   , Ds2 , v096
	.byte		N11   , Ds4 , v080
	.byte	W06
	.byte		N05   , Ds2 , v096
	.byte	W06
	.byte		N05   
	.byte		N17   , As4 , v080
	.byte	W06
	.byte		N05   , Ds2 , v096
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Bn4 , v080
	.byte	W06
	.byte		N05   , Ds2 , v096
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Gs4 , v080
	.byte	W06
	.byte		N05   , Ds2 , v096
	.byte	W06
	.byte		        Cs2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N11   , As4 , v080
	.byte	W06
	.byte		N05   , Cs2 , v096
	.byte	W06
@ 054   ----------------------------------------
	.byte		        Ds3 , v080
	.byte		N11   , Ds4 
	.byte	W06
	.byte		N05   , Ds3 
	.byte	W06
	.byte		N05   
	.byte		N17   , As4 
	.byte	W06
	.byte		N05   , Ds3 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Bn4 
	.byte	W06
	.byte		N05   , Ds3 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Gs4 
	.byte	W06
	.byte		N05   , Ds3 
	.byte	W06
	.byte		N23   
	.byte	W12
	.byte		N11   , As4 
	.byte	W12
@ 055   ----------------------------------------
	.byte		N05   , Ds2 , v096
	.byte		N11   , Ds4 , v080
	.byte	W06
	.byte		N05   , Ds2 , v096
	.byte	W06
	.byte		N05   
	.byte		N17   , As4 , v080
	.byte	W06
	.byte		N05   , Ds2 , v096
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Bn4 , v080
	.byte	W06
	.byte		N05   , Ds2 , v096
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Gs4 , v080
	.byte	W06
	.byte		N05   , Ds2 , v096
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		BEND  , c_v+0
	.byte		N23   , As3 
	.byte		N19   , As4 
	.byte	W04
	.byte		BEND  , c_v+0
	.byte		        c_v+2
	.byte	W01
	.byte		        c_v+4
	.byte	W03
	.byte		        c_v+5
	.byte		        c_v+3
	.byte	W01
	.byte		        c_v+1
	.byte	W03
@ 056   ----------------------------------------
	.byte	W12
	.byte		        c_v+0
	.byte		N23   , As3 
	.byte		N19   , Fs4 
	.byte	W24
	.byte		N23   , Bn3 
	.byte		N19   , Gs4 
	.byte	W24
	.byte		N23   , Gs3 
	.byte		N19   , Fn4 
	.byte	W24
	.byte		N11   , As3 
	.byte		N11   , Fs4 
	.byte	W12
@ 057   ----------------------------------------
	.byte		TIE   , Fs3 , v036
	.byte		N11   , Ds4 
	.byte	W11
	.byte	GOTO
	 .word	sasageyo_4_B1
sasageyo_4_B2:
	.byte	W84
	.byte	W01
@ 058   ----------------------------------------
	.byte	W96
@ 059   ----------------------------------------
	.byte	W96
@ 060   ----------------------------------------
	.byte	W96
@ 061   ----------------------------------------
	.byte	W96
@ 062   ----------------------------------------
	.byte	W92
	.byte	W03
	.byte		EOT   , Fs3 
	.byte	FINE

@**************** Track 5 (Midi-Chn.5) ****************@

sasageyo_5:
	.byte	KEYSH , sasageyo_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 4
	.byte		VOL   , 100*sasageyo_mvl/mxv
	.byte		        100*sasageyo_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte		N05   , An1 , v036
	.byte		N11   , An3 , v064
	.byte	W06
	.byte		N05   , An1 , v036
	.byte	W06
	.byte		N05   
	.byte		N17   , En4 , v064
	.byte	W06
	.byte		N05   , An1 , v036
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Fn4 , v064
	.byte	W06
	.byte		N05   , An1 , v036
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Dn4 , v064
	.byte	W06
	.byte		N05   , An1 , v036
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , En4 , v064
	.byte	W06
	.byte		N05   , An1 , v036
	.byte	W06
@ 003   ----------------------------------------
	.byte		        Fn1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Cn4 , v064
	.byte	W06
	.byte		N05   , Fn1 , v036
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Dn4 , v064
	.byte	W06
	.byte		N05   , Fn1 , v036
	.byte	W06
	.byte		        En1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Bn3 , v064
	.byte	W06
	.byte		N05   , En1 , v036
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N11   , Cn4 , v064
	.byte	W06
	.byte		N05   , En1 , v036
	.byte	W05
sasageyo_5_B1:
	.byte	W01
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte		N07   , An2 , v052
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        En2 
	.byte	W12
@ 013   ----------------------------------------
	.byte		        An2 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        Gn2 
	.byte	W12
	.byte		        Dn2 
	.byte	W12
@ 014   ----------------------------------------
	.byte		        Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
@ 015   ----------------------------------------
	.byte		        Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        En2 
	.byte		N05   , Bn4 , v036
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		N07   , Bn1 , v052
	.byte		N05   , Bn4 , v036
	.byte	W06
	.byte		        Cn5 
	.byte	W06
@ 016   ----------------------------------------
	.byte		N07   , Dn2 , v052
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        Dn2 
	.byte		N05   , Bn4 , v036
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		N07   , An1 , v052
	.byte		N05   , Bn4 , v036
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		N07   , Dn2 , v052
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        Dn2 
	.byte	W12
	.byte		        An1 
	.byte	W12
@ 017   ----------------------------------------
	.byte		        Cn2 
	.byte	W12
	.byte		        Gn1 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Gn1 
	.byte		N05   , Dn5 , v036
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		N07   , Cn2 , v052
	.byte		N22   , Bn4 , v036
	.byte	W12
	.byte		N07   , Gn1 , v052
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Gn1 
	.byte	W12
@ 018   ----------------------------------------
	.byte		        As2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        As2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        As2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        As2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
@ 019   ----------------------------------------
	.byte		        En2 
	.byte		N05   , Bn4 , v036
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		N07   , Bn1 , v052
	.byte		N05   , Bn4 , v036
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		N07   , En2 , v052
	.byte		N05   , Bn4 , v036
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		N07   , Bn1 , v052
	.byte		N05   , Bn4 , v036
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		N07   , En2 , v052
	.byte		N44   , Bn4 , v036, gtp1
	.byte	W12
	.byte		N07   , Bn1 , v052
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        Bn1 
	.byte	W12
@ 020   ----------------------------------------
sasageyo_5_020:
	.byte		N11   , Fs2 , v052
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		        En3 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		        Dn2 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        Dn2 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte	PEND
@ 021   ----------------------------------------
	.byte		        En2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        Cs2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N23   , En2 
	.byte	W24
@ 022   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_5_020
@ 023   ----------------------------------------
	.byte		N11   , En2 , v052
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        Gs2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Cs3 
	.byte	W12
	.byte		N11   
	.byte	W12
@ 024   ----------------------------------------
sasageyo_5_024:
	.byte		N11   , An2 , v052
	.byte	W12
	.byte		        En3 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        Gn2 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte	PEND
@ 025   ----------------------------------------
	.byte		        Gn2 
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        Gn2 
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        Gn2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
@ 026   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_5_024
@ 027   ----------------------------------------
	.byte		N11   , Bn2 , v052
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
@ 028   ----------------------------------------
	.byte		        Fn2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
@ 029   ----------------------------------------
	.byte		        En2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N23   
	.byte	W24
@ 030   ----------------------------------------
	.byte		N44   , An3 , v064, gtp1
	.byte	W48
	.byte		        Gn3 , v064, gtp1
	.byte	W48
@ 031   ----------------------------------------
	.byte		        Cn2 , v052, gtp3
	.byte		N44   , En2 , v052, gtp3
	.byte		N44   , En3 , v080, gtp1
	.byte	W48
	.byte		        Cs2 , v052, gtp3
	.byte		N44   , En2 , v052, gtp3
	.byte	W24
	.byte		N05   , Cn5 , v064
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		        Cn5 
	.byte	W12
@ 032   ----------------------------------------
	.byte		N23   , Dn2 , v052
	.byte		N44   , Dn4 , v064, gtp1
	.byte	W24
	.byte		N23   , Dn2 , v052
	.byte	W24
	.byte		        Ds2 
	.byte		N44   , Ds4 , v064, gtp1
	.byte	W24
	.byte		N23   , Ds2 , v052
	.byte	W24
@ 033   ----------------------------------------
	.byte		N11   , En2 
	.byte		N44   , En4 , v064, gtp1
	.byte	W12
	.byte		N11   , En2 , v052
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte		N44   , En4 , v064, gtp1
	.byte	W12
	.byte		N11   , En2 , v052
	.byte	W12
	.byte		N23   
	.byte	W24
@ 034   ----------------------------------------
	.byte	W96
@ 035   ----------------------------------------
	.byte	W96
@ 036   ----------------------------------------
	.byte	W96
@ 037   ----------------------------------------
	.byte	W96
@ 038   ----------------------------------------
	.byte	W96
@ 039   ----------------------------------------
	.byte	W96
@ 040   ----------------------------------------
	.byte		N11   , Fn2 , v064
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Gn2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
@ 041   ----------------------------------------
	.byte		        En2 
	.byte		N44   , En4 , v064, gtp1
	.byte	W12
	.byte		N11   , En2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte		N44   , En4 , v064, gtp1
	.byte	W12
	.byte		N11   , En2 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
@ 042   ----------------------------------------
sasageyo_5_042:
	.byte		N05   , Cn2 , v064
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Dn2 
	.byte		N05   , As4 , v080
	.byte	W06
	.byte		        Dn2 , v064
	.byte		N05   , Cn5 , v080
	.byte	W06
	.byte		        Dn2 , v064
	.byte		N05   , As4 , v080
	.byte	W06
	.byte		        Dn2 , v064
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte	PEND
@ 043   ----------------------------------------
	.byte		        Ds2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N05   , As4 , v080
	.byte	W06
	.byte		        Ds2 , v064
	.byte		N05   , Cn5 , v080
	.byte	W06
	.byte		        Ds2 , v064
	.byte		N05   , As4 , v080
	.byte	W06
	.byte		        Ds2 , v064
	.byte	W06
	.byte		        As1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
@ 044   ----------------------------------------
	.byte		        Gs1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        As1 
	.byte		N05   , As4 , v080
	.byte	W06
	.byte		        As1 , v064
	.byte		N05   , Cn5 , v080
	.byte	W06
	.byte		        As1 , v064
	.byte		N05   , As4 , v080
	.byte	W06
	.byte		        As1 , v064
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
@ 045   ----------------------------------------
	.byte		        Ds2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N05   , As4 , v080
	.byte	W06
	.byte		        Ds2 , v064
	.byte		N05   , Cn5 , v080
	.byte	W06
	.byte		        Ds2 , v064
	.byte		N05   , As4 , v080
	.byte	W06
	.byte		        Ds2 , v064
	.byte	W06
	.byte		        Dn2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
@ 046   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_5_042
@ 047   ----------------------------------------
	.byte		N05   , Ds2 , v064
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N05   , As4 , v080
	.byte	W06
	.byte		        Ds2 , v064
	.byte		N05   , Cn5 , v080
	.byte	W06
	.byte		        As1 , v064
	.byte		N05   , As4 , v080
	.byte	W06
	.byte		        As1 , v064
	.byte	W06
	.byte		        Ds2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        As1 
	.byte	W06
	.byte		N05   
	.byte	W06
@ 048   ----------------------------------------
	.byte	W60
	.byte		        As4 , v080
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		        As1 , v064
	.byte		N05   , Gn2 
	.byte		N05   , As4 , v080
	.byte	W06
	.byte		        As1 , v064
	.byte		N05   , Gn2 
	.byte		N05   , Cn5 , v080
	.byte	W06
	.byte		N11   , As1 , v064
	.byte		N11   , Gn2 
	.byte		N05   , As4 , v080
	.byte	W12
@ 049   ----------------------------------------
sasageyo_5_049:
	.byte		N05   , Cn2 , v064
	.byte		N11   , Cn4 , v080
	.byte	W06
	.byte		N05   , Cn2 , v064
	.byte	W06
	.byte		        Gn2 
	.byte		N17   , Gn4 , v080
	.byte	W06
	.byte		N05   , Gn2 , v064
	.byte	W06
	.byte		        Cn2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Gn2 
	.byte		N19   , Gs4 , v080
	.byte	W06
	.byte		N05   , Gn2 , v064
	.byte	W06
	.byte		        Cn2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Gn2 
	.byte		N19   , Fn4 , v080
	.byte	W06
	.byte		N05   , Gn2 , v064
	.byte	W06
	.byte		        As1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Fn2 
	.byte		N11   , Gn4 , v080
	.byte	W06
	.byte		N05   , Fn2 , v064
	.byte	W06
	.byte	PEND
@ 050   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_5_049
@ 051   ----------------------------------------
	.byte		N05   , Cn2 , v064
	.byte		N11   , Cn4 , v080
	.byte	W06
	.byte		N05   , Cn2 , v064
	.byte	W06
	.byte		        Gn2 
	.byte		N17   , Gn4 , v080
	.byte	W06
	.byte		N05   , Gn2 , v064
	.byte	W06
	.byte		        Cn2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Gn2 
	.byte		N19   , Gs4 , v080
	.byte	W06
	.byte		N05   , Gn2 , v064
	.byte	W06
	.byte		        Cn2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Gn2 
	.byte		N19   , Fn4 , v080
	.byte	W06
	.byte		N05   , Gn2 , v064
	.byte	W06
	.byte		        Cn2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Gs1 
	.byte		N19   , Gn4 , v080
	.byte	W06
	.byte		N05   , Gs1 , v064
	.byte	W06
@ 052   ----------------------------------------
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Ds4 , v080
	.byte	W06
	.byte		N05   , Gs1 , v064
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Fn4 , v080
	.byte	W06
	.byte		N05   , Gs1 , v064
	.byte	W06
	.byte		        Gn1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Dn4 , v080
	.byte	W06
	.byte		N05   , Gn1 , v064
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N11   , Ds4 , v080
	.byte	W06
	.byte		N05   , Gn1 , v064
	.byte	W06
@ 053   ----------------------------------------
sasageyo_5_053:
	.byte		N05   , Ds2 , v064
	.byte		N11   , Ds3 , v080
	.byte	W06
	.byte		N05   , Ds2 , v064
	.byte	W06
	.byte		N05   
	.byte		N17   , As3 , v080
	.byte	W06
	.byte		N05   , Ds2 , v064
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Bn3 , v080
	.byte	W06
	.byte		N05   , Ds2 , v064
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Gs3 , v080
	.byte	W06
	.byte		N05   , Ds2 , v064
	.byte	W06
	.byte		        Cs2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N11   , As3 , v080
	.byte	W06
	.byte		N05   , Cs2 , v064
	.byte	W06
	.byte	PEND
@ 054   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_5_053
@ 055   ----------------------------------------
	.byte		N05   , Ds2 , v064
	.byte		N11   , Ds3 , v080
	.byte	W06
	.byte		N05   , Ds2 , v064
	.byte	W06
	.byte		N05   
	.byte		N17   , As3 , v080
	.byte	W06
	.byte		N05   , Ds2 , v064
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Bn3 , v080
	.byte	W06
	.byte		N05   , Ds2 , v064
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Gs3 , v080
	.byte	W06
	.byte		N05   , Ds2 , v064
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Bn1 
	.byte		N19   , As3 , v080
	.byte	W06
	.byte		N05   , Bn1 , v064
	.byte	W06
@ 056   ----------------------------------------
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Fs3 , v080
	.byte	W06
	.byte		N05   , Bn1 , v064
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N19   , Gs3 , v080
	.byte	W06
	.byte		N05   , Bn1 , v064
	.byte	W06
	.byte		        As1 , v080
	.byte	W06
	.byte		        Bn1 
	.byte	W06
	.byte		        Cs2 
	.byte		N19   , Fn3 
	.byte	W06
	.byte		N05   , Ds2 
	.byte	W06
	.byte		        Fn2 
	.byte	W06
	.byte		        Fs2 
	.byte	W06
	.byte		        Gs2 
	.byte		N11   , Fs3 
	.byte	W06
	.byte		N05   , As2 
	.byte	W06
@ 057   ----------------------------------------
	.byte		TIE   , Ds2 , v064
	.byte		N11   , As3 , v080
	.byte	W11
	.byte	GOTO
	 .word	sasageyo_5_B1
sasageyo_5_B2:
	.byte	W84
	.byte	W01
@ 058   ----------------------------------------
	.byte	W96
@ 059   ----------------------------------------
	.byte	W96
@ 060   ----------------------------------------
	.byte	W96
@ 061   ----------------------------------------
	.byte	W96
@ 062   ----------------------------------------
	.byte	W92
	.byte	W03
	.byte		EOT   , Ds2 
	.byte	FINE

@**************** Track 6 (Midi-Chn.6) ****************@

sasageyo_6:
	.byte	KEYSH , sasageyo_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 0
	.byte		VOL   , 100*sasageyo_mvl/mxv
	.byte		        100*sasageyo_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte		N11   , An1 , v064
	.byte		N11   , An3 
	.byte	W12
	.byte		        An1 
	.byte		N17   , En4 
	.byte	W24
	.byte		N20   , An1 
	.byte		N20   , Fn4 
	.byte	W24
	.byte		        An1 
	.byte		N20   , Dn4 
	.byte	W24
	.byte		        An1 
	.byte		N20   , En4 
	.byte	W12
@ 003   ----------------------------------------
	.byte	W12
	.byte		        Fn1 
	.byte		N20   , Cn4 
	.byte	W24
	.byte		        Fn1 
	.byte		N20   , Dn4 
	.byte	W24
	.byte		        En1 
	.byte		N20   , Bn3 
	.byte	W24
	.byte		N11   , En1 
	.byte		N11   , Cn4 
	.byte	W11
sasageyo_6_B1:
	.byte	W01
@ 004   ----------------------------------------
	.byte		N23   , Fs1 , v052
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W24
@ 005   ----------------------------------------
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		        En1 
	.byte	W24
@ 006   ----------------------------------------
	.byte		        Dn1 
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W24
@ 007   ----------------------------------------
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		        Cs1 
	.byte	W24
@ 008   ----------------------------------------
	.byte		        Bn0 
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W24
@ 009   ----------------------------------------
	.byte		        An0 
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W24
@ 010   ----------------------------------------
	.byte		        Gn0 
	.byte		N44   , Cs4 , v064, gtp3
	.byte	W24
	.byte		N23   , Gn0 , v052
	.byte	W24
	.byte		N23   
	.byte		N44   , Bn3 , v064, gtp3
	.byte	W24
	.byte		N23   , Gn0 , v052
	.byte	W24
@ 011   ----------------------------------------
	.byte		        Cs1 
	.byte		N44   , Cs4 , v064, gtp3
	.byte	W24
	.byte		N23   , Cs1 , v052
	.byte	W24
	.byte		N23   
	.byte		N44   , Cs4 , v064, gtp3
	.byte	W24
	.byte		N23   , Cs1 , v052
	.byte	W24
@ 012   ----------------------------------------
	.byte		        An1 , v064
	.byte		TIE   , En4 , v080
	.byte	W24
	.byte		N23   , An1 , v064
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W24
@ 013   ----------------------------------------
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W23
	.byte		EOT   , En4 
	.byte	W01
	.byte		N23   , An1 
	.byte	W24
	.byte		        Gn1 
	.byte		N68   , En4 , v080, gtp3
	.byte	W24
@ 014   ----------------------------------------
	.byte		N23   , Fn1 , v064
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W12
	.byte		N56   , Cn4 , v080, gtp3
	.byte	W12
@ 015   ----------------------------------------
	.byte		N23   , Fn1 , v064
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		        En1 
	.byte		N05   , Bn3 , v080
	.byte	W06
	.byte		        Cn4 
	.byte	W06
	.byte		N11   , Bn3 
	.byte	W12
@ 016   ----------------------------------------
	.byte		N23   , Dn1 , v064
	.byte		N44   , En4 , v080, gtp3
	.byte	W24
	.byte		N23   , Dn1 , v064
	.byte	W24
	.byte		N23   
	.byte		N44   , Dn4 , v080, gtp3
	.byte	W24
	.byte		N23   , Dn1 , v064
	.byte	W24
@ 017   ----------------------------------------
	.byte		        Cn1 
	.byte		N32   , En4 , v080, gtp3
	.byte	W24
	.byte		N23   , Cn1 , v064
	.byte	W12
	.byte		N11   , Fn4 , v080
	.byte	W12
	.byte		N23   , Cn1 , v064
	.byte		N44   , Dn4 , v080, gtp3
	.byte	W24
	.byte		N23   , Cn1 , v064
	.byte	W24
@ 018   ----------------------------------------
	.byte		        As1 
	.byte		N44   , En4 , v080, gtp3
	.byte	W24
	.byte		N23   , As1 , v064
	.byte	W24
	.byte		N23   
	.byte		N44   , Dn4 , v080, gtp3
	.byte	W24
	.byte		N23   , As1 , v064
	.byte	W24
@ 019   ----------------------------------------
	.byte		        En1 
	.byte		N44   , En4 , v080, gtp3
	.byte	W24
	.byte		N23   , En1 , v064
	.byte	W24
	.byte		N23   
	.byte		N44   , En4 , v080, gtp3
	.byte	W24
	.byte		N23   , En1 , v064
	.byte	W24
@ 020   ----------------------------------------
sasageyo_6_020:
	.byte		N11   , Fs1 , v064
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        An1 
	.byte	W12
	.byte		        Cs1 
	.byte	W12
	.byte		        Dn1 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte	PEND
@ 021   ----------------------------------------
	.byte		        En1 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        An0 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N23   , Gs0 
	.byte	W24
@ 022   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_6_020
@ 023   ----------------------------------------
	.byte		N11   , En1 , v064
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Cs1 
	.byte	W12
	.byte		        Fn1 
	.byte	W12
	.byte		        Fs1 
	.byte	W12
	.byte		        Gs1 
	.byte	W12
@ 024   ----------------------------------------
sasageyo_6_024:
	.byte		N11   , An1 , v064
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		        En1 
	.byte	W12
	.byte		        Fn1 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte	PEND
@ 025   ----------------------------------------
	.byte		        Gn1 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Dn1 
	.byte	W12
	.byte		        Gn1 
	.byte	W12
	.byte		        Cn1 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Bn0 
	.byte	W12
	.byte		N11   
	.byte	W12
@ 026   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_6_024
@ 027   ----------------------------------------
	.byte		N11   , En1 , v064
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
@ 028   ----------------------------------------
	.byte		N23   , Fn1 
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W24
@ 029   ----------------------------------------
	.byte		        En1 
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W24
@ 030   ----------------------------------------
	.byte		N44   , An1 , v064, gtp3
	.byte		N44   , An3 , v064, gtp3
	.byte	W48
	.byte		        Bn1 , v064, gtp3
	.byte		N44   , Gn3 , v064, gtp3
	.byte	W48
@ 031   ----------------------------------------
	.byte		        Cn1 , v052, gtp3
	.byte		N44   , Cn2 , v052, gtp3
	.byte		N44   , Cn3 , v064, gtp3
	.byte	W48
	.byte		        Cs1 , v052, gtp3
	.byte		N44   , Cs2 , v052, gtp3
	.byte		N44   , Cs3 , v064, gtp3
	.byte	W48
@ 032   ----------------------------------------
	.byte		N23   , Dn2 
	.byte		N44   , Dn4 , v064, gtp3
	.byte	W24
	.byte		N23   , Dn2 
	.byte	W24
	.byte		        Ds2 
	.byte		N44   , Ds4 , v064, gtp3
	.byte	W24
	.byte		N23   , Ds2 
	.byte	W24
@ 033   ----------------------------------------
	.byte		N11   , En1 
	.byte		N44   , En4 , v064, gtp3
	.byte	W12
	.byte		N11   , En1 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte		N44   , En4 , v064, gtp3
	.byte	W12
	.byte		N11   , En1 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
@ 034   ----------------------------------------
	.byte		N44   , An1 , v064, gtp3
	.byte	W48
	.byte		        Gn1 , v064, gtp3
	.byte		N44   , Bn1 , v064, gtp3
	.byte	W48
@ 035   ----------------------------------------
	.byte		N92   , Cn1 , v064, gtp3
	.byte		N56   , Cn2 , v064, gtp3
	.byte	W60
	.byte		N11   , Fn2 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
@ 036   ----------------------------------------
	.byte		N44   , Fn1 , v064, gtp3
	.byte	W48
	.byte		        Gn1 , v064, gtp3
	.byte	W48
@ 037   ----------------------------------------
	.byte		N92   , Cn1 , v064, gtp3
	.byte	W36
	.byte		N11   , Gn1 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Gn1 
	.byte	W12
	.byte		N23   , Bn1 
	.byte	W24
@ 038   ----------------------------------------
	.byte	W96
@ 039   ----------------------------------------
	.byte	W96
@ 040   ----------------------------------------
	.byte		N11   , Fn1 , v080
	.byte		N44   , An3 , v064, gtp3
	.byte	W12
	.byte		N11   , Fn1 , v080
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Gn1 
	.byte		N44   , Bn3 , v064, gtp3
	.byte	W12
	.byte		N11   , Gn1 , v080
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
@ 041   ----------------------------------------
	.byte		        En1 
	.byte		N44   , An3 , v064, gtp3
	.byte	W12
	.byte		N11   , En1 , v080
	.byte	W12
	.byte		BEND  , c_v+0
	.byte		N11   
	.byte	W03
	.byte		BEND  , c_v+0
	.byte		        c_v+2
	.byte	W01
	.byte		        c_v+5
	.byte	W01
	.byte		        c_v+8
	.byte	W01
	.byte		        c_v+11
	.byte	W01
	.byte		        c_v+14
	.byte		        c_v+17
	.byte	W01
	.byte		        c_v+19
	.byte	W01
	.byte		        c_v+22
	.byte	W01
	.byte		        c_v+25
	.byte	W01
	.byte		        c_v+28
	.byte		        c_v+31
	.byte	W01
	.byte		        c_v+0
	.byte		N11   , En2 
	.byte	W12
	.byte		N11   
	.byte		N44   , Gs3 , v064, gtp3
	.byte	W12
	.byte		N11   , En2 , v080
	.byte	W12
	.byte		        Bn1 
	.byte	W12
	.byte		        En1 
	.byte	W12
@ 042   ----------------------------------------
sasageyo_6_042:
	.byte		N11   , Cn1 , v080
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Dn1 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte	PEND
@ 043   ----------------------------------------
	.byte		        Ds1 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        As0 
	.byte	W12
	.byte		N11   
	.byte	W12
@ 044   ----------------------------------------
	.byte		        Gs0 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        As0 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
@ 045   ----------------------------------------
	.byte		        Ds1 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Dn1 
	.byte	W12
	.byte		N11   
	.byte	W12
@ 046   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_6_042
@ 047   ----------------------------------------
	.byte		N11   , Ds1 , v080
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		N11   
	.byte	W12
@ 048   ----------------------------------------
	.byte		        Gs0 
	.byte	W72
	.byte		N23   , Gn1 
	.byte	W24
@ 049   ----------------------------------------
sasageyo_6_049:
	.byte		N11   , Cn2 , v080
	.byte		N11   , Cn4 , v064
	.byte	W12
	.byte		        Cn2 , v080
	.byte		N17   , Gn4 , v064
	.byte	W12
	.byte		N11   , Cn2 , v080
	.byte	W12
	.byte		N11   
	.byte		N20   , Gs4 , v064
	.byte	W12
	.byte		N11   , Cn2 , v080
	.byte	W12
	.byte		N11   
	.byte		N20   , Fn4 , v064
	.byte	W12
	.byte		N11   , As1 , v080
	.byte	W12
	.byte		N11   
	.byte		N11   , Gn4 , v064
	.byte	W12
	.byte	PEND
@ 050   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_6_049
@ 051   ----------------------------------------
	.byte		N11   , Cn2 , v080
	.byte		N11   , Cn4 , v064
	.byte	W12
	.byte		        Cn2 , v080
	.byte		N17   , Gn4 , v064
	.byte	W12
	.byte		N11   , Cn2 , v080
	.byte	W12
	.byte		N11   
	.byte		N20   , Gs4 , v064
	.byte	W12
	.byte		N11   , Cn2 , v080
	.byte	W12
	.byte		N11   
	.byte		N20   , Fn4 , v064
	.byte	W12
	.byte		N11   , Cn2 , v080
	.byte	W12
	.byte		        Gs1 
	.byte		N20   , Gn4 , v064
	.byte	W12
@ 052   ----------------------------------------
	.byte		N11   , Gs1 , v080
	.byte	W12
	.byte		N11   
	.byte		N20   , Ds4 , v064
	.byte	W12
	.byte		N11   , Gs1 , v080
	.byte	W12
	.byte		N11   
	.byte		N20   , Fn4 , v064
	.byte	W12
	.byte		N11   , Gn1 , v080
	.byte	W12
	.byte		N11   
	.byte		N20   , Dn4 , v064
	.byte	W12
	.byte		N11   , Gn1 , v080
	.byte	W12
	.byte		N11   
	.byte		N11   , Ds4 , v064
	.byte	W12
@ 053   ----------------------------------------
sasageyo_6_053:
	.byte		N11   , Ds1 , v080
	.byte		N11   , Ds4 , v064
	.byte	W12
	.byte		        Ds1 , v080
	.byte		N17   , As4 , v064
	.byte	W12
	.byte		N11   , Ds1 , v080
	.byte	W12
	.byte		N11   
	.byte		N20   , Bn4 , v064
	.byte	W12
	.byte		N11   , Ds1 , v080
	.byte	W12
	.byte		N11   
	.byte		N20   , Gs4 , v064
	.byte	W12
	.byte		N11   , Cs1 , v080
	.byte	W12
	.byte		N11   
	.byte		N11   , As4 , v064
	.byte	W12
	.byte	PEND
@ 054   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_6_053
@ 055   ----------------------------------------
	.byte		N11   , Ds1 , v080
	.byte		N11   , Ds4 , v064
	.byte	W12
	.byte		        Ds1 , v080
	.byte		N17   , As4 , v064
	.byte	W12
	.byte		N11   , Ds1 , v080
	.byte	W12
	.byte		N11   
	.byte		N20   , Bn4 , v064
	.byte	W12
	.byte		N11   , Ds1 , v080
	.byte	W12
	.byte		N11   
	.byte		N20   , Gs4 , v064
	.byte	W12
	.byte		N11   , Ds1 , v080
	.byte	W12
	.byte		        Bn0 
	.byte		N20   , As4 , v064
	.byte	W12
@ 056   ----------------------------------------
	.byte		N11   , Bn0 , v080
	.byte	W12
	.byte		N11   
	.byte		N20   , Fs4 , v064
	.byte	W12
	.byte		N11   , Bn0 , v080
	.byte	W12
	.byte		N11   
	.byte		N20   , Gs4 , v064
	.byte	W12
	.byte		N11   , As0 , v080
	.byte	W12
	.byte		N11   
	.byte		N20   , Fn4 , v064
	.byte	W12
	.byte		N11   , As0 , v080
	.byte	W12
	.byte		N11   
	.byte		N11   , Fs4 , v064
	.byte	W12
@ 057   ----------------------------------------
	.byte		        Ds1 , v080
	.byte		N11   , Ds4 , v064
	.byte	W11
	.byte	GOTO
	 .word	sasageyo_6_B1
sasageyo_6_B2:
	.byte	FINE

@**************** Track 7 (Midi-Chn.7) ****************@

sasageyo_7:
	.byte	KEYSH , sasageyo_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 56
	.byte		VOL   , 100*sasageyo_mvl/mxv
	.byte		        100*sasageyo_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte		N11   , An2 , v052
	.byte		N11   , An3 
	.byte	W12
	.byte		        An2 
	.byte		N17   , En4 
	.byte	W24
	.byte		N20   , An2 
	.byte		N20   , Fn4 
	.byte	W24
	.byte		N11   , An2 
	.byte		N20   , Dn4 
	.byte	W24
	.byte		N11   , An2 
	.byte		N20   , En4 
	.byte	W12
@ 003   ----------------------------------------
	.byte	W12
	.byte		N11   , Fn2 
	.byte		N20   , Cn4 
	.byte	W24
	.byte		N11   , Fn2 
	.byte		N20   , Dn4 
	.byte	W24
	.byte		N11   , En2 
	.byte		N20   , Bn3 
	.byte	W24
	.byte		N11   , En2 
	.byte		N11   , Cn4 
	.byte	W11
sasageyo_7_B1:
	.byte	W01
@ 004   ----------------------------------------
	.byte		N07   , Fs3 , v064
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
@ 005   ----------------------------------------
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		        En3 
	.byte	W24
@ 006   ----------------------------------------
	.byte		        Dn3 
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
@ 007   ----------------------------------------
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		        Cs3 
	.byte	W24
@ 008   ----------------------------------------
	.byte		        Bn2 
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
@ 009   ----------------------------------------
	.byte		        An2 
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
@ 010   ----------------------------------------
	.byte		        Gn2 
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
@ 011   ----------------------------------------
	.byte		        Cs3 
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		N07   , Cs3 , v080
	.byte	W24
@ 012   ----------------------------------------
sasageyo_7_012:
	.byte	W12
	.byte		N11   , En5 , v080
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		N11   
	.byte	W12
	.byte	PEND
@ 013   ----------------------------------------
sasageyo_7_013:
	.byte	W12
	.byte		N11   , En5 , v080
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		        Dn5 , v052
	.byte	W12
	.byte	PEND
@ 014   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_7_012
@ 015   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_7_013
@ 016   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_7_012
@ 017   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_7_013
@ 018   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_7_012
@ 019   ----------------------------------------
	.byte		N44   , En4 , v052, gtp3
	.byte		N44   , An4 , v052, gtp3
	.byte	W48
	.byte		        En4 , v052, gtp3
	.byte		N44   , Gs4 , v052, gtp3
	.byte	W48
@ 020   ----------------------------------------
	.byte		        Cs5 , v064, gtp3
	.byte	W48
	.byte		        Fs4 , v064, gtp3
	.byte	W48
@ 021   ----------------------------------------
	.byte		        Bn4 , v064, gtp3
	.byte	W48
	.byte		N23   , An4 
	.byte	W24
	.byte		        Gs4 
	.byte	W24
@ 022   ----------------------------------------
	.byte		N44   , Fs4 , v064, gtp3
	.byte	W48
	.byte		N32   , Cs4 , v064, gtp3
	.byte	W36
	.byte		N11   , En4 
	.byte	W12
@ 023   ----------------------------------------
	.byte		N23   , Gs4 
	.byte	W24
	.byte		        Bn4 
	.byte	W24
	.byte		N17   , An4 
	.byte	W18
	.byte		N05   , Gs4 , v080
	.byte	W06
	.byte		        An4 
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		        Cs5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
@ 024   ----------------------------------------
	.byte		N44   , En5 , v064, gtp3
	.byte	W48
	.byte		N23   , En3 , v096
	.byte		N44   , An4 , v064, gtp3
	.byte	W24
	.byte		N23   , An3 , v096
	.byte	W24
@ 025   ----------------------------------------
	.byte		        Bn3 , v100
	.byte		N44   , Gn5 , v064, gtp3
	.byte	W24
	.byte		N23   , Cn4 , v104
	.byte	W24
	.byte		        Dn4 , v108
	.byte		N23   , Fn5 , v064
	.byte	W24
	.byte		        En4 , v112
	.byte		N23   , En5 , v064
	.byte	W24
@ 026   ----------------------------------------
	.byte		N44   , Cn4 , v096, gtp3
	.byte		N44   , Cn5 , v064, gtp3
	.byte	W48
	.byte		        Fn3 , v096, gtp3
	.byte		N44   , An4 , v064, gtp3
	.byte	W48
@ 027   ----------------------------------------
	.byte		        An3 , v096, gtp3
	.byte		N44   , An4 , v064, gtp3
	.byte	W48
	.byte		        Gs3 , v096, gtp3
	.byte		N44   , Gs4 , v064, gtp3
	.byte	W48
@ 028   ----------------------------------------
	.byte		N05   , Fn5 , v096
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		        Fn5 
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		        Fn5 
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		        Fn5 
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Cn5 
	.byte	W06
@ 029   ----------------------------------------
	.byte		        En5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		        Bn4 
	.byte	W06
	.byte		        En5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		        Bn4 
	.byte	W06
@ 030   ----------------------------------------
	.byte	W96
@ 031   ----------------------------------------
	.byte	W96
@ 032   ----------------------------------------
	.byte		N44   , Dn3 , v096, gtp3
	.byte		N44   , Fn4 , v064, gtp3
	.byte	W48
	.byte		        Ds3 , v096, gtp3
	.byte		N44   , Fs4 , v064, gtp3
	.byte	W48
@ 033   ----------------------------------------
	.byte		        En3 , v096, gtp3
	.byte		N44   , An4 , v064, gtp3
	.byte	W48
	.byte		        En3 , v096, gtp3
	.byte		N44   , Gs4 , v064, gtp3
	.byte	W48
@ 034   ----------------------------------------
	.byte		        An4 , v064, gtp3
	.byte	W48
	.byte		        Gn4 , v064, gtp3
	.byte	W48
@ 035   ----------------------------------------
	.byte		        Fn4 , v064, gtp3
	.byte	W48
	.byte		        En4 , v064, gtp3
	.byte	W48
@ 036   ----------------------------------------
	.byte		        An4 , v064, gtp3
	.byte	W48
	.byte		N32   , Gn4 , v064, gtp3
	.byte	W36
	.byte		N11   , Dn4 
	.byte	W12
@ 037   ----------------------------------------
	.byte		N44   , Fn4 , v064, gtp3
	.byte	W48
	.byte		N23   , En4 
	.byte	W24
	.byte		        Dn4 
	.byte	W24
@ 038   ----------------------------------------
	.byte	W96
@ 039   ----------------------------------------
	.byte	W72
	.byte		N05   , Bn4 , v096
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        En5 
	.byte	W06
@ 040   ----------------------------------------
	.byte		N44   , Fn3 , v096, gtp3
	.byte		N44   , Fn5 , v064, gtp3
	.byte	W48
	.byte		        Gn3 , v096, gtp3
	.byte		N44   , Gn5 , v064, gtp3
	.byte	W48
@ 041   ----------------------------------------
	.byte		        An3 , v096, gtp3
	.byte		N44   , An5 , v064, gtp3
	.byte	W48
	.byte		        Gs3 , v096, gtp3
	.byte		N44   , Gs5 , v064, gtp3
	.byte	W48
@ 042   ----------------------------------------
sasageyo_7_042:
	.byte		N44   , Cn5 , v080, gtp3
	.byte	W48
	.byte		        As4 , v080, gtp3
	.byte	W48
	.byte	PEND
@ 043   ----------------------------------------
sasageyo_7_043:
	.byte		N44   , Fn5 , v080, gtp3
	.byte	W48
	.byte		        Ds5 , v080, gtp3
	.byte	W48
	.byte	PEND
@ 044   ----------------------------------------
	.byte		        Ds3 , v096, gtp3
	.byte		N44   , Cn5 , v080, gtp3
	.byte	W48
	.byte		        Fn3 , v096, gtp3
	.byte		N23   , As4 , v080
	.byte	W24
	.byte		        Dn5 
	.byte	W24
@ 045   ----------------------------------------
	.byte		N44   , Gs3 , v096, gtp3
	.byte		N32   , Ds5 , v080, gtp3
	.byte	W36
	.byte		        Dn5 , v080, gtp3
	.byte	W12
	.byte		N11   , Gn3 , v096
	.byte	W24
	.byte		        Fn3 
	.byte		N23   , As4 , v080
	.byte	W24
@ 046   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_7_042
@ 047   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_7_043
@ 048   ----------------------------------------
	.byte	W60
	.byte		N05   , Dn5 , v080
	.byte	W06
	.byte		        Ds5 
	.byte	W06
	.byte		        Dn5 
	.byte	W06
	.byte		        Ds5 
	.byte	W06
	.byte		        Dn5 
	.byte	W12
@ 049   ----------------------------------------
sasageyo_7_049:
	.byte		N11   , Cn3 , v096
	.byte		N11   , Cn4 , v080
	.byte	W12
	.byte		N17   , Gn3 , v096
	.byte		N17   , Gn4 , v080
	.byte	W24
	.byte		N20   , Gs3 , v096
	.byte		N20   , Gs4 , v080
	.byte	W24
	.byte		        Fn3 , v096
	.byte		N20   , Fn4 , v080
	.byte	W24
	.byte		N11   , Gn3 , v096
	.byte		N11   , Gn4 , v080
	.byte	W12
	.byte	PEND
@ 050   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_7_049
@ 051   ----------------------------------------
	.byte		N11   , Cn3 , v096
	.byte		N11   , Cn4 , v080
	.byte	W12
	.byte		N17   , Gn3 , v096
	.byte		N17   , Gn4 , v080
	.byte	W24
	.byte		N20   , Gs3 , v096
	.byte		N20   , Gs4 , v080
	.byte	W24
	.byte		        Fn3 , v096
	.byte		N20   , Fn4 , v080
	.byte	W24
	.byte		        Gn3 , v096
	.byte		N20   , Gn4 , v080
	.byte	W12
@ 052   ----------------------------------------
	.byte	W12
	.byte		        Ds3 , v096
	.byte		N20   , Ds4 , v080
	.byte	W24
	.byte		        Fn3 , v096
	.byte		N20   , Fn4 , v080
	.byte	W24
	.byte		        Dn3 , v096
	.byte		N20   , Dn4 , v080
	.byte	W24
	.byte		N11   , Ds3 , v096
	.byte		N11   , Ds4 , v080
	.byte	W12
@ 053   ----------------------------------------
sasageyo_7_053:
	.byte		N11   , Ds2 , v096
	.byte		N11   , Ds4 , v080
	.byte	W12
	.byte		N17   , As2 , v096
	.byte		N17   , As4 , v080
	.byte	W24
	.byte		N20   , Bn2 , v096
	.byte		N20   , Bn4 , v080
	.byte	W24
	.byte		        Gs2 , v096
	.byte		N20   , Gs4 , v080
	.byte	W24
	.byte		N11   , As2 , v096
	.byte		N11   , As4 , v080
	.byte	W12
	.byte	PEND
@ 054   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_7_053
@ 055   ----------------------------------------
	.byte		N11   , Ds2 , v096
	.byte		N11   , Ds4 , v080
	.byte	W12
	.byte		N17   , As2 , v096
	.byte		N17   , As4 , v080
	.byte	W24
	.byte		N20   , Bn2 , v096
	.byte		N20   , Bn4 , v080
	.byte	W24
	.byte		        Gs2 , v096
	.byte		N20   , Gs4 , v080
	.byte	W24
	.byte		        As2 , v096
	.byte		N20   , As4 , v080
	.byte	W12
@ 056   ----------------------------------------
	.byte	W12
	.byte		        Fs2 , v096
	.byte		N20   , Fs4 , v080
	.byte	W24
	.byte		        Gs2 , v096
	.byte		N20   , Gs4 , v080
	.byte	W24
	.byte		        Fn2 , v096
	.byte		N20   , Fn4 , v080
	.byte	W24
	.byte		N11   , Fs2 , v096
	.byte		N11   , Fs4 , v080
	.byte	W12
@ 057   ----------------------------------------
	.byte		        Ds3 , v096
	.byte		N11   , Ds4 , v080
	.byte	W11
	.byte	GOTO
	 .word	sasageyo_7_B1
sasageyo_7_B2:
	.byte	FINE

@**************** Track 8 (Midi-Chn.8) ****************@

sasageyo_8:
	.byte	KEYSH , sasageyo_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 56
	.byte		VOL   , 100*sasageyo_mvl/mxv
	.byte		        100*sasageyo_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		        c_v+5
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte		N11   , An3 , v080
	.byte	W12
	.byte		N17   , En4 
	.byte	W24
	.byte		N20   , Fn4 
	.byte	W24
	.byte		N17   , Dn4 
	.byte	W24
	.byte		        En4 
	.byte	W12
@ 003   ----------------------------------------
	.byte	W12
	.byte		        Cn4 
	.byte	W24
	.byte		        Dn4 
	.byte	W24
	.byte		        Bn3 
	.byte	W24
	.byte		N11   , Cn4 
	.byte	W11
sasageyo_8_B1:
	.byte	W01
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte	W96
@ 027   ----------------------------------------
	.byte		N44   , An4 , v080, gtp3
	.byte	W48
	.byte		N23   , Gs4 
	.byte	W48
@ 028   ----------------------------------------
	.byte	W96
@ 029   ----------------------------------------
	.byte	W96
@ 030   ----------------------------------------
	.byte	W96
@ 031   ----------------------------------------
	.byte	W96
@ 032   ----------------------------------------
	.byte		N44   , Fn4 , v080, gtp3
	.byte	W48
	.byte		        Fs4 , v080, gtp3
	.byte	W48
@ 033   ----------------------------------------
	.byte		N11   , An4 
	.byte	W48
	.byte		N44   , Gs4 , v096, gtp3
	.byte	W48
@ 034   ----------------------------------------
	.byte	W96
@ 035   ----------------------------------------
	.byte	W96
@ 036   ----------------------------------------
	.byte	W96
@ 037   ----------------------------------------
	.byte	W96
@ 038   ----------------------------------------
	.byte	W96
@ 039   ----------------------------------------
	.byte	W84
	.byte		N05   , Dn4 , v080
	.byte	W06
	.byte		        En4 
	.byte	W06
@ 040   ----------------------------------------
	.byte		N23   , Fn4 , v096
	.byte	W36
	.byte		N05   , Fn4 , v080
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Gn4 , v096
	.byte	W36
	.byte		N05   , Gn4 , v080
	.byte	W06
	.byte		N05   
	.byte	W06
@ 041   ----------------------------------------
	.byte		N11   , An4 , v096
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		        Gs4 
	.byte	W24
	.byte		N11   
	.byte	W24
@ 042   ----------------------------------------
	.byte	W96
@ 043   ----------------------------------------
sasageyo_8_043:
	.byte		N32   , Gs4 , v096, gtp3
	.byte	W48
	.byte		N11   , Gn4 
	.byte	W24
	.byte		        Fn4 
	.byte	W24
	.byte	PEND
@ 044   ----------------------------------------
	.byte	W96
@ 045   ----------------------------------------
	.byte	W48
	.byte		        Gn4 
	.byte	W24
	.byte		        Fn4 
	.byte	W24
@ 046   ----------------------------------------
	.byte	W96
@ 047   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_8_043
@ 048   ----------------------------------------
	.byte		N11   , Ds4 , v096
	.byte	W96
@ 049   ----------------------------------------
sasageyo_8_049:
	.byte		N11   , Cn4 , v080
	.byte	W12
	.byte		N17   , Gn4 
	.byte	W24
	.byte		N20   , Gs4 
	.byte	W24
	.byte		        Fn4 
	.byte	W24
	.byte		N11   , Gn4 
	.byte	W12
	.byte	PEND
@ 050   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_8_049
@ 051   ----------------------------------------
	.byte		N11   , Cn4 , v080
	.byte	W12
	.byte		N17   , Gn4 
	.byte	W24
	.byte		N20   , Gs4 
	.byte	W24
	.byte		        Fn4 
	.byte	W24
	.byte		        Gn4 
	.byte	W12
@ 052   ----------------------------------------
	.byte	W12
	.byte		        Ds4 
	.byte	W24
	.byte		        Fn4 
	.byte	W24
	.byte		        Dn4 
	.byte	W24
	.byte		N11   , Ds4 
	.byte	W12
@ 053   ----------------------------------------
sasageyo_8_053:
	.byte		N11   , Ds4 , v080
	.byte	W12
	.byte		N17   , As4 
	.byte	W24
	.byte		N20   , Bn4 
	.byte	W24
	.byte		        Gs4 
	.byte	W24
	.byte		N11   , As4 
	.byte	W12
	.byte	PEND
@ 054   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_8_053
@ 055   ----------------------------------------
	.byte		N11   , Ds4 , v080
	.byte	W12
	.byte		N17   , As4 
	.byte	W24
	.byte		N20   , Bn4 
	.byte	W24
	.byte		        Gs4 
	.byte	W24
	.byte		        As4 
	.byte	W12
@ 056   ----------------------------------------
	.byte	W12
	.byte		        Fs4 
	.byte	W24
	.byte		        Gs4 
	.byte	W24
	.byte		        Fn4 
	.byte	W24
	.byte		N11   , Fs4 
	.byte	W12
@ 057   ----------------------------------------
	.byte		        Ds4 
	.byte	W11
	.byte	GOTO
	 .word	sasageyo_8_B1
sasageyo_8_B2:
	.byte	FINE

@**************** Track 9 (Midi-Chn.10) ****************@

sasageyo_9:
	.byte	KEYSH , sasageyo_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 127
	.byte		VOL   , 81*sasageyo_mvl/mxv
	.byte		PAN   , c_v-5
	.byte		        c_v+0
	.byte		        c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W84
	.byte		N05   , An1 , v080
	.byte	W06
	.byte		N05   
	.byte	W06
@ 002   ----------------------------------------
	.byte		N11   , Bn0 , v052
	.byte		N05   , An1 
	.byte		N11   , As1 
	.byte		N05   , Cs2 
	.byte	W06
	.byte		        An1 
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N11   , As1 
	.byte		N05   , Bn1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Dn2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N11   , As1 
	.byte		N05   , Cn2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        En1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N11   , As1 
	.byte		N05   , Dn2 
	.byte	W06
	.byte		        Cn2 
	.byte	W06
	.byte		        Dn2 
	.byte	W06
	.byte		        Cn2 
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N11   , As1 
	.byte		N05   , Bn1 
	.byte	W06
	.byte		        An1 
	.byte	W06
@ 003   ----------------------------------------
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N11   , As1 
	.byte		N05   , Bn1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        Dn2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N11   , As1 
	.byte		N05   , Cn2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		        En1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N11   , As1 
	.byte		N05   , Dn2 
	.byte	W06
	.byte		        Cn2 
	.byte	W06
	.byte		        Dn2 
	.byte	W06
	.byte		        Cn2 
	.byte	W06
	.byte		N11   , Bn0 
	.byte		N11   , As1 
	.byte		N05   , Bn1 
	.byte	W06
	.byte		        An1 
	.byte	W05
sasageyo_9_B1:
	.byte	W01
@ 004   ----------------------------------------
	.byte		N23   , Bn0 , v052
	.byte		N23   , Cs2 
	.byte	W24
	.byte		        Bn0 
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W12
	.byte		N05   , Dn1 , v064
	.byte	W06
	.byte		N05   
	.byte	W06
@ 005   ----------------------------------------
	.byte		N23   , Bn0 , v052
	.byte		N11   , Dn1 , v076
	.byte	W24
	.byte		N23   , Bn0 , v052
	.byte	W24
	.byte		N23   
	.byte	W12
	.byte		N11   , Fn1 , v064
	.byte	W12
	.byte		N23   , Bn0 , v052
	.byte		N05   , Fn1 , v064
	.byte		N05   , An1 , v036
	.byte	W06
	.byte		        Fn1 , v064
	.byte		N05   , An1 , v036
	.byte	W06
	.byte		N11   , Fn1 , v064
	.byte		N11   , An1 , v036
	.byte	W12
@ 006   ----------------------------------------
	.byte		N23   , Bn0 , v052
	.byte		N11   , Fn1 , v064
	.byte		N11   , An1 , v036
	.byte	W24
	.byte		N23   , Bn0 , v052
	.byte	W24
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W12
	.byte		N05   , Dn1 , v064
	.byte	W06
	.byte		N05   
	.byte	W06
@ 007   ----------------------------------------
	.byte		N23   , Bn0 , v052
	.byte		N11   , Dn1 , v076
	.byte	W24
	.byte		N23   , Bn0 , v052
	.byte	W24
	.byte		N23   
	.byte	W12
	.byte		N11   , Fn1 , v064
	.byte	W12
	.byte		N23   , Bn0 , v052
	.byte		N05   , Fn1 , v064
	.byte		N05   , An1 , v036
	.byte		N05   , En2 
	.byte		N05   , Bn2 
	.byte	W06
	.byte		        Fn1 , v064
	.byte		N05   , An1 , v036
	.byte	W06
	.byte		N11   , Fn1 , v064
	.byte		N11   , An1 , v036
	.byte	W12
@ 008   ----------------------------------------
	.byte		N23   , Bn0 , v052
	.byte		N11   , Fn1 , v064
	.byte		N11   , An1 , v036
	.byte		N11   , Gn2 
	.byte	W24
	.byte		N23   , Bn0 , v052
	.byte	W12
	.byte		N05   , Dn1 , v064
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Dn1 , v076
	.byte	W24
	.byte		N23   , Bn0 , v052
	.byte	W24
@ 009   ----------------------------------------
	.byte		N23   
	.byte	W24
	.byte		N23   
	.byte	W12
	.byte		N05   , Dn1 , v064
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Dn1 , v076
	.byte	W12
	.byte		        Dn1 , v064
	.byte	W12
	.byte		N23   , Bn0 , v052
	.byte		N02   , En1 , v064
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N02   
	.byte	W03
@ 010   ----------------------------------------
	.byte		N23   , Bn0 , v052
	.byte		N23   , Dn1 , v064
	.byte	W24
	.byte		        Bn0 , v052
	.byte	W12
	.byte		N05   , Dn1 , v064
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Dn1 , v076
	.byte	W24
	.byte		N23   , Bn0 , v052
	.byte	W24
@ 011   ----------------------------------------
	.byte		N23   
	.byte		N23   , En1 
	.byte		N23   , Cs2 
	.byte	W24
	.byte		        Bn0 
	.byte		N23   , Cs2 
	.byte	W24
	.byte		        Bn0 
	.byte		N23   , En1 
	.byte		N23   , Gn2 
	.byte	W24
	.byte		        Bn0 
	.byte		N23   , Cs2 
	.byte		N01   , En2 , v016
	.byte		N23   , Gn2 , v052
	.byte	W01
	.byte		N01   , En2 , v016
	.byte	W02
	.byte		N01   
	.byte	W01
	.byte		N01   
	.byte	W02
	.byte		N01   
	.byte	W01
	.byte		N01   
	.byte	W02
	.byte		N01   
	.byte	W01
	.byte		N01   
	.byte	W02
	.byte		        En2 , v036
	.byte	W01
	.byte		N01   
	.byte	W02
	.byte		N01   
	.byte	W01
	.byte		N01   
	.byte	W02
	.byte		N01   
	.byte	W01
	.byte		N01   
	.byte	W02
	.byte		N01   
	.byte	W01
	.byte		N01   
	.byte	W02
@ 012   ----------------------------------------
	.byte		N23   , Bn0 , v052
	.byte		N11   , Cs2 , v064
	.byte	W12
	.byte		N05   , Fs1 , v036
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Gs1 , v036
	.byte	W12
	.byte		N05   , Fs1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Gs1 , v036
	.byte	W12
	.byte		N05   , Fs1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Gs1 , v036
	.byte	W12
	.byte		N05   , Dn1 , v064
	.byte		N05   , Fs1 , v036
	.byte	W06
	.byte		        Dn1 , v064
	.byte		N05   , Fs1 , v036
	.byte	W06
@ 013   ----------------------------------------
sasageyo_9_013:
	.byte		N23   , Bn0 , v052
	.byte		N11   , Dn1 , v076
	.byte		N11   , Gs1 , v036
	.byte	W12
	.byte		N05   , Fs1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Gs1 , v036
	.byte	W12
	.byte		N05   , Fs1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Gs1 , v036
	.byte	W12
	.byte		N05   , Fs1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Gs1 , v036
	.byte		N23   , En2 , v064
	.byte		N23   , Bn2 
	.byte	W12
	.byte		N05   , Fs1 , v036
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte	PEND
@ 014   ----------------------------------------
	.byte		N23   , Bn0 , v052
	.byte		N11   , Gs1 , v036
	.byte		N23   , Gn2 , v064
	.byte	W12
	.byte		N05   , Fs1 , v036
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Gs1 , v036
	.byte	W12
	.byte		N05   , Fs1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Gs1 , v036
	.byte	W12
	.byte		N05   , Fs1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Gs1 , v036
	.byte	W12
	.byte		N05   , Dn1 , v064
	.byte		N05   , Fs1 , v036
	.byte	W06
	.byte		        Dn1 , v064
	.byte		N05   , Fs1 , v036
	.byte	W06
@ 015   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_9_013
@ 016   ----------------------------------------
sasageyo_9_016:
	.byte		N23   , Bn0 , v052
	.byte		N11   , Gs1 , v036
	.byte		N23   , Gn2 , v064
	.byte	W12
	.byte		N05   , Fs1 , v036
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Gs1 , v036
	.byte	W12
	.byte		N05   , Dn1 , v064
	.byte		N05   , Fs1 , v036
	.byte	W06
	.byte		        Dn1 , v064
	.byte		N05   , Fs1 , v036
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Dn1 , v076
	.byte		N11   , Gs1 , v036
	.byte	W12
	.byte		N05   , Fs1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Gs1 , v036
	.byte	W12
	.byte		N05   , Fs1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte	PEND
@ 017   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_9_016
@ 018   ----------------------------------------
	.byte		N23   , Bn0 , v052
	.byte		N11   , Gs1 , v036
	.byte		N23   , Gn2 , v064
	.byte	W12
	.byte		N05   , Fs1 , v036
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Gs1 , v036
	.byte	W12
	.byte		N05   , Fs1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Gs1 , v036
	.byte		N44   , An2 , v064, gtp3
	.byte	W12
	.byte		N05   , Fs1 , v036
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Gs1 , v036
	.byte	W12
	.byte		N05   , Fs1 
	.byte	W06
	.byte		N05   
	.byte	W06
@ 019   ----------------------------------------
	.byte		N23   , Bn0 , v052
	.byte		N23   , En1 , v064
	.byte		N11   , Gs1 , v036
	.byte		N23   , Cs2 , v064
	.byte	W12
	.byte		N05   , Fs1 , v036
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Gs1 , v036
	.byte		N23   , Cs2 , v064
	.byte	W12
	.byte		N05   , Fs1 , v036
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N23   , En1 , v064
	.byte		N11   , Gs1 , v036
	.byte		N23   , Gn2 , v064
	.byte	W12
	.byte		N05   , Fs1 , v036
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v052
	.byte		N11   , Gs1 , v036
	.byte		N02   , En2 
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N05   , Fs1 
	.byte		N02   , En2 , v052
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N05   , Fs1 , v036
	.byte		N02   , En2 , v052
	.byte	W03
	.byte		N02   
	.byte	W03
@ 020   ----------------------------------------
	.byte		N23   , Bn0 , v064
	.byte		N23   , Cs2 
	.byte	W24
	.byte		N11   , Dn1 , v080
	.byte	W12
	.byte		        Gn2 , v052
	.byte	W12
	.byte		        Bn0 , v064
	.byte	W12
	.byte		N11   
	.byte		N11   , Gn2 , v052
	.byte	W12
	.byte		        Dn1 , v080
	.byte	W12
	.byte		        Gn2 , v052
	.byte	W12
@ 021   ----------------------------------------
	.byte		N23   , Bn0 , v064
	.byte	W12
	.byte		N11   , Gn2 , v052
	.byte	W12
	.byte		        Dn1 , v080
	.byte	W12
	.byte		        Gn2 , v052
	.byte	W12
	.byte		        Bn0 , v064
	.byte		N11   , An2 , v052
	.byte	W12
	.byte		        Bn0 , v064
	.byte		N11   , Gn2 , v052
	.byte	W12
	.byte		        Dn1 , v080
	.byte		N23   , En1 
	.byte		N11   , An2 , v052
	.byte	W24
@ 022   ----------------------------------------
sasageyo_9_022:
	.byte		N23   , Bn0 , v064
	.byte		N11   , An2 , v052
	.byte	W12
	.byte		        Gn2 
	.byte	W12
	.byte		        Dn1 , v080
	.byte	W12
	.byte		        Gn2 , v052
	.byte	W12
	.byte		        Bn0 , v064
	.byte	W12
	.byte		N11   
	.byte		N11   , Gn2 , v052
	.byte	W12
	.byte		        Dn1 , v080
	.byte	W12
	.byte		        Gn2 , v052
	.byte	W12
	.byte	PEND
@ 023   ----------------------------------------
	.byte		N23   , Bn0 , v064
	.byte	W12
	.byte		N11   , Gn2 , v052
	.byte	W12
	.byte		        Dn1 , v080
	.byte	W12
	.byte		        Gn2 , v052
	.byte	W12
	.byte		        Bn0 , v064
	.byte		N11   , An2 , v052
	.byte	W12
	.byte		        Bn0 , v064
	.byte		N11   , Gn2 , v052
	.byte	W12
	.byte		        Dn1 , v080
	.byte		N23   , En1 
	.byte		N11   , An2 , v052
	.byte	W12
	.byte		        Bn0 , v064
	.byte	W12
@ 024   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_9_022
@ 025   ----------------------------------------
	.byte		N23   , Bn0 , v064
	.byte	W12
	.byte		N11   , Gn2 , v052
	.byte	W12
	.byte		        Dn1 , v080
	.byte	W12
	.byte		        Gn2 , v052
	.byte	W12
	.byte		        Bn0 , v064
	.byte		N11   , An2 , v052
	.byte	W12
	.byte		        Bn0 , v064
	.byte	W12
	.byte		        Dn1 , v080
	.byte		N23   , En1 
	.byte		N11   , An2 , v052
	.byte	W24
@ 026   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_9_022
@ 027   ----------------------------------------
	.byte		N23   , Bn0 , v064
	.byte		N23   , Dn1 , v080
	.byte		N11   , Cs2 , v052
	.byte		N11   , Gn2 
	.byte	W24
	.byte		N23   , Bn0 , v064
	.byte		N23   , Dn1 , v080
	.byte		N11   , Cs2 , v052
	.byte		N11   , Gn2 
	.byte	W24
	.byte		N23   , Bn0 , v064
	.byte		N23   , Dn1 , v080
	.byte		N11   , Cs2 , v052
	.byte		N11   , Gn2 
	.byte	W24
	.byte		N23   , Bn0 , v064
	.byte		N23   , Dn1 , v080
	.byte		N11   , Cs2 , v052
	.byte		N11   , Gn2 
	.byte	W24
@ 028   ----------------------------------------
	.byte		N23   , Bn0 , v064
	.byte		N05   , Dn1 
	.byte		N05   , En1 
	.byte		N23   , Cs2 , v052
	.byte		N23   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 , v064
	.byte	W06
	.byte		        Bn1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Dn1 
	.byte		N05   , En1 
	.byte		N23   , Cs2 , v052
	.byte		N23   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 , v064
	.byte	W06
	.byte		        Bn1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Dn1 
	.byte		N05   , En1 
	.byte		N23   , Cs2 , v052
	.byte		N23   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 , v064
	.byte	W06
	.byte		        Bn1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Dn1 
	.byte		N05   , En1 
	.byte		N23   , Cs2 , v052
	.byte		N23   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 , v064
	.byte	W06
	.byte		        Bn1 
	.byte	W06
	.byte		N05   
	.byte	W06
@ 029   ----------------------------------------
	.byte		N23   , Bn0 
	.byte		N05   , Cn2 
	.byte		N23   , Cs2 , v052
	.byte		N23   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 , v064
	.byte	W06
	.byte		        Bn1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Dn1 
	.byte		N05   , En1 
	.byte		N23   , Cs2 , v052
	.byte		N23   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 , v064
	.byte	W06
	.byte		        Bn1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Dn1 
	.byte		N05   , En1 
	.byte		N23   , Cs2 , v052
	.byte	W06
	.byte		N05   , Dn1 , v064
	.byte		N05   , En1 
	.byte	W06
	.byte		        Cn2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Bn1 
	.byte		N23   , Cs2 , v052
	.byte		N23   , Gn2 
	.byte	W06
	.byte		N05   , Bn1 , v064
	.byte	W06
	.byte		        An1 
	.byte	W06
	.byte		N05   
	.byte	W06
@ 030   ----------------------------------------
	.byte		N32   , Bn0 , v064, gtp3
	.byte		N23   , Cs2 , v052
	.byte		N23   , En2 
	.byte	W24
	.byte		        Bn2 , v036
	.byte	W12
	.byte		N11   , Bn0 , v064
	.byte	W12
	.byte		N23   , Dn1 , v080
	.byte		N23   , Bn2 , v052
	.byte	W24
	.byte		N23   
	.byte	W12
	.byte		N11   , Bn0 , v064
	.byte	W12
@ 031   ----------------------------------------
	.byte		N32   , Bn0 , v064, gtp3
	.byte		N23   , Bn2 , v052
	.byte	W24
	.byte		N23   
	.byte	W12
	.byte		N11   , Bn0 , v064
	.byte	W12
	.byte		N23   , Dn1 , v080
	.byte		N23   , En2 , v052
	.byte		N23   , Bn2 
	.byte	W24
	.byte		        Gn2 
	.byte		N23   , Bn2 
	.byte	W12
	.byte		N11   , Bn0 , v064
	.byte	W12
@ 032   ----------------------------------------
	.byte		N23   
	.byte		N05   , Dn1 , v052
	.byte		N23   , Cs2 
	.byte		N23   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		        Bn1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v064
	.byte		N05   , Dn1 , v052
	.byte		N23   , Cs2 
	.byte		N23   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		        Bn1 
	.byte	W06
	.byte		        An1 
	.byte	W06
	.byte		N23   , Bn0 , v064
	.byte		N05   , Dn1 , v052
	.byte		N23   , Cs2 
	.byte		N23   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		        Bn1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v064
	.byte		N05   , Dn1 , v052
	.byte		N23   , Cs2 
	.byte		N23   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		        Bn1 
	.byte	W06
	.byte		        An1 
	.byte	W06
@ 033   ----------------------------------------
	.byte		N23   , Bn0 , v064
	.byte		N23   , Dn1 , v052
	.byte		N05   , En1 , v064
	.byte		N23   , Cs2 , v052
	.byte		N23   , En2 
	.byte	W06
	.byte		N05   , Dn2 , v064
	.byte	W06
	.byte		        Cn2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N23   , Dn1 , v052
	.byte		N05   , Bn1 , v064
	.byte		N23   , Cs2 , v052
	.byte		N23   , En2 
	.byte	W06
	.byte		N05   , Bn1 , v064
	.byte	W06
	.byte		        An1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N23   , Dn1 , v052
	.byte		N05   , En1 , v064
	.byte		N23   , Cs2 , v052
	.byte		N23   , En2 
	.byte	W06
	.byte		N05   , Dn2 , v064
	.byte	W06
	.byte		        Cn2 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Bn1 
	.byte		N02   , Gn2 , v036
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N05   , Bn1 , v064
	.byte		N02   , Gn2 , v036
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N05   , An1 , v064
	.byte		N02   , Gn2 , v052
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N05   , An1 , v064
	.byte		N02   , Gn2 , v052
	.byte	W03
	.byte		N02   
	.byte	W03
@ 034   ----------------------------------------
	.byte		N32   , Bn0 , v064, gtp3
	.byte		N23   , Cs2 
	.byte	W24
	.byte		        Bn2 , v036
	.byte	W12
	.byte		N11   , Bn0 , v064
	.byte	W12
	.byte		N23   , Dn1 , v080
	.byte		N23   , Cs2 , v036
	.byte	W24
	.byte		        Bn2 
	.byte	W12
	.byte		N11   , Bn0 , v064
	.byte	W12
@ 035   ----------------------------------------
	.byte		N32   , Bn0 , v064, gtp3
	.byte	W24
	.byte		N23   , Bn2 , v036
	.byte	W12
	.byte		N11   , Bn0 , v064
	.byte	W12
	.byte		N23   , Dn1 , v080
	.byte		N23   , Cs2 , v036
	.byte	W24
	.byte		        Bn2 
	.byte	W12
	.byte		N05   , Cn2 , v080
	.byte	W06
	.byte		        Bn1 
	.byte	W06
@ 036   ----------------------------------------
	.byte		N32   , Bn0 , v064, gtp3
	.byte		N23   , Cs2 , v036
	.byte	W24
	.byte		        Bn2 
	.byte	W12
	.byte		N11   , Bn0 , v064
	.byte	W12
	.byte		N23   , Dn1 , v080
	.byte		N23   , Cs2 , v036
	.byte	W24
	.byte		        Bn2 
	.byte	W12
	.byte		N11   , Bn0 , v064
	.byte		N05   , Cn2 , v080
	.byte	W06
	.byte		        Bn1 
	.byte	W06
@ 037   ----------------------------------------
	.byte		N32   , Bn0 , v064, gtp3
	.byte		N11   , An1 , v080
	.byte		N23   , Bn2 , v036
	.byte	W12
	.byte		        Dn1 , v080
	.byte	W12
	.byte		        Bn2 , v036
	.byte	W12
	.byte		N11   , Bn0 , v064
	.byte		N05   , An1 , v080
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , En1 
	.byte		N23   , Cs2 , v036
	.byte	W24
	.byte		        En1 , v080
	.byte		N02   , En2 , v016
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N11   , Bn0 , v064
	.byte		N02   , En2 , v036
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N02   
	.byte	W03
@ 038   ----------------------------------------
	.byte		N23   , Bn0 , v064
	.byte		N23   , Dn1 , v080
	.byte		N44   , Gn2 , v052, gtp3
	.byte	W96
@ 039   ----------------------------------------
	.byte	W60
	.byte		N05   , Fn1 , v064
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Dn1 , v080
	.byte		N23   , Fn1 
	.byte		N11   , Fs1 , v052
	.byte		N11   , Gs1 
	.byte		N11   , En2 
	.byte		N11   , Gn2 
	.byte	W12
	.byte		N05   , Fs1 , v036
	.byte	W06
	.byte		N05   
	.byte	W06
@ 040   ----------------------------------------
	.byte		N23   , Bn0 , v064
	.byte		N05   , Dn1 , v052
	.byte		N23   , Cs2 , v064
	.byte		N23   , En2 
	.byte		N23   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 , v052
	.byte	W06
	.byte		        Bn1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v064
	.byte		N05   , Dn1 , v052
	.byte		N23   , Cs2 , v064
	.byte	W06
	.byte		N05   , Cn2 , v052
	.byte	W06
	.byte		        Bn1 
	.byte	W06
	.byte		        An1 
	.byte	W06
	.byte		N23   , Bn0 , v064
	.byte		N05   , Dn1 , v052
	.byte		N23   , Cs2 , v064
	.byte	W06
	.byte		N05   , Cn2 , v052
	.byte	W06
	.byte		        Bn1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 , v064
	.byte		N05   , Dn1 , v052
	.byte		N23   , Cs2 , v064
	.byte	W06
	.byte		N05   , Cn2 , v052
	.byte	W06
	.byte		        Bn1 
	.byte	W06
	.byte		        An1 
	.byte	W06
@ 041   ----------------------------------------
	.byte		N23   , Bn0 , v064
	.byte		N05   , Dn1 
	.byte		N23   , Cs2 
	.byte		N23   , En2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		        Bn1 
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Dn1 
	.byte		N23   , Cs2 
	.byte		N23   , En2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		        Bn1 
	.byte	W06
	.byte		        An1 
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Dn1 , v080
	.byte		N23   , Cs2 , v064
	.byte		N23   , En2 
	.byte	W06
	.byte		N05   , Dn1 , v080
	.byte	W06
	.byte		        Cn2 , v064
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Dn1 
	.byte		N02   , Gn2 , v036
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N05   , Cn2 , v064
	.byte		N02   , Gn2 , v036
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N05   , Bn1 , v064
	.byte		N02   , Gn2 , v052
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N05   , An1 , v064
	.byte		N02   , Gn2 , v052
	.byte	W03
	.byte		N02   
	.byte	W03
@ 042   ----------------------------------------
	.byte		N23   , Bn0 , v064
	.byte		N05   , Bn1 , v052
	.byte		N11   , Cs2 , v064
	.byte		N11   , En2 
	.byte		N11   , Gn2 
	.byte	W06
	.byte		N05   , An1 , v052
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 , v064
	.byte	W06
	.byte		N05   , Cn2 , v052
	.byte	W06
	.byte		N23   , Bn0 , v064
	.byte		N05   , Bn1 , v052
	.byte		N11   , En2 , v064
	.byte	W06
	.byte		N05   , An1 , v052
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 , v064
	.byte	W06
	.byte		N05   , Cn2 , v052
	.byte	W06
	.byte		N23   , Bn0 , v064
	.byte		N05   , Bn1 , v052
	.byte		N11   , En2 , v064
	.byte	W06
	.byte		N05   , An1 , v052
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 , v064
	.byte	W06
	.byte		N05   , Cn2 , v052
	.byte	W06
	.byte		N23   , Bn0 , v064
	.byte		N05   , Bn1 , v052
	.byte		N11   , En2 , v064
	.byte	W06
	.byte		N05   , An1 , v052
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 , v064
	.byte	W06
	.byte		N05   , Cn2 , v052
	.byte	W06
@ 043   ----------------------------------------
sasageyo_9_043:
	.byte		N23   , Bn0 , v064
	.byte		N05   , Bn1 , v052
	.byte		N11   , En2 , v064
	.byte	W06
	.byte		N05   , An1 , v052
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 , v064
	.byte	W06
	.byte		N05   , Cn2 , v052
	.byte	W06
	.byte		N23   , Bn0 , v064
	.byte		N05   , Bn1 , v052
	.byte		N11   , En2 , v064
	.byte	W06
	.byte		N05   , An1 , v052
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 , v064
	.byte	W06
	.byte		N05   , Cn2 , v052
	.byte	W06
	.byte		N23   , Bn0 , v064
	.byte		N05   , Bn1 , v052
	.byte		N11   , En2 , v064
	.byte	W06
	.byte		N05   , An1 , v052
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 , v064
	.byte	W06
	.byte		N05   , Cn2 , v052
	.byte	W06
	.byte		N23   , Bn0 , v064
	.byte		N05   , Bn1 , v052
	.byte		N11   , En2 , v064
	.byte	W06
	.byte		N05   , An1 , v052
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 , v064
	.byte	W06
	.byte		N05   , Cn2 , v052
	.byte	W06
	.byte	PEND
@ 044   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_9_043
@ 045   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_9_043
@ 046   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_9_043
@ 047   ----------------------------------------
	.byte		N23   , Bn0 , v064
	.byte		N05   , Bn1 , v052
	.byte		N11   , En2 , v064
	.byte	W06
	.byte		N05   , An1 , v052
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 , v064
	.byte	W06
	.byte		N05   , Cn2 , v052
	.byte	W06
	.byte		N23   , Bn0 , v064
	.byte		N05   , Bn1 , v052
	.byte		N11   , En2 , v064
	.byte	W06
	.byte		N05   , An1 , v052
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 , v064
	.byte	W06
	.byte		N05   , Cn2 , v052
	.byte	W06
	.byte		N23   , Bn0 , v064
	.byte		N05   , Bn1 , v052
	.byte		N11   , En2 , v064
	.byte	W06
	.byte		N05   , An1 , v052
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 , v064
	.byte	W06
	.byte		N05   , Cn2 , v052
	.byte	W06
	.byte		N23   , Bn0 , v064
	.byte		N02   , Dn1 , v052
	.byte		N02   , En2 , v036
	.byte	W03
	.byte		        Dn1 , v052
	.byte		N02   , En2 , v036
	.byte	W03
	.byte		        Dn1 , v052
	.byte		N02   , En2 , v036
	.byte	W03
	.byte		        Dn1 , v052
	.byte		N02   , En2 , v036
	.byte	W03
	.byte		        Dn1 , v052
	.byte		N02   , En2 
	.byte	W03
	.byte		        Dn1 
	.byte		N02   , En2 
	.byte	W03
	.byte		        Dn1 
	.byte		N02   , En2 
	.byte	W03
	.byte		        Dn1 
	.byte		N02   , En2 
	.byte	W03
@ 048   ----------------------------------------
	.byte		N23   , Bn0 , v064
	.byte		N11   , Fs1 
	.byte	W60
	.byte		        Fn1 , v052
	.byte	W12
	.byte		N23   , Bn0 , v064
	.byte		N02   , Dn1 , v080
	.byte		N02   , En2 , v036
	.byte	W03
	.byte		        Dn1 , v080
	.byte		N02   , En2 , v036
	.byte	W03
	.byte		        Dn1 , v080
	.byte		N02   , En2 , v036
	.byte	W03
	.byte		        Dn1 , v080
	.byte		N02   , En2 , v036
	.byte	W03
	.byte		N11   , Dn1 , v080
	.byte		N02   , En2 , v052
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N02   
	.byte	W03
@ 049   ----------------------------------------
sasageyo_9_049:
	.byte		N23   , Bn0 , v064
	.byte		N05   , Bn1 
	.byte		N11   , Cs2 
	.byte		N11   , An2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Bn1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Bn1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Bn1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte	PEND
@ 050   ----------------------------------------
sasageyo_9_050:
	.byte		N23   , Bn0 , v064
	.byte		N05   , Bn1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Bn1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Bn1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Bn1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte	PEND
@ 051   ----------------------------------------
	.byte		N23   , Bn0 
	.byte		N05   , Bn1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Bn1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Bn1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		        An1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		N11   , Bn0 
	.byte		N11   , Dn1 
	.byte		N11   , Gn2 
	.byte		N11   , An2 
	.byte	W12
@ 052   ----------------------------------------
	.byte		N05   , An1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		N11   , Bn0 
	.byte		N11   , Dn1 
	.byte		N11   , Gn2 
	.byte		N11   , An2 
	.byte	W12
	.byte		N05   , An1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		N11   , Bn0 
	.byte		N11   , Dn1 
	.byte		N11   , Gn2 
	.byte		N11   , An2 
	.byte	W12
	.byte		N05   , An1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		N11   , Bn0 
	.byte		N05   , Dn1 , v080
	.byte		N11   , Gn2 , v064
	.byte		N11   , An2 
	.byte	W06
	.byte		N05   , Dn1 , v080
	.byte	W06
	.byte		N05   
	.byte		N11   , En2 , v064
	.byte	W06
	.byte		N05   , Dn1 , v080
	.byte	W06
	.byte		N11   , Bn0 , v064
	.byte		N05   , Dn1 , v080
	.byte		N11   , Gn2 , v064
	.byte		N11   , An2 
	.byte	W06
	.byte		N05   , Dn1 , v080
	.byte	W06
@ 053   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_9_049
@ 054   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_9_050
@ 055   ----------------------------------------
	.byte		N23   , Bn0 , v064
	.byte		N05   , Bn1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Bn1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Bn1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Bn1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 
	.byte		N11   , An2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
@ 056   ----------------------------------------
	.byte		N23   , Bn0 
	.byte		N05   , Bn1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 
	.byte		N11   , An2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , Bn1 
	.byte		N11   , En2 
	.byte	W06
	.byte		N05   , An1 
	.byte	W06
	.byte		        Dn1 
	.byte		N05   , En1 
	.byte		N11   , Gn2 
	.byte		N11   , An2 
	.byte	W06
	.byte		N05   , Cn2 
	.byte	W06
	.byte		N23   , Bn0 
	.byte		N05   , An1 
	.byte		N02   , En2 , v036
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N05   , An1 , v064
	.byte		N02   , En2 , v036
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N05   , Dn1 , v080
	.byte		N05   , En1 
	.byte		N02   , En2 , v036
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N05   , Dn1 , v080
	.byte		N05   , En1 
	.byte		N02   , En2 , v036
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N23   , Bn0 , v064
	.byte		N05   , Dn1 , v080
	.byte		N05   , En1 
	.byte		N02   , En2 , v044
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N05   , Dn1 , v080
	.byte		N05   , En1 
	.byte		N02   , En2 , v044
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N05   , Dn1 , v080
	.byte		N05   , En1 
	.byte		N02   , En2 , v056
	.byte	W03
	.byte		N02   
	.byte	W03
	.byte		N05   , Dn1 , v080
	.byte		N05   , En1 
	.byte		N02   , En2 , v056
	.byte	W03
	.byte		N02   
	.byte	W03
@ 057   ----------------------------------------
	.byte		N05   , Bn0 , v064
	.byte		N05   , Dn1 , v080
	.byte		N05   , En1 
	.byte		N11   , Cs2 , v064
	.byte	W11
	.byte	GOTO
	 .word	sasageyo_9_B1
sasageyo_9_B2:
	.byte	FINE

@**************** Track 10 (Midi-Chn.11) ****************@

sasageyo_10:
	.byte	KEYSH , sasageyo_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 56
	.byte		VOL   , 100*sasageyo_mvl/mxv
	.byte		        100*sasageyo_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte	W96
@ 002   ----------------------------------------
	.byte		N11   , An2 , v080
	.byte	W12
	.byte		N17   , En3 
	.byte	W24
	.byte		N20   , Fn3 
	.byte	W24
	.byte		N17   , Dn3 
	.byte	W24
	.byte		        En3 
	.byte	W12
@ 003   ----------------------------------------
	.byte	W12
	.byte		        Cn3 
	.byte	W24
	.byte		        Dn3 
	.byte	W24
	.byte		        Bn2 
	.byte	W24
	.byte		N11   , Cn3 
	.byte	W11
sasageyo_10_B1:
	.byte	W01
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte		N11   , An3 , v052
	.byte		N11   , En4 
	.byte	W24
	.byte		N11   
	.byte		N11   , An4 
	.byte	W12
	.byte		        En4 
	.byte		N11   , An4 
	.byte	W36
	.byte		        En4 
	.byte		N11   , An4 
	.byte	W12
	.byte		        En4 
	.byte		N11   , An4 
	.byte	W12
@ 013   ----------------------------------------
sasageyo_10_013:
	.byte	W24
	.byte		N11   , En4 , v052
	.byte		N11   , An4 
	.byte	W12
	.byte		        En4 
	.byte		N11   , An4 
	.byte	W36
	.byte		        Dn4 
	.byte		N11   , Gn4 
	.byte	W12
	.byte		        Dn4 
	.byte		N11   , Gn4 
	.byte	W12
	.byte	PEND
@ 014   ----------------------------------------
sasageyo_10_014:
	.byte	W24
	.byte		N11   , En4 , v052
	.byte		N11   , An4 
	.byte	W12
	.byte		        En4 
	.byte		N11   , An4 
	.byte	W36
	.byte		        En4 
	.byte		N11   , An4 
	.byte	W12
	.byte		        En4 
	.byte		N11   , An4 
	.byte	W12
	.byte	PEND
@ 015   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_10_013
@ 016   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_10_014
@ 017   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_10_013
@ 018   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_10_014
@ 019   ----------------------------------------
	.byte		N44   , Bn3 , v052, gtp3
	.byte	W48
	.byte		        Bn3 , v052, gtp3
	.byte	W48
@ 020   ----------------------------------------
	.byte		        Cs4 , v052, gtp3
	.byte	W48
	.byte		        Fs3 , v052, gtp3
	.byte	W48
@ 021   ----------------------------------------
	.byte		        Bn3 , v052, gtp3
	.byte	W48
	.byte		N23   , An3 
	.byte	W24
	.byte		        Gs3 
	.byte	W24
@ 022   ----------------------------------------
	.byte		N44   , Fs3 , v052, gtp3
	.byte	W48
	.byte		N32   , Cs3 , v052, gtp3
	.byte	W36
	.byte		N11   , En3 
	.byte	W12
@ 023   ----------------------------------------
	.byte		N23   , Gs3 
	.byte	W24
	.byte		        Bn3 
	.byte	W24
	.byte		N17   , An3 
	.byte	W18
	.byte		N05   , Gs3 
	.byte	W06
	.byte		        An3 
	.byte	W06
	.byte		        Bn3 
	.byte	W06
	.byte		        Cs4 
	.byte	W06
	.byte		        Dn4 
	.byte	W06
@ 024   ----------------------------------------
	.byte		N44   , En4 , v052, gtp3
	.byte	W48
	.byte		        An3 , v052, gtp3
	.byte	W48
@ 025   ----------------------------------------
	.byte		        Gn4 , v052, gtp3
	.byte	W48
	.byte		N23   , Fn4 
	.byte	W24
	.byte		        En4 
	.byte	W24
@ 026   ----------------------------------------
	.byte		N44   , Cn4 , v052, gtp3
	.byte	W48
	.byte		        An3 , v052, gtp3
	.byte	W48
@ 027   ----------------------------------------
	.byte		        An3 , v052, gtp3
	.byte		N44   , En4 , v064, gtp3
	.byte	W48
	.byte		        Gs3 , v052, gtp3
	.byte		N44   , En4 , v080, gtp3
	.byte	W48
@ 028   ----------------------------------------
	.byte		N05   , Fn4 
	.byte	W06
	.byte		        En4 
	.byte	W06
	.byte		        Dn4 
	.byte	W06
	.byte		        Cn4 
	.byte	W06
	.byte		        Fn4 
	.byte	W06
	.byte		        En4 
	.byte	W06
	.byte		        Dn4 
	.byte	W06
	.byte		        Cn4 
	.byte	W06
	.byte		        Fn4 
	.byte	W06
	.byte		        En4 
	.byte	W06
	.byte		        Dn4 
	.byte	W06
	.byte		        Cn4 
	.byte	W06
	.byte		        Fn4 
	.byte	W06
	.byte		        En4 
	.byte	W06
	.byte		        Dn4 
	.byte	W06
	.byte		        Cn4 
	.byte	W06
@ 029   ----------------------------------------
	.byte		        En4 
	.byte	W06
	.byte		        Dn4 
	.byte	W06
	.byte		        Cn4 
	.byte	W06
	.byte		        Bn3 
	.byte	W06
	.byte		        En4 
	.byte	W06
	.byte		        Dn4 
	.byte	W06
	.byte		        Cn4 
	.byte	W06
	.byte		        Bn3 
	.byte	W06
	.byte		        En4 
	.byte	W06
	.byte		        Dn4 
	.byte	W06
	.byte		        Cn4 
	.byte	W06
	.byte		        Bn3 
	.byte	W06
	.byte		        En4 
	.byte	W06
	.byte		        Dn4 
	.byte	W06
	.byte		        Cn4 
	.byte	W06
	.byte		        Bn3 
	.byte	W06
@ 030   ----------------------------------------
	.byte	W96
@ 031   ----------------------------------------
	.byte	W96
@ 032   ----------------------------------------
	.byte		N44   , Dn4 , v080, gtp3
	.byte	W48
	.byte		        Ds4 , v064, gtp3
	.byte		N44   , Fs4 , v080, gtp3
	.byte	W48
@ 033   ----------------------------------------
	.byte		        En4 , v064, gtp3
	.byte		N11   , An4 , v080
	.byte	W48
	.byte		N44   , En4 , v080, gtp3
	.byte	W48
@ 034   ----------------------------------------
sasageyo_10_034:
	.byte		N44   , Cn4 , v064, gtp3
	.byte	W48
	.byte		        Bn3 , v064, gtp3
	.byte	W48
	.byte	PEND
@ 035   ----------------------------------------
	.byte		        Dn4 , v064, gtp3
	.byte	W48
	.byte		        Cn4 , v064, gtp3
	.byte	W48
@ 036   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_10_034
@ 037   ----------------------------------------
	.byte		N44   , Dn4 , v064, gtp3
	.byte	W48
	.byte		N23   , Cn4 
	.byte	W24
	.byte		        Bn3 
	.byte	W24
@ 038   ----------------------------------------
	.byte	W96
@ 039   ----------------------------------------
	.byte	W84
	.byte		N02   , Bn3 , v080
	.byte	W06
	.byte		        Cn4 
	.byte	W06
@ 040   ----------------------------------------
	.byte		N23   
	.byte	W48
	.byte		        Dn4 
	.byte	W48
@ 041   ----------------------------------------
	.byte		N44   , Bn3 , v052, gtp3
	.byte		N11   , En4 , v080
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		N44   , Bn3 , v052, gtp3
	.byte		N11   , En4 , v080
	.byte	W24
	.byte		N11   
	.byte	W24
@ 042   ----------------------------------------
sasageyo_10_042:
	.byte		N23   , Cn4 , v096
	.byte	W36
	.byte		N11   , As3 
	.byte	W12
	.byte		N23   
	.byte	W36
	.byte		N11   
	.byte	W12
	.byte	PEND
@ 043   ----------------------------------------
sasageyo_10_043:
	.byte		N32   , Fn4 , v096, gtp3
	.byte		N44   , Gs4 , v080, gtp3
	.byte	W48
	.byte		N11   , Ds4 , v096
	.byte		N44   , Gn4 , v080, gtp3
	.byte	W24
	.byte		N11   , Dn4 , v096
	.byte	W24
	.byte	PEND
@ 044   ----------------------------------------
	.byte		N23   , Cn4 
	.byte	W36
	.byte		N11   , As3 
	.byte	W12
	.byte		N23   
	.byte	W24
	.byte		        Dn4 , v080
	.byte	W12
	.byte		N11   , As3 , v096
	.byte	W12
@ 045   ----------------------------------------
	.byte		N23   
	.byte		N32   , Ds4 , v080, gtp3
	.byte	W36
	.byte		        Dn4 , v080, gtp3
	.byte	W12
	.byte		N11   , Ds4 , v096
	.byte	W24
	.byte		N23   , As3 , v080
	.byte		N11   , Dn4 , v096
	.byte	W24
@ 046   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_10_042
@ 047   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_10_043
@ 048   ----------------------------------------
	.byte		N11   , Cn4 , v096
	.byte	W60
	.byte		N05   , As4 , v080
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		        As4 
	.byte	W06
	.byte		        Cn5 
	.byte	W06
	.byte		        As4 
	.byte	W12
@ 049   ----------------------------------------
sasageyo_10_049:
	.byte		N11   , Cn4 , v080
	.byte	W12
	.byte		N17   , Ds4 
	.byte	W24
	.byte		N20   , Fn4 
	.byte	W24
	.byte		        Dn4 
	.byte	W24
	.byte		N11   , Ds4 
	.byte	W12
	.byte	PEND
@ 050   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_10_049
@ 051   ----------------------------------------
	.byte		N11   , Cn4 , v080
	.byte	W12
	.byte		N17   , Ds4 
	.byte	W24
	.byte		N20   , Fn4 
	.byte	W24
	.byte		        Dn4 
	.byte	W24
	.byte		        Ds4 
	.byte	W12
@ 052   ----------------------------------------
	.byte	W12
	.byte		        Cn4 
	.byte	W24
	.byte		        Dn4 
	.byte	W24
	.byte		        As3 
	.byte	W24
	.byte		N11   , Cn4 
	.byte	W12
@ 053   ----------------------------------------
sasageyo_10_053:
	.byte		N11   , As3 , v080
	.byte		N05   , Ds4 , v096
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N17   , Fs4 , v080
	.byte	W06
	.byte		N05   , Ds4 , v096
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N20   , Gs4 , v080
	.byte	W06
	.byte		N05   , Ds4 , v096
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte	W06
	.byte		N05   
	.byte		N20   , Fn4 , v080
	.byte	W06
	.byte		N05   , Ds4 , v096
	.byte	W06
	.byte		N17   
	.byte	W12
	.byte		N11   , Fs4 , v080
	.byte	W12
	.byte	PEND
@ 054   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_10_053
@ 055   ----------------------------------------
	.byte		N11   , As3 , v080
	.byte	W12
	.byte		N17   , Fs4 
	.byte	W24
	.byte		N20   , Gs4 
	.byte	W24
	.byte		        Fn4 
	.byte	W24
	.byte		        Fs4 
	.byte	W12
@ 056   ----------------------------------------
	.byte	W12
	.byte		        Ds4 
	.byte	W24
	.byte		        Fn4 
	.byte	W24
	.byte		        Cs4 
	.byte	W24
	.byte		N11   , Ds4 
	.byte	W12
@ 057   ----------------------------------------
	.byte		        As3 
	.byte	W11
	.byte	GOTO
	 .word	sasageyo_10_B1
sasageyo_10_B2:
	.byte	FINE

@**************** Track 11 (Midi-Chn.13) ****************@

sasageyo_11:
	.byte	KEYSH , sasageyo_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 48
	.byte		VOL   , 100*sasageyo_mvl/mxv
	.byte		        100*sasageyo_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte	W96
@ 001   ----------------------------------------
	.byte		N11   , An3 , v064
	.byte	W12
	.byte		N22   , En4 
	.byte	W24
	.byte		        Fn4 
	.byte	W24
	.byte		        Dn4 
	.byte	W24
	.byte		N11   , En4 
	.byte	W12
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W92
	.byte	W03
sasageyo_11_B1:
	.byte	W01
@ 004   ----------------------------------------
	.byte	W96
@ 005   ----------------------------------------
	.byte	W96
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W48
	.byte		N17   , An2 , v064
	.byte		N17   , An3 
	.byte	W18
	.byte		        Bn2 
	.byte		N17   , Bn3 
	.byte	W18
	.byte		TIE   , Cs3 
	.byte		TIE   , Cs4 
	.byte	W12
@ 010   ----------------------------------------
	.byte	W90
	.byte		EOT   , Cs3 
	.byte		        Cs4 
	.byte	W06
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte	W96
@ 027   ----------------------------------------
	.byte	W60
	.byte		N01   , Bn5 
	.byte		N01   , Cn6 
	.byte	W01
	.byte		        As5 
	.byte	W01
	.byte		        An5 
	.byte	W01
	.byte		        Gs5 
	.byte	W01
	.byte		        Gn5 
	.byte	W01
	.byte		        Fs5 
	.byte	W01
	.byte		        Fn5 
	.byte	W01
	.byte		        En5 
	.byte	W01
	.byte		        Ds5 
	.byte	W01
	.byte		        Dn5 
	.byte	W01
	.byte		        Cs5 
	.byte	W01
	.byte		        Cn5 
	.byte	W01
	.byte		        Bn4 
	.byte	W01
	.byte		        As4 
	.byte	W01
	.byte		        An4 
	.byte	W01
	.byte		        Gs4 
	.byte	W01
	.byte		        Gn4 
	.byte	W01
	.byte		        Fs4 
	.byte	W01
	.byte		        En4 
	.byte		N01   , Fn4 
	.byte	W01
	.byte		        Ds4 
	.byte	W01
	.byte		        Dn4 
	.byte	W01
	.byte		        Cs4 
	.byte	W01
	.byte		        Cn4 
	.byte	W01
	.byte		        Bn3 
	.byte	W01
	.byte		        As3 
	.byte	W01
	.byte		        An3 
	.byte	W01
	.byte		        Gs3 
	.byte	W01
	.byte		        Gn3 
	.byte	W01
	.byte		        Fs3 
	.byte	W01
	.byte		        Fn3 
	.byte	W01
	.byte		        En3 
	.byte	W01
	.byte		        Ds3 
	.byte	W01
	.byte		        Dn3 
	.byte	W01
	.byte		        Cs3 
	.byte	W01
	.byte		        Cn3 
	.byte	W02
@ 028   ----------------------------------------
	.byte		N11   , Bn2 
	.byte	W96
@ 029   ----------------------------------------
	.byte	W96
@ 030   ----------------------------------------
	.byte	W96
@ 031   ----------------------------------------
	.byte	W96
@ 032   ----------------------------------------
	.byte	W96
@ 033   ----------------------------------------
	.byte	W96
@ 034   ----------------------------------------
	.byte		        Cn4 , v080
	.byte	W12
	.byte		        En3 
	.byte	W12
	.byte		        An3 
	.byte	W12
	.byte		        Dn4 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Gn3 
	.byte	W12
	.byte		        Dn4 
	.byte	W12
	.byte		        Fn4 
	.byte	W12
@ 035   ----------------------------------------
sasageyo_11_035:
	.byte		N11   , Fn4 , v080
	.byte	W12
	.byte		        Gn3 
	.byte	W12
	.byte		        Dn4 
	.byte	W12
	.byte		        En4 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Gn3 
	.byte	W12
	.byte		        Dn4 
	.byte	W12
	.byte		        Gn3 
	.byte	W12
	.byte	PEND
@ 036   ----------------------------------------
	.byte		        Cn4 
	.byte	W12
	.byte		        Fn3 
	.byte	W12
	.byte		        An3 
	.byte	W12
	.byte		        Cn4 
	.byte	W12
	.byte		        Dn4 
	.byte	W12
	.byte		        Gn3 
	.byte	W12
	.byte		        Dn4 
	.byte	W12
	.byte		        Fn4 
	.byte	W12
@ 037   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_11_035
@ 038   ----------------------------------------
	.byte	W96
@ 039   ----------------------------------------
	.byte	W72
	.byte		N11   , Bn3 , v064
	.byte	W12
	.byte		        Gn3 
	.byte	W12
@ 040   ----------------------------------------
	.byte	W96
@ 041   ----------------------------------------
	.byte	W96
@ 042   ----------------------------------------
	.byte	W96
@ 043   ----------------------------------------
	.byte	W96
@ 044   ----------------------------------------
	.byte	W96
@ 045   ----------------------------------------
	.byte	W96
@ 046   ----------------------------------------
	.byte	W96
@ 047   ----------------------------------------
	.byte	W96
@ 048   ----------------------------------------
	.byte	W96
@ 049   ----------------------------------------
	.byte	W96
@ 050   ----------------------------------------
	.byte	W96
@ 051   ----------------------------------------
	.byte	W96
@ 052   ----------------------------------------
	.byte	W96
@ 053   ----------------------------------------
	.byte	W96
@ 054   ----------------------------------------
	.byte	W96
@ 055   ----------------------------------------
	.byte	W96
@ 056   ----------------------------------------
	.byte	W96
@ 057   ----------------------------------------
	.byte	W11
	.byte	GOTO
	 .word	sasageyo_11_B1
sasageyo_11_B2:
	.byte	FINE

@**************** Track 12 (Midi-Chn.14) ****************@

sasageyo_12:
	.byte	KEYSH , sasageyo_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 57
	.byte		VOL   , 100*sasageyo_mvl/mxv
	.byte		        100*sasageyo_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte		N11   , An3 , v064
	.byte	W12
	.byte		N23   , En4 
	.byte	W24
	.byte		        Fn4 
	.byte	W24
	.byte		        Dn4 
	.byte	W24
	.byte		N11   , En4 
	.byte	W12
@ 001   ----------------------------------------
	.byte		        An3 
	.byte	W12
	.byte		N23   , En4 
	.byte	W24
	.byte		        Fn4 
	.byte	W24
	.byte		        Dn4 
	.byte	W24
	.byte		N11   , En4 
	.byte	W12
@ 002   ----------------------------------------
	.byte		        An2 , v052
	.byte	W12
	.byte		N11   
	.byte	W24
	.byte		N20   
	.byte	W24
	.byte		N20   
	.byte	W24
	.byte		N20   
	.byte	W12
@ 003   ----------------------------------------
	.byte	W12
	.byte		        Fn2 
	.byte	W24
	.byte		N20   
	.byte	W24
	.byte		        En2 
	.byte	W24
	.byte		N11   
	.byte	W11
sasageyo_12_B1:
	.byte	W01
@ 004   ----------------------------------------
	.byte	W12
	.byte		N07   , Cs3 , v064
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W12
@ 005   ----------------------------------------
	.byte	W12
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		        Bn2 
	.byte	W12
@ 006   ----------------------------------------
	.byte	W12
	.byte		        An2 
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W12
@ 007   ----------------------------------------
	.byte	W12
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		        Gs2 
	.byte	W12
@ 008   ----------------------------------------
	.byte	W12
	.byte		        Fs2 
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W12
@ 009   ----------------------------------------
	.byte	W12
	.byte		        En2 
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W12
@ 010   ----------------------------------------
	.byte	W12
	.byte		        Dn2 
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W24
	.byte		N07   
	.byte	W12
@ 011   ----------------------------------------
	.byte	W12
	.byte		        Gs2 
	.byte	W24
	.byte		N07   
	.byte	W12
	.byte		N01   
	.byte	W01
	.byte		        An2 
	.byte	W01
	.byte		        As2 
	.byte	W02
	.byte		        Bn2 
	.byte	W01
	.byte		        Cn3 
	.byte	W01
	.byte		        Cs3 
	.byte	W02
	.byte		        Dn3 
	.byte	W01
	.byte		        Ds3 
	.byte	W02
	.byte		        En3 
	.byte	W01
	.byte		N07   , Gs2 
	.byte		N01   , Fn3 
	.byte	W01
	.byte		        Fs3 
	.byte	W02
	.byte		        Gn3 
	.byte	W01
	.byte		        Gs3 
	.byte	W02
	.byte		        An3 
	.byte	W01
	.byte		        As3 
	.byte	W02
	.byte		        Bn3 
	.byte	W01
	.byte		        Cn4 
	.byte	W02
	.byte		N23   , Cs4 
	.byte	W12
	.byte		N07   , Gs2 
	.byte	W12
@ 012   ----------------------------------------
	.byte		        An2 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        En2 
	.byte	W12
@ 013   ----------------------------------------
	.byte		        An2 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        Gn2 
	.byte	W12
	.byte		        Dn2 
	.byte	W12
@ 014   ----------------------------------------
	.byte		        Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
@ 015   ----------------------------------------
	.byte		        Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
	.byte		        En2 
	.byte	W12
	.byte		        Cn2 
	.byte	W12
@ 016   ----------------------------------------
	.byte		        Dn3 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        An2 
	.byte	W12
	.byte		        Dn3 
	.byte	W12
	.byte		        An2 
	.byte	W12
@ 017   ----------------------------------------
	.byte		        Cn3 
	.byte	W12
	.byte		        Gn2 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		        Gn2 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		        Gn2 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		        Gn2 
	.byte	W12
@ 018   ----------------------------------------
	.byte		        As2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        As2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        As2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
	.byte		        As2 
	.byte	W12
	.byte		        Fn2 
	.byte	W12
@ 019   ----------------------------------------
	.byte		        En3 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        En3 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        En3 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        En3 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
@ 020   ----------------------------------------
	.byte	W96
@ 021   ----------------------------------------
	.byte	W96
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte	W96
@ 027   ----------------------------------------
	.byte	W96
@ 028   ----------------------------------------
	.byte		N11   , Fn3 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		        Fn3 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		        Fn3 
	.byte	W12
	.byte		        Cn3 
	.byte	W12
	.byte		N23   , Fn3 
	.byte	W24
@ 029   ----------------------------------------
	.byte		N11   , En3 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        En3 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		        En3 
	.byte	W12
	.byte		        Bn2 
	.byte	W12
	.byte		N23   , En3 
	.byte	W24
@ 030   ----------------------------------------
	.byte	W96
@ 031   ----------------------------------------
	.byte		N44   , Cn2 , v064, gtp3
	.byte	W48
	.byte		        Cs2 , v064, gtp3
	.byte	W48
@ 032   ----------------------------------------
	.byte		        Dn3 , v064, gtp3
	.byte	W48
	.byte		        Ds3 , v064, gtp3
	.byte	W48
@ 033   ----------------------------------------
	.byte		        En3 , v064, gtp3
	.byte	W48
	.byte		        En3 , v064, gtp3
	.byte	W48
@ 034   ----------------------------------------
sasageyo_12_034:
	.byte		N44   , An2 , v064, gtp3
	.byte	W48
	.byte		        Gn2 , v064, gtp3
	.byte	W48
	.byte	PEND
@ 035   ----------------------------------------
	.byte		        Cn3 , v064, gtp3
	.byte	W48
	.byte		        Gn2 , v064, gtp3
	.byte	W48
@ 036   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_12_034
@ 037   ----------------------------------------
	.byte		N44   , Cn2 , v064, gtp3
	.byte	W48
	.byte		        Cn2 , v064, gtp3
	.byte	W48
@ 038   ----------------------------------------
	.byte		N11   , Cn4 , v080
	.byte	W12
	.byte		        En3 
	.byte	W12
	.byte		        An3 
	.byte	W12
	.byte		        Dn4 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Gn3 
	.byte	W12
	.byte		        Dn4 
	.byte	W12
	.byte		        Fn4 
	.byte	W12
@ 039   ----------------------------------------
	.byte		N11   
	.byte	W12
	.byte		        Gn3 
	.byte	W12
	.byte		        Dn4 
	.byte	W12
	.byte		        En4 
	.byte	W12
	.byte		N11   
	.byte	W12
	.byte		        Gn3 
	.byte	W12
	.byte		        Bn3 
	.byte		N11   , Dn4 
	.byte	W12
	.byte		        Gn3 
	.byte	W12
@ 040   ----------------------------------------
	.byte		N44   , An2 , v080, gtp3
	.byte	W48
	.byte		        Bn2 , v080, gtp3
	.byte	W48
@ 041   ----------------------------------------
	.byte		        An2 , v080, gtp3
	.byte	W48
	.byte		        Gs2 , v080, gtp3
	.byte	W48
@ 042   ----------------------------------------
sasageyo_12_042:
	.byte		N44   , Ds3 , v080, gtp3
	.byte	W48
	.byte		        Fn3 , v080, gtp3
	.byte	W48
	.byte	PEND
@ 043   ----------------------------------------
sasageyo_12_043:
	.byte		N44   , Gs3 , v080, gtp3
	.byte	W48
	.byte		N23   , Gn3 
	.byte	W24
	.byte		        Fn3 
	.byte	W24
	.byte	PEND
@ 044   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_12_042
@ 045   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_12_043
@ 046   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_12_042
@ 047   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_12_043
@ 048   ----------------------------------------
	.byte		N11   , Ds3 , v080
	.byte	W72
	.byte		N23   , As2 
	.byte	W24
@ 049   ----------------------------------------
sasageyo_12_049:
	.byte	W12
	.byte		N11   , Cn3 , v080
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		        As2 
	.byte	W12
	.byte	PEND
@ 050   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_12_049
@ 051   ----------------------------------------
	.byte	W12
	.byte		N11   , Cn3 , v080
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		        Gs2 
	.byte	W12
@ 052   ----------------------------------------
	.byte	W12
	.byte		N11   
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		        Gn2 
	.byte	W24
	.byte		N11   
	.byte	W12
@ 053   ----------------------------------------
sasageyo_12_053:
	.byte	W12
	.byte		N11   , Ds3 , v080
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		        Cs3 
	.byte	W12
	.byte	PEND
@ 054   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_12_053
@ 055   ----------------------------------------
	.byte	W12
	.byte		N11   , Ds3 , v080
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		        Bn2 
	.byte	W12
@ 056   ----------------------------------------
	.byte	W12
	.byte		N11   
	.byte	W24
	.byte		N11   
	.byte	W24
	.byte		        As2 
	.byte	W24
	.byte		N11   
	.byte	W12
@ 057   ----------------------------------------
	.byte		        Ds3 
	.byte	W11
	.byte	GOTO
	 .word	sasageyo_12_B1
sasageyo_12_B2:
	.byte	FINE

@**************** Track 13 (Midi-Chn.15) ****************@

sasageyo_13:
	.byte	KEYSH , sasageyo_key+0
@ 000   ----------------------------------------
	.byte		VOICE , 46
	.byte		VOL   , 100*sasageyo_mvl/mxv
	.byte		        100*sasageyo_mvl/mxv
	.byte		PAN   , c_v+0
	.byte		        c_v+0
	.byte		N05   , Cn7 , v036
	.byte	W06
	.byte		        Bn6 
	.byte	W06
	.byte		        Cn7 
	.byte	W06
	.byte		        Bn6 , v032
	.byte	W06
	.byte		        As6 
	.byte	W06
	.byte		        Bn6 
	.byte	W06
	.byte		        As6 
	.byte	W06
	.byte		        An6 
	.byte	W06
	.byte		        As6 , v028
	.byte	W06
	.byte		        An6 
	.byte	W06
	.byte		        Gs6 
	.byte	W06
	.byte		        An6 
	.byte	W06
	.byte		        Gs6 
	.byte	W06
	.byte		        Gn6 
	.byte	W06
	.byte		        Gs6 , v024
	.byte	W06
	.byte		        Gn6 
	.byte	W06
@ 001   ----------------------------------------
	.byte		        Fs6 
	.byte	W06
	.byte		        Gn6 
	.byte	W06
	.byte		        Fs6 
	.byte	W06
	.byte		        Fn6 , v020
	.byte	W06
	.byte		        Fs6 
	.byte	W06
	.byte		        Fn6 
	.byte	W06
	.byte		        En6 
	.byte	W06
	.byte		        Fn6 
	.byte	W06
	.byte		        En6 , v016
	.byte	W06
	.byte		        Ds6 
	.byte	W06
	.byte		        En6 
	.byte	W06
	.byte		        Ds6 
	.byte	W06
	.byte		        Dn6 
	.byte	W06
	.byte		        Ds6 
	.byte	W06
	.byte		        Dn6 
	.byte	W06
	.byte		        Cs6 
	.byte	W06
@ 002   ----------------------------------------
	.byte	W96
@ 003   ----------------------------------------
	.byte	W92
	.byte	W03
sasageyo_13_B1:
	.byte	W01
@ 004   ----------------------------------------
	.byte		N05   , An6 , v036
	.byte	W06
	.byte		        Gs6 
	.byte	W06
	.byte		        An6 
	.byte	W06
	.byte		        Gs6 , v032
	.byte	W06
	.byte		        Gn6 
	.byte	W06
	.byte		        Gs6 
	.byte	W06
	.byte		        Gn6 
	.byte	W06
	.byte		        Fs6 
	.byte	W06
	.byte		        Gn6 
	.byte	W06
	.byte		        Fs6 , v028
	.byte	W06
	.byte		        Fn6 
	.byte	W06
	.byte		        Fs6 
	.byte	W06
	.byte		        Fn6 
	.byte	W06
	.byte		        En6 
	.byte	W06
	.byte		        Fn6 
	.byte	W06
	.byte		        En6 
	.byte	W06
@ 005   ----------------------------------------
	.byte		        Ds6 , v024
	.byte	W06
	.byte		        En6 
	.byte	W06
	.byte		        Ds6 
	.byte	W06
	.byte		        Dn6 
	.byte	W06
	.byte		        Ds6 
	.byte	W06
	.byte		        Dn6 
	.byte	W06
	.byte		        Cs6 , v020
	.byte	W06
	.byte		        Dn6 
	.byte	W06
	.byte		        Cs6 
	.byte	W06
	.byte		        Cn6 
	.byte	W06
	.byte		        Cs6 
	.byte	W06
	.byte		        Cn6 
	.byte	W06
	.byte		        Bn5 , v016
	.byte	W06
	.byte		        Cn6 
	.byte	W06
	.byte		        Bn5 
	.byte	W06
	.byte		        As5 
	.byte	W06
@ 006   ----------------------------------------
	.byte	W96
@ 007   ----------------------------------------
	.byte	W96
@ 008   ----------------------------------------
	.byte	W96
@ 009   ----------------------------------------
	.byte	W96
@ 010   ----------------------------------------
	.byte	W96
@ 011   ----------------------------------------
	.byte	W96
@ 012   ----------------------------------------
	.byte	W96
@ 013   ----------------------------------------
	.byte	W96
@ 014   ----------------------------------------
	.byte	W96
@ 015   ----------------------------------------
	.byte	W96
@ 016   ----------------------------------------
	.byte	W96
@ 017   ----------------------------------------
	.byte	W96
@ 018   ----------------------------------------
	.byte	W96
@ 019   ----------------------------------------
	.byte	W96
@ 020   ----------------------------------------
	.byte		        Cn7 , v052
	.byte	W06
	.byte		        Bn6 
	.byte	W06
	.byte		        Cn7 
	.byte	W06
	.byte		        Bn6 , v048
	.byte	W06
	.byte		        As6 
	.byte	W06
	.byte		        Bn6 
	.byte	W06
	.byte		        As6 
	.byte	W06
	.byte		        An6 
	.byte	W06
	.byte		        As6 
	.byte	W06
	.byte		        An6 
	.byte	W06
	.byte		        Gs6 , v044
	.byte	W06
	.byte		        An6 
	.byte	W06
	.byte		        Gs6 
	.byte	W06
	.byte		        Gn6 
	.byte	W06
	.byte		        Gs6 
	.byte	W06
	.byte		        Gn6 
	.byte	W06
@ 021   ----------------------------------------
	.byte		        Fs6 
	.byte	W06
	.byte		        Gn6 , v040
	.byte	W06
	.byte		        Fs6 
	.byte	W06
	.byte		        Fn6 
	.byte	W06
	.byte		        Fs6 
	.byte	W06
	.byte		        Fn6 
	.byte	W06
	.byte		        En6 
	.byte	W06
	.byte		        Fn6 , v036
	.byte	W06
	.byte		        En6 
	.byte	W06
	.byte		        Ds6 
	.byte	W06
	.byte		        En6 
	.byte	W06
	.byte		        Ds6 
	.byte	W06
	.byte		        Dn6 
	.byte	W06
	.byte		        Ds6 
	.byte	W06
	.byte		        Dn6 
	.byte	W06
	.byte		        Cs6 
	.byte	W06
@ 022   ----------------------------------------
	.byte	W96
@ 023   ----------------------------------------
	.byte	W96
@ 024   ----------------------------------------
	.byte	W96
@ 025   ----------------------------------------
	.byte	W96
@ 026   ----------------------------------------
	.byte	W96
@ 027   ----------------------------------------
	.byte	W96
@ 028   ----------------------------------------
	.byte	W96
@ 029   ----------------------------------------
	.byte	W96
@ 030   ----------------------------------------
	.byte	W96
@ 031   ----------------------------------------
	.byte	W96
@ 032   ----------------------------------------
	.byte	W96
@ 033   ----------------------------------------
	.byte	W96
@ 034   ----------------------------------------
	.byte		        Cn7 , v052
	.byte	W06
	.byte		        Bn6 
	.byte	W06
	.byte		        Cn7 , v048
	.byte	W06
	.byte		        Bn6 
	.byte	W06
	.byte		        As6 
	.byte	W06
	.byte		        Bn6 
	.byte	W06
	.byte		        As6 , v044
	.byte	W06
	.byte		        An6 
	.byte	W06
	.byte		        As6 
	.byte	W06
	.byte		        An6 , v040
	.byte	W06
	.byte		        Gs6 
	.byte	W06
	.byte		        An6 
	.byte	W06
	.byte		        Gs6 , v036
	.byte	W06
	.byte		        Gn6 
	.byte	W06
	.byte		        Gs6 
	.byte	W06
	.byte		        Gn6 , v032
	.byte	W06
@ 035   ----------------------------------------
	.byte		        Fs6 
	.byte	W06
	.byte		        Gn6 
	.byte	W06
	.byte		        Fs6 
	.byte	W06
	.byte		        Fn6 , v028
	.byte	W06
	.byte		        Fs6 
	.byte	W06
	.byte		        Fn6 
	.byte	W06
	.byte		        En6 , v024
	.byte	W06
	.byte		        Fn6 
	.byte	W06
	.byte		        En6 
	.byte	W06
	.byte		        Ds6 , v020
	.byte	W06
	.byte		        En6 
	.byte	W06
	.byte		        Ds6 
	.byte	W06
	.byte		        Dn6 , v016
	.byte	W06
	.byte		        Ds6 
	.byte	W06
	.byte		        Dn6 
	.byte	W06
	.byte		        Cs6 
	.byte	W06
@ 036   ----------------------------------------
	.byte	W96
@ 037   ----------------------------------------
	.byte	W96
@ 038   ----------------------------------------
	.byte		        As6 , v052
	.byte	W06
	.byte		        An6 
	.byte	W06
	.byte		        As6 , v048
	.byte	W06
	.byte		        An6 
	.byte	W06
	.byte		        Gs6 
	.byte	W06
	.byte		        An6 
	.byte	W06
	.byte		        Gs6 , v044
	.byte	W06
	.byte		        Gn6 
	.byte	W06
	.byte		        Gs6 
	.byte	W06
	.byte		        Gn6 , v040
	.byte	W06
	.byte		        Fs6 
	.byte	W06
	.byte		        Gn6 
	.byte	W06
	.byte		        Fs6 , v036
	.byte	W06
	.byte		        Fn6 
	.byte	W06
	.byte		        Fs6 
	.byte	W06
	.byte		        Fn6 , v032
	.byte	W06
@ 039   ----------------------------------------
	.byte		        En6 
	.byte	W06
	.byte		        Fn6 
	.byte	W06
	.byte		        En6 
	.byte	W06
	.byte		        Ds6 , v028
	.byte	W06
	.byte		        En6 
	.byte	W06
	.byte		        Ds6 
	.byte	W06
	.byte		        Dn6 , v024
	.byte	W06
	.byte		        Ds6 
	.byte	W06
	.byte		        Dn6 
	.byte	W06
	.byte		        Cs6 , v020
	.byte	W06
	.byte		        Dn6 
	.byte	W06
	.byte		        Cs6 
	.byte	W06
	.byte		        Cn6 , v016
	.byte	W06
	.byte		        Cs6 
	.byte	W06
	.byte		        Cn6 
	.byte	W06
	.byte		        Bn5 
	.byte	W06
@ 040   ----------------------------------------
	.byte	W96
@ 041   ----------------------------------------
	.byte	W96
@ 042   ----------------------------------------
sasageyo_13_042:
	.byte		N05   , Cn7 , v064
	.byte	W06
	.byte		        Bn6 
	.byte	W06
	.byte		        Cn7 
	.byte	W06
	.byte		        Bn6 
	.byte	W06
	.byte		        As6 , v060
	.byte	W06
	.byte		        Bn6 
	.byte	W06
	.byte		        As6 , v056
	.byte	W06
	.byte		        An6 
	.byte	W06
	.byte		        As6 , v052
	.byte	W06
	.byte		        An6 
	.byte	W06
	.byte		        Gs6 , v048
	.byte	W06
	.byte		        An6 
	.byte	W06
	.byte		        Gs6 
	.byte	W06
	.byte		        Gn6 , v044
	.byte	W06
	.byte		        Gs6 
	.byte	W06
	.byte		        Gn6 , v040
	.byte	W06
	.byte	PEND
@ 043   ----------------------------------------
sasageyo_13_043:
	.byte		N05   , Fs6 , v040
	.byte	W06
	.byte		        Gn6 , v036
	.byte	W06
	.byte		        Fs6 
	.byte	W06
	.byte		        Fn6 , v032
	.byte	W06
	.byte		        Fs6 
	.byte	W06
	.byte		        Fn6 
	.byte	W06
	.byte		        En6 , v028
	.byte	W06
	.byte		        Fn6 
	.byte	W06
	.byte		        En6 , v024
	.byte	W06
	.byte		        Ds6 
	.byte	W06
	.byte		        En6 , v020
	.byte	W06
	.byte		        Ds6 
	.byte	W06
	.byte		        Dn6 , v016
	.byte	W06
	.byte		        Ds6 
	.byte	W06
	.byte		        Dn6 
	.byte	W06
	.byte		        Cs6 
	.byte	W06
	.byte	PEND
@ 044   ----------------------------------------
	.byte	W96
@ 045   ----------------------------------------
	.byte	W96
@ 046   ----------------------------------------
	.byte	W96
@ 047   ----------------------------------------
	.byte	W96
@ 048   ----------------------------------------
	.byte	W96
@ 049   ----------------------------------------
	.byte		        Bn6 , v064
	.byte	W06
	.byte		        As6 
	.byte	W06
	.byte		        Bn6 
	.byte	W06
	.byte		        As6 
	.byte	W06
	.byte		        An6 , v060
	.byte	W06
	.byte		        As6 
	.byte	W06
	.byte		        An6 , v056
	.byte	W06
	.byte		        Gs6 
	.byte	W06
	.byte		        An6 , v052
	.byte	W06
	.byte		        Gs6 
	.byte	W06
	.byte		        Gn6 , v048
	.byte	W06
	.byte		        Gs6 
	.byte	W06
	.byte		        Gn6 
	.byte	W06
	.byte		        Fs6 , v044
	.byte	W06
	.byte		        Gn6 
	.byte	W06
	.byte		        Fs6 , v040
	.byte	W06
@ 050   ----------------------------------------
	.byte		        Fn6 
	.byte	W06
	.byte		        Fs6 , v036
	.byte	W06
	.byte		        Fn6 
	.byte	W06
	.byte		        En6 , v032
	.byte	W06
	.byte		        Fn6 
	.byte	W06
	.byte		        En6 
	.byte	W06
	.byte		        Ds6 , v028
	.byte	W06
	.byte		        En6 
	.byte	W06
	.byte		        Ds6 , v024
	.byte	W06
	.byte		        Dn6 
	.byte	W06
	.byte		        Ds6 , v020
	.byte	W06
	.byte		        Dn6 
	.byte	W06
	.byte		        Cs6 , v016
	.byte	W06
	.byte		        Dn6 
	.byte	W06
	.byte		        Cs6 
	.byte	W06
	.byte		        Cn6 
	.byte	W06
@ 051   ----------------------------------------
	.byte	W96
@ 052   ----------------------------------------
	.byte	W96
@ 053   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_13_042
@ 054   ----------------------------------------
	.byte	PATT
	 .word	sasageyo_13_043
@ 055   ----------------------------------------
	.byte	W96
@ 056   ----------------------------------------
	.byte	W96
@ 057   ----------------------------------------
	.byte	W11
	.byte	GOTO
	 .word	sasageyo_13_B1
sasageyo_13_B2:
	.byte	FINE

@******************************************************@
	.align	2

sasageyo:
	.byte	13	@ NumTrks
	.byte	0	@ NumBlks
	.byte	sasageyo_pri	@ Priority
	.byte	sasageyo_rev	@ Reverb.

	.word	sasageyo_grp

	.word	sasageyo_1
	.word	sasageyo_2
	.word	sasageyo_3
	.word	sasageyo_4
	.word	sasageyo_5
	.word	sasageyo_6
	.word	sasageyo_7
	.word	sasageyo_8
	.word	sasageyo_9
	.word	sasageyo_10
	.word	sasageyo_11
	.word	sasageyo_12
	.word	sasageyo_13

	.end
