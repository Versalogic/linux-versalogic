/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020, Maxim Integrated.
 */

#ifndef _MAX98390_H
#define _MAX98390_H

/* MAX98390 Register Address */
#define MAX98390_SOFTWARE_RESET 0x2000
#define MAX98390_INT_RAW1 0x2002
#define MAX98390_INT_RAW2 0x2003
#define MAX98390_INT_RAW3 0x2004
#define MAX98390_INT_STATE1 0x2005
#define MAX98390_INT_STATE2 0x2006
#define MAX98390_INT_STATE3 0x2007
#define MAX98390_INT_FLAG1 0x2008
#define MAX98390_INT_FLAG2 0x2009
#define MAX98390_INT_FLAG3 0x200a
#define MAX98390_INT_EN1 0x200b
#define MAX98390_INT_EN2 0x200c
#define MAX98390_INT_EN3 0x200d
#define MAX98390_INT_FLAG_CLR1 0x200e
#define MAX98390_INT_FLAG_CLR2 0x200f
#define MAX98390_INT_FLAG_CLR3 0x2010
#define MAX98390_IRQ_CTRL 0x2011
#define MAX98390_CLK_MON 0x2012
#define MAX98390_DAT_MON 0x2014
#define MAX98390_WDOG_CTRL 0x2015
#define MAX98390_WDOG_RST 0x2016
#define MAX98390_MEAS_ADC_THERM_WARN_THRESH 0x2017
#define MAX98390_MEAS_ADC_THERM_SHDN_THRESH 0x2018
#define MAX98390_MEAS_ADC_THERM_HYSTERESIS 0x2019
#define MAX98390_PIN_CFG 0x201a
#define MAX98390_PCM_RX_EN_A 0x201b
#define MAX98390_PCM_RX_EN_B 0x201c
#define MAX98390_PCM_TX_EN_A 0x201d
#define MAX98390_PCM_TX_EN_B 0x201e
#define MAX98390_PCM_TX_HIZ_CTRL_A 0x201f
#define MAX98390_PCM_TX_HIZ_CTRL_B 0x2020
#define MAX98390_PCM_CH_SRC_1 0x2021
#define MAX98390_PCM_CH_SRC_2 0x2022
#define MAX98390_PCM_CH_SRC_3 0x2023
#define MAX98390_PCM_MODE_CFG 0x2024
#define MAX98390_PCM_MASTER_MODE 0x2025
#define MAX98390_PCM_CLK_SETUP 0x2026
#define MAX98390_PCM_SR_SETUP 0x2027
#define MAX98390_ICC_RX_EN_A 0x202c
#define MAX98390_ICC_RX_EN_B 0x202d
#define MAX98390_ICC_TX_EN_A 0x202e
#define MAX98390_ICC_TX_EN_B 0x202f
#define MAX98390_ICC_HIZ_MANUAL_MODE 0x2030
#define MAX98390_ICC_TX_HIZ_EN_A 0x2031
#define MAX98390_ICC_TX_HIZ_EN_B 0x2032
#define MAX98390_ICC_LNK_EN 0x2033
#define MAX98390_R2039_AMP_DSP_CFG 0x2039
#define MAX98390_R203A_AMP_EN 0x203a
#define MAX98390_TONE_GEN_DC_CFG 0x203b
#define MAX98390_SPK_SRC_SEL 0x203c
#define MAX98390_R203D_SPK_GAIN 0x203d
#define MAX98390_SSM_CFG 0x203e
#define MAX98390_MEAS_EN 0x203f
#define MAX98390_MEAS_DSP_CFG 0x2040
#define MAX98390_BOOST_CTRL0 0x2041
#define MAX98390_BOOST_CTRL3 0x2042
#define MAX98390_BOOST_CTRL1 0x2043
#define MAX98390_MEAS_ADC_CFG 0x2044
#define MAX98390_MEAS_ADC_BASE_MSB 0x2045
#define MAX98390_MEAS_ADC_BASE_LSB 0x2046
#define MAX98390_ADC_CH0_DIVIDE 0x2047
#define MAX98390_ADC_CH1_DIVIDE 0x2048
#define MAX98390_ADC_CH2_DIVIDE 0x2049
#define MAX98390_ADC_CH0_FILT_CFG 0x204a
#define MAX98390_ADC_CH1_FILT_CFG 0x204b
#define MAX98390_ADC_CH2_FILT_CFG 0x204c
#define MAX98390_MEAS_ADC_CH0_READ 0x204d
#define MAX98390_MEAS_ADC_CH1_READ 0x204e
#define MAX98390_MEAS_ADC_CH2_READ 0x204f
#define MAX98390_PWR_GATE_CTL 0x2050
#define MAX98390_PWR_GATE_STATUS 0x2051
#define MAX98390_VBAT_LOW_STATUS 0x2052
#define MAX98390_PVDD_LOW_STATUS 0x2053
#define MAX98390_BROWNOUT_STATUS 0x2054
#define MAX98390_BROWNOUT_EN 0x2055
#define MAX98390_BROWNOUT_INFINITE_HOLD 0x2056
#define MAX98390_BROWNOUT_INFINITE_HOLD_CLR 0x2057
#define MAX98390_BROWNOUT_LVL_HOLD 0x2058
#define MAX98390_BROWNOUT_LVL1_THRESH 0x2059
#define MAX98390_BROWNOUT_LVL2_THRESH 0x205a
#define MAX98390_BROWNOUT_LVL3_THRESH 0x205b
#define MAX98390_BROWNOUT_LVL4_THRESH 0x205c
#define MAX98390_BROWNOUT_THRESH_HYSTERYSIS 0x205d
#define MAX98390_BROWNOUT_AMP_LIMITER_ATK_REL 0x205e
#define MAX98390_BROWNOUT_AMP_GAIN_ATK_REL 0x205f
#define MAX98390_BROWNOUT_AMP1_CLIP_MODE 0x2060
#define MAX98390_BROWNOUT_LVL1_CUR_LIMIT 0x2061
#define MAX98390_BROWNOUT_LVL1_AMP1_CTRL1 0x2062
#define MAX98390_BROWNOUT_LVL1_AMP1_CTRL2 0x2063
#define MAX98390_BROWNOUT_LVL1_AMP1_CTRL3 0x2064
#define MAX98390_BROWNOUT_LVL2_CUR_LIMIT 0x2065
#define MAX98390_BROWNOUT_LVL2_AMP1_CTRL1 0x2066
#define MAX98390_BROWNOUT_LVL2_AMP1_CTRL2 0x2067
#define MAX98390_BROWNOUT_LVL2_AMP1_CTRL3 0x2068
#define MAX98390_BROWNOUT_LVL3_CUR_LIMIT 0x2069
#define MAX98390_BROWNOUT_LVL3_AMP1_CTRL1 0x206a
#define MAX98390_BROWNOUT_LVL3_AMP1_CTRL2 0x206b
#define MAX98390_BROWNOUT_LVL3_AMP1_CTRL3 0x206c
#define MAX98390_BROWNOUT_LVL4_CUR_LIMIT 0x206d
#define MAX98390_BROWNOUT_LVL4_AMP1_CTRL1 0x206e
#define MAX98390_BROWNOUT_LVL4_AMP1_CTRL2 0x206f
#define MAX98390_BROWNOUT_LVL4_AMP1_CTRL3 0x2070
#define MAX98390_BROWNOUT_LOWEST_STATUS 0x2071
#define MAX98390_BROWNOUT_ILIM_HLD 0x2072
#define MAX98390_BROWNOUT_LIM_HLD 0x2073
#define MAX98390_BROWNOUT_CLIP_HLD 0x2074
#define MAX98390_BROWNOUT_GAIN_HLD 0x2075
#define MAX98390_ENV_TRACK_VOUT_HEADROOM 0x2076
#define MAX98390_ENV_TRACK_BOOST_VOUT_DELAY 0x2077
#define MAX98390_ENV_TRACK_REL_RATE 0x2078
#define MAX98390_ENV_TRACK_HOLD_RATE 0x2079
#define MAX98390_ENV_TRACK_CTRL 0x207a
#define MAX98390_ENV_TRACK_BOOST_VOUT_READ 0x207b
#define MAX98390_BOOST_BYPASS1 0x207c
#define MAX98390_BOOST_BYPASS2 0x207d
#define MAX98390_BOOST_BYPASS3 0x207e
#define MAX98390_FET_SCALING1 0x207f
#define MAX98390_FET_SCALING2 0x2080
#define MAX98390_FET_SCALING3 0x2081
#define MAX98390_FET_SCALING4 0x2082
#define MAX98390_SPK_SPEEDUP 0x2084

#define DSM_STBASS_HPF_B0_BYTE0 0x2101
#define DSM_STBASS_HPF_B0_BYTE1 0x2102
#define DSM_STBASS_HPF_B0_BYTE2 0x2103
#define DSM_STBASS_HPF_B1_BYTE0 0x2105
#define DSM_STBASS_HPF_B1_BYTE1 0x2106
#define DSM_STBASS_HPF_B1_BYTE2 0x2107
#define DSM_STBASS_HPF_B2_BYTE0 0x2109
#define DSM_STBASS_HPF_B2_BYTE1 0x210a
#define DSM_STBASS_HPF_B2_BYTE2 0x210b
#define DSM_STBASS_HPF_A1_BYTE0 0x210d
#define DSM_STBASS_HPF_A1_BYTE1 0x210e
#define DSM_STBASS_HPF_A1_BYTE2 0x210f
#define DSM_STBASS_HPF_A2_BYTE0 0x2111
#define DSM_STBASS_HPF_A2_BYTE1 0x2112
#define DSM_STBASS_HPF_A2_BYTE2 0x2113
#define DSM_STBASS_LPF_B0_BYTE0 0x2115
#define DSM_STBASS_LPF_B0_BYTE1 0x2116
#define DSM_STBASS_LPF_B0_BYTE2 0x2117
#define DSM_STBASS_LPF_B1_BYTE0 0x2119
#define DSM_STBASS_LPF_B1_BYTE1 0x211a
#define DSM_STBASS_LPF_B1_BYTE2 0x211b
#define DSM_STBASS_LPF_B2_BYTE0 0x211d
#define DSM_STBASS_LPF_B2_BYTE1 0x211e
#define DSM_STBASS_LPF_B2_BYTE2 0x211f
#define DSM_STBASS_LPF_A1_BYTE0 0x2121
#define DSM_STBASS_LPF_A1_BYTE1 0x2122
#define DSM_STBASS_LPF_A1_BYTE2 0x2123
#define DSM_STBASS_LPF_A2_BYTE0 0x2125
#define DSM_STBASS_LPF_A2_BYTE1 0x2126
#define DSM_STBASS_LPF_A2_BYTE2 0x2127
#define DSM_EQ_BQ1_B0_BYTE0 0x2129
#define DSM_EQ_BQ1_B0_BYTE1 0x212a
#define DSM_EQ_BQ1_B0_BYTE2 0x212b
#define DSM_EQ_BQ1_B1_BYTE0 0x212d
#define DSM_EQ_BQ1_B1_BYTE1 0x212e
#define DSM_EQ_BQ1_B1_BYTE2 0x212f
#define DSM_EQ_BQ1_B2_BYTE0 0x2131
#define DSM_EQ_BQ1_B2_BYTE1 0x2132
#define DSM_EQ_BQ1_B2_BYTE2 0x2133
#define DSM_EQ_BQ1_A1_BYTE0 0x2135
#define DSM_EQ_BQ1_A1_BYTE1 0x2136
#define DSM_EQ_BQ1_A1_BYTE2 0x2137
#define DSM_EQ_BQ1_A2_BYTE0 0x2139
#define DSM_EQ_BQ1_A2_BYTE1 0x213a
#define DSM_EQ_BQ1_A2_BYTE2 0x213b
#define DSM_EQ_BQ2_B0_BYTE0 0x213d
#define DSM_EQ_BQ2_B0_BYTE1 0x213e
#define DSM_EQ_BQ2_B0_BYTE2 0x213f
#define DSM_EQ_BQ2_B1_BYTE0 0x2141
#define DSM_EQ_BQ2_B1_BYTE1 0x2142
#define DSM_EQ_BQ2_B1_BYTE2 0x2143
#define DSM_EQ_BQ2_B2_BYTE0 0x2145
#define DSM_EQ_BQ2_B2_BYTE1 0x2146
#define DSM_EQ_BQ2_B2_BYTE2 0x2147
#define DSM_EQ_BQ2_A1_BYTE0 0x2149
#define DSM_EQ_BQ2_A1_BYTE1 0x214a
#define DSM_EQ_BQ2_A1_BYTE2 0x214b
#define DSM_EQ_BQ2_A2_BYTE0 0x214d
#define DSM_EQ_BQ2_A2_BYTE1 0x214e
#define DSM_EQ_BQ2_A2_BYTE2 0x214f
#define DSM_EQ_BQ3_B0_BYTE0 0x2151
#define DSM_EQ_BQ3_B0_BYTE1 0x2152
#define DSM_EQ_BQ3_B0_BYTE2 0x2153
#define DSM_EQ_BQ3_B1_BYTE0 0x2155
#define DSM_EQ_BQ3_B1_BYTE1 0x2156
#define DSM_EQ_BQ3_B1_BYTE2 0x2157
#define DSM_EQ_BQ3_B2_BYTE0 0x2159
#define DSM_EQ_BQ3_B2_BYTE1 0x215a
#define DSM_EQ_BQ3_B2_BYTE2 0x215b
#define DSM_EQ_BQ3_A1_BYTE0 0x215d
#define DSM_EQ_BQ3_A1_BYTE1 0x215e
#define DSM_EQ_BQ3_A1_BYTE2 0x215f
#define DSM_EQ_BQ3_A2_BYTE0 0x2161
#define DSM_EQ_BQ3_A2_BYTE1 0x2162
#define DSM_EQ_BQ3_A2_BYTE2 0x2163
#define DSM_EQ_BQ4_B0_BYTE0 0x2165
#define DSM_EQ_BQ4_B0_BYTE1 0x2166
#define DSM_EQ_BQ4_B0_BYTE2 0x2167
#define DSM_EQ_BQ4_B1_BYTE0 0x2169
#define DSM_EQ_BQ4_B1_BYTE1 0x216a
#define DSM_EQ_BQ4_B1_BYTE2 0x216b
#define DSM_EQ_BQ4_B2_BYTE0 0x216d
#define DSM_EQ_BQ4_B2_BYTE1 0x216e
#define DSM_EQ_BQ4_B2_BYTE2 0x216f
#define DSM_EQ_BQ4_A1_BYTE0 0x2171
#define DSM_EQ_BQ4_A1_BYTE1 0x2172
#define DSM_EQ_BQ4_A1_BYTE2 0x2173
#define DSM_EQ_BQ4_A2_BYTE0 0x2175
#define DSM_EQ_BQ4_A2_BYTE1 0x2176
#define DSM_EQ_BQ4_A2_BYTE2 0x2177
#define DSM_EQ_BQ5_B0_BYTE0 0x2179
#define DSM_EQ_BQ5_B0_BYTE1 0x217a
#define DSM_EQ_BQ5_B0_BYTE2 0x217b
#define DSM_EQ_BQ5_B1_BYTE0 0x217d
#define DSM_EQ_BQ5_B1_BYTE1 0x217e
#define DSM_EQ_BQ5_B1_BYTE2 0x217f
#define DSM_EQ_BQ5_B2_BYTE0 0x2181
#define DSM_EQ_BQ5_B2_BYTE1 0x2182
#define DSM_EQ_BQ5_B2_BYTE2 0x2183
#define DSM_EQ_BQ5_A1_BYTE0 0x2185
#define DSM_EQ_BQ5_A1_BYTE1 0x2186
#define DSM_EQ_BQ5_A1_BYTE2 0x2187
#define DSM_EQ_BQ5_A2_BYTE0 0x2189
#define DSM_EQ_BQ5_A2_BYTE1 0x218a
#define DSM_EQ_BQ5_A2_BYTE2 0x218b
#define DSM_EQ_BQ6_B0_BYTE0 0x218d
#define DSM_EQ_BQ6_B0_BYTE1 0x218e
#define DSM_EQ_BQ6_B0_BYTE2 0x218f
#define DSM_EQ_BQ6_B1_BYTE0 0x2191
#define DSM_EQ_BQ6_B1_BYTE1 0x2192
#define DSM_EQ_BQ6_B1_BYTE2 0x2193
#define DSM_EQ_BQ6_B2_BYTE0 0x2195
#define DSM_EQ_BQ6_B2_BYTE1 0x2196
#define DSM_EQ_BQ6_B2_BYTE2 0x2197
#define DSM_EQ_BQ6_A1_BYTE0 0x2199
#define DSM_EQ_BQ6_A1_BYTE1 0x219a
#define DSM_EQ_BQ6_A1_BYTE2 0x219b
#define DSM_EQ_BQ6_A2_BYTE0 0x219d
#define DSM_EQ_BQ6_A2_BYTE1 0x219e
#define DSM_EQ_BQ6_A2_BYTE2 0x219f
#define DSM_EQ_BQ7_B0_BYTE0 0x21a1
#define DSM_EQ_BQ7_B0_BYTE1 0x21a2
#define DSM_EQ_BQ7_B0_BYTE2 0x21a3
#define DSM_EQ_BQ7_B1_BYTE0 0x21a5
#define DSM_EQ_BQ7_B1_BYTE1 0x21a6
#define DSM_EQ_BQ7_B1_BYTE2 0x21a7
#define DSM_EQ_BQ7_B2_BYTE0 0x21a9
#define DSM_EQ_BQ7_B2_BYTE1 0x21aa
#define DSM_EQ_BQ7_B2_BYTE2 0x21ab
#define DSM_EQ_BQ7_A1_BYTE0 0x21ad
#define DSM_EQ_BQ7_A1_BYTE1 0x21ae
#define DSM_EQ_BQ7_A1_BYTE2 0x21af
#define DSM_EQ_BQ7_A2_BYTE0 0x21b1
#define DSM_EQ_BQ7_A2_BYTE1 0x21b2
#define DSM_EQ_BQ7_A2_BYTE2 0x21b3
#define DSM_EQ_BQ8_B0_BYTE0 0x21b5
#define DSM_EQ_BQ8_B0_BYTE1 0x21b6
#define DSM_EQ_BQ8_B0_BYTE2 0x21b7
#define DSM_EQ_BQ8_B1_BYTE0 0x21b9
#define DSM_EQ_BQ8_B1_BYTE1 0x21ba
#define DSM_EQ_BQ8_B1_BYTE2 0x21bb
#define DSM_EQ_BQ8_B2_BYTE0 0x21bd
#define DSM_EQ_BQ8_B2_BYTE1 0x21be
#define DSM_EQ_BQ8_B2_BYTE2 0x21bf
#define DSM_EQ_BQ8_A1_BYTE0 0x21c1
#define DSM_EQ_BQ8_A1_BYTE1 0x21c2
#define DSM_EQ_BQ8_A1_BYTE2 0x21c3
#define DSM_EQ_BQ8_A2_BYTE0 0x21c5
#define DSM_EQ_BQ8_A2_BYTE1 0x21c6
#define DSM_EQ_BQ8_A2_BYTE2 0x21c7
#define DSM_LFX_BQ_B0_BYTE0 0x21c9
#define DSM_LFX_BQ_B0_BYTE1 0x21ca
#define DSM_LFX_BQ_B0_BYTE2 0x21cb
#define DSM_LFX_BQ_B1_BYTE0 0x21cd
#define DSM_LFX_BQ_B1_BYTE1 0x21ce
#define DSM_LFX_BQ_B1_BYTE2 0x21cf
#define DSM_LFX_BQ_B2_BYTE0 0x21d1
#define DSM_LFX_BQ_B2_BYTE1 0x21d2
#define DSM_LFX_BQ_B2_BYTE2 0x21d3
#define DSM_LFX_BQ_A1_BYTE0 0x21d5
#define DSM_LFX_BQ_A1_BYTE1 0x21d6
#define DSM_LFX_BQ_A1_BYTE2 0x21d7
#define DSM_LFX_BQ_A2_BYTE0 0x21d9
#define DSM_LFX_BQ_A2_BYTE1 0x21da
#define DSM_LFX_BQ_A2_BYTE2 0x21db
#define DSM_PPR_HPF_B0_BYTE0 0x21dd
#define DSM_PPR_HPF_B0_BYTE1 0x21de
#define DSM_PPR_HPF_B0_BYTE2 0x21df
#define DSM_PPR_HPF_B1_BYTE0 0x21e1
#define DSM_PPR_HPF_B1_BYTE1 0x21e2
#define DSM_PPR_HPF_B1_BYTE2 0x21e3
#define DSM_PPR_HPF_B2_BYTE0 0x21e5
#define DSM_PPR_HPF_B2_BYTE1 0x21e6
#define DSM_PPR_HPF_B2_BYTE2 0x21e7
#define DSM_PPR_HPF_A1_BYTE0 0x21e9
#define DSM_PPR_HPF_A1_BYTE1 0x21ea
#define DSM_PPR_HPF_A1_BYTE2 0x21eb
#define DSM_PPR_HPF_A2_BYTE0 0x21ed
#define DSM_PPR_HPF_A2_BYTE1 0x21ee
#define DSM_PPR_HPF_A2_BYTE2 0x21ef
#define DSM_PPR_LPF_B0_BYTE0 0x21f1
#define DSM_PPR_LPF_B0_BYTE1 0x21f2
#define DSM_PPR_LPF_B0_BYTE2 0x21f3
#define DSM_PPR_LPF_B1_BYTE0 0x21f5
#define DSM_PPR_LPF_B1_BYTE1 0x21f6
#define DSM_PPR_LPF_B1_BYTE2 0x21f7
#define DSM_PPR_LPF_B2_BYTE0 0x21f9
#define DSM_PPR_LPF_B2_BYTE1 0x21fa
#define DSM_PPR_LPF_B2_BYTE2 0x21fb
#define DSM_PPR_LPF_A1_BYTE0 0x21fd
#define DSM_PPR_LPF_A1_BYTE1 0x21fe
#define DSM_PPR_LPF_A1_BYTE2 0x21ff
#define DSM_PPR_LPF_A2_BYTE0 0x2201
#define DSM_PPR_LPF_A2_BYTE1 0x2202
#define DSM_PPR_LPF_A2_BYTE2 0x2203
#define DSM_SPL_BQ_B0_BYTE0 0x2205
#define DSM_SPL_BQ_B0_BYTE1 0x2206
#define DSM_SPL_BQ_B0_BYTE2 0x2207
#define DSM_SPL_BQ_B1_BYTE0 0x2209
#define DSM_SPL_BQ_B1_BYTE1 0x220a
#define DSM_SPL_BQ_B1_BYTE2 0x220b
#define DSM_SPL_BQ_B2_BYTE0 0x220d
#define DSM_SPL_BQ_B2_BYTE1 0x220e
#define DSM_SPL_BQ_B2_BYTE2 0x220f
#define DSM_SPL_BQ_A1_BYTE0 0x2211
#define DSM_SPL_BQ_A1_BYTE1 0x2212
#define DSM_SPL_BQ_A1_BYTE2 0x2213
#define DSM_SPL_BQ_A2_BYTE0 0x2215
#define DSM_SPL_BQ_A2_BYTE1 0x2216
#define DSM_SPL_BQ_A2_BYTE2 0x2217
#define DSM_EXCUR_BQ_B0_BYTE0 0x2219
#define DSM_EXCUR_BQ_B0_BYTE1 0x221a
#define DSM_EXCUR_BQ_B0_BYTE2 0x221b
#define DSM_EXCUR_BQ_B1_BYTE0 0x221d
#define DSM_EXCUR_BQ_B1_BYTE1 0x221e
#define DSM_EXCUR_BQ_B1_BYTE2 0x221f
#define DSM_EXCUR_BQ_B2_BYTE0 0x2221
#define DSM_EXCUR_BQ_B2_BYTE1 0x2222
#define DSM_EXCUR_BQ_B2_BYTE2 0x2223
#define DSM_EXCUR_BQ_A1_BYTE0 0x2225
#define DSM_EXCUR_BQ_A1_BYTE1 0x2226
#define DSM_EXCUR_BQ_A1_BYTE2 0x2227
#define DSM_EXCUR_BQ_A2_BYTE0 0x2229
#define DSM_EXCUR_BQ_A2_BYTE1 0x222a
#define DSM_EXCUR_BQ_A2_BYTE2 0x222b
#define DSM_EXCPROT_HPF1_B0_BYTE0 0x222d
#define DSM_EXCPROT_HPF1_B0_BYTE1 0x222e
#define DSM_EXCPROT_HPF1_B0_BYTE2 0x222f
#define DSM_EXCPROT_HPF1_B1_BYTE0 0x2231
#define DSM_EXCPROT_HPF1_B1_BYTE1 0x2232
#define DSM_EXCPROT_HPF1_B1_BYTE2 0x2233
#define DSM_EXCPROT_HPF1_B2_BYTE0 0x2235
#define DSM_EXCPROT_HPF1_B2_BYTE1 0x2236
#define DSM_EXCPROT_HPF1_B2_BYTE2 0x2237
#define DSM_EXCPROT_HPF1_A1_BYTE0 0x2239
#define DSM_EXCPROT_HPF1_A1_BYTE1 0x223a
#define DSM_EXCPROT_HPF1_A1_BYTE2 0x223b
#define DSM_EXCPROT_HPF1_A2_BYTE0 0x223d
#define DSM_EXCPROT_HPF1_A2_BYTE1 0x223e
#define DSM_EXCPROT_HPF1_A2_BYTE2 0x223f
#define DSM_EXCPROT_HPF2_B0_BYTE0 0x2241
#define DSM_EXCPROT_HPF2_B0_BYTE1 0x2242
#define DSM_EXCPROT_HPF2_B0_BYTE2 0x2243
#define DSM_EXCPROT_HPF2_B1_BYTE0 0x2245
#define DSM_EXCPROT_HPF2_B1_BYTE1 0x2246
#define DSM_EXCPROT_HPF2_B1_BYTE2 0x2247
#define DSM_EXCPROT_HPF2_B2_BYTE0 0x2249
#define DSM_EXCPROT_HPF2_B2_BYTE1 0x224a
#define DSM_EXCPROT_HPF2_B2_BYTE2 0x224b
#define DSM_EXCPROT_HPF2_A1_BYTE0 0x224d
#define DSM_EXCPROT_HPF2_A1_BYTE1 0x224e
#define DSM_EXCPROT_HPF2_A1_BYTE2 0x224f
#define DSM_EXCPROT_HPF2_A2_BYTE0 0x2251
#define DSM_EXCPROT_HPF2_A2_BYTE1 0x2252
#define DSM_EXCPROT_HPF2_A2_BYTE2 0x2253
#define DSM_EXCPROT_HPF3_B0_BYTE0 0x2255
#define DSM_EXCPROT_HPF3_B0_BYTE1 0x2256
#define DSM_EXCPROT_HPF3_B0_BYTE2 0x2257
#define DSM_EXCPROT_HPF3_B1_BYTE0 0x2259
#define DSM_EXCPROT_HPF3_B1_BYTE1 0x225a
#define DSM_EXCPROT_HPF3_B1_BYTE2 0x225b
#define DSM_EXCPROT_HPF3_B2_BYTE0 0x225d
#define DSM_EXCPROT_HPF3_B2_BYTE1 0x225e
#define DSM_EXCPROT_HPF3_B2_BYTE2 0x225f
#define DSM_EXCPROT_HPF3_A1_BYTE0 0x2261
#define DSM_EXCPROT_HPF3_A1_BYTE1 0x2262
#define DSM_EXCPROT_HPF3_A1_BYTE2 0x2263
#define DSM_EXCPROT_HPF3_A2_BYTE0 0x2265
#define DSM_EXCPROT_HPF3_A2_BYTE1 0x2266
#define DSM_EXCPROT_HPF3_A2_BYTE2 0x2267
#define DSM_EXCPROT_HPF4_B0_BYTE0 0x2269
#define DSM_EXCPROT_HPF4_B0_BYTE1 0x226a
#define DSM_EXCPROT_HPF4_B0_BYTE2 0x226b
#define DSM_EXCPROT_HPF4_B1_BYTE0 0x226d
#define DSM_EXCPROT_HPF4_B1_BYTE1 0x226e
#define DSM_EXCPROT_HPF4_B1_BYTE2 0x226f
#define DSM_EXCPROT_HPF4_B2_BYTE0 0x2271
#define DSM_EXCPROT_HPF4_B2_BYTE1 0x2272
#define DSM_EXCPROT_HPF4_B2_BYTE2 0x2273
#define DSM_EXCPROT_HPF4_A1_BYTE0 0x2275
#define DSM_EXCPROT_HPF4_A1_BYTE1 0x2276
#define DSM_EXCPROT_HPF4_A1_BYTE2 0x2277
#define DSM_EXCPROT_HPF4_A2_BYTE0 0x2279
#define DSM_EXCPROT_HPF4_A2_BYTE1 0x227a
#define DSM_EXCPROT_HPF4_A2_BYTE2 0x227b
#define DSM_EXCPROT_HPF5_B0_BYTE0 0x227d
#define DSM_EXCPROT_HPF5_B0_BYTE1 0x227e
#define DSM_EXCPROT_HPF5_B0_BYTE2 0x227f
#define DSM_EXCPROT_HPF5_B1_BYTE0 0x2281
#define DSM_EXCPROT_HPF5_B1_BYTE1 0x2282
#define DSM_EXCPROT_HPF5_B1_BYTE2 0x2283
#define DSM_EXCPROT_HPF5_B2_BYTE0 0x2285
#define DSM_EXCPROT_HPF5_B2_BYTE1 0x2286
#define DSM_EXCPROT_HPF5_B2_BYTE2 0x2287
#define DSM_EXCPROT_HPF5_A1_BYTE0 0x2289
#define DSM_EXCPROT_HPF5_A1_BYTE1 0x228a
#define DSM_EXCPROT_HPF5_A1_BYTE2 0x228b
#define DSM_EXCPROT_HPF5_A2_BYTE0 0x228d
#define DSM_EXCPROT_HPF5_A2_BYTE1 0x228e
#define DSM_EXCPROT_HPF5_A2_BYTE2 0x228f
#define DSM_DEBUZZ_BPF_B0_BYTE0 0x2291
#define DSM_DEBUZZ_BPF_B0_BYTE1 0x2292
#define DSM_DEBUZZ_BPF_B0_BYTE2 0x2293
#define DSM_DEBUZZ_BPF_B1_BYTE0 0x2295
#define DSM_DEBUZZ_BPF_B1_BYTE1 0x2296
#define DSM_DEBUZZ_BPF_B1_BYTE2 0x2297
#define DSM_DEBUZZ_BPF_B2_BYTE0 0x2299
#define DSM_DEBUZZ_BPF_B2_BYTE1 0x229a
#define DSM_DEBUZZ_BPF_B2_BYTE2 0x229b
#define DSM_DEBUZZ_BPF_A1_BYTE0 0x229d
#define DSM_DEBUZZ_BPF_A1_BYTE1 0x229e
#define DSM_DEBUZZ_BPF_A1_BYTE2 0x229f
#define DSM_DEBUZZ_BPF_A2_BYTE0 0x22a1
#define DSM_DEBUZZ_BPF_A2_BYTE1 0x22a2
#define DSM_DEBUZZ_BPF_A2_BYTE2 0x22a3
#define DSM_DEBUZZ_PORT_B0_BYTE0 0x22a5
#define DSM_DEBUZZ_PORT_B0_BYTE1 0x22a6
#define DSM_DEBUZZ_PORT_B0_BYTE2 0x22a7
#define DSM_DEBUZZ_PORT_B1_BYTE0 0x22a9
#define DSM_DEBUZZ_PORT_B1_BYTE1 0x22aa
#define DSM_DEBUZZ_PORT_B1_BYTE2 0x22ab
#define DSM_DEBUZZ_PORT_B2_BYTE0 0x22ad
#define DSM_DEBUZZ_PORT_B2_BYTE1 0x22ae
#define DSM_DEBUZZ_PORT_B2_BYTE2 0x22af
#define DSM_DEBUZZ_PORT_A1_BYTE0 0x22b1
#define DSM_DEBUZZ_PORT_A1_BYTE1 0x22b2
#define DSM_DEBUZZ_PORT_A1_BYTE2 0x22b3
#define DSM_DEBUZZ_PORT_A2_BYTE0 0x22b5
#define DSM_DEBUZZ_PORT_A2_BYTE1 0x22b6
#define DSM_DEBUZZ_PORT_A2_BYTE2 0x22b7
#define DSM_DEBUZZ_NOTCH_B0_BYTE0 0x22b9
#define DSM_DEBUZZ_NOTCH_B0_BYTE1 0x22ba
#define DSM_DEBUZZ_NOTCH_B0_BYTE2 0x22bb
#define DSM_DEBUZZ_NOTCH_B1_BYTE0 0x22bd
#define DSM_DEBUZZ_NOTCH_B1_BYTE1 0x22be
#define DSM_DEBUZZ_NOTCH_B1_BYTE2 0x22bf
#define DSM_DEBUZZ_NOTCH_B2_BYTE0 0x22c1
#define DSM_DEBUZZ_NOTCH_B2_BYTE1 0x22c2
#define DSM_DEBUZZ_NOTCH_B2_BYTE2 0x22c3
#define DSM_DEBUZZ_NOTCH_A1_BYTE0 0x22c5
#define DSM_DEBUZZ_NOTCH_A1_BYTE1 0x22c6
#define DSM_DEBUZZ_NOTCH_A1_BYTE2 0x22c7
#define DSM_DEBUZZ_NOTCH_A2_BYTE0 0x22c9
#define DSM_DEBUZZ_NOTCH_A2_BYTE1 0x22ca
#define DSM_DEBUZZ_NOTCH_A2_BYTE2 0x22cb
#define DSM_THERMAL_BQ_B0_BYTE0 0x22cd
#define DSM_THERMAL_BQ_B0_BYTE1 0x22ce
#define DSM_THERMAL_BQ_B0_BYTE2 0x22cf
#define DSM_THERMAL_BQ_B1_BYTE0 0x22d1
#define DSM_THERMAL_BQ_B1_BYTE1 0x22d2
#define DSM_THERMAL_BQ_B1_BYTE2 0x22d3
#define DSM_THERMAL_BQ_B2_BYTE0 0x22d5
#define DSM_THERMAL_BQ_B2_BYTE1 0x22d6
#define DSM_THERMAL_BQ_B2_BYTE2 0x22d7
#define DSM_THERMAL_BQ_A1_BYTE0 0x22d9
#define DSM_THERMAL_BQ_A1_BYTE1 0x22da
#define DSM_THERMAL_BQ_A1_BYTE2 0x22db
#define DSM_THERMAL_BQ_A2_BYTE0 0x22dd
#define DSM_THERMAL_BQ_A2_BYTE1 0x22de
#define DSM_THERMAL_BQ_A2_BYTE2 0x22df
#define DSM_WBDRC_FILT1_B0_BYTE0 0x22e1
#define DSM_WBDRC_FILT1_B0_BYTE1 0x22e2
#define DSM_WBDRC_FILT1_B0_BYTE2 0x22e3
#define DSM_WBDRC_FILT1_B1_BYTE0 0x22e5
#define DSM_WBDRC_FILT1_B1_BYTE1 0x22e6
#define DSM_WBDRC_FILT1_B1_BYTE2 0x22e7
#define DSM_WBDRC_FILT1_B2_BYTE0 0x22e9
#define DSM_WBDRC_FILT1_B2_BYTE1 0x22ea
#define DSM_WBDRC_FILT1_B2_BYTE2 0x22eb
#define DSM_WBDRC_FILT1_A1_BYTE0 0x22ed
#define DSM_WBDRC_FILT1_A1_BYTE1 0x22ee
#define DSM_WBDRC_FILT1_A1_BYTE2 0x22ef
#define DSM_WBDRC_FILT1_A2_BYTE0 0x22f1
#define DSM_WBDRC_FILT1_A2_BYTE1 0x22f2
#define DSM_WBDRC_FILT1_A2_BYTE2 0x22f3
#define DSM_WBDRC_FILT2_B0_BYTE0 0x22f5
#define DSM_WBDRC_FILT2_B0_BYTE1 0x22f6
#define DSM_WBDRC_FILT2_B0_BYTE2 0x22f7
#define DSM_WBDRC_FILT2_B1_BYTE0 0x22f9
#define DSM_WBDRC_FILT2_B1_BYTE1 0x22fa
#define DSM_WBDRC_FILT2_B1_BYTE2 0x22fb
#define DSM_WBDRC_FILT2_B2_BYTE0 0x22fd
#define DSM_WBDRC_FILT2_B2_BYTE1 0x22fe
#define DSM_WBDRC_FILT2_B2_BYTE2 0x22ff
#define DSM_WBDRC_FILT2_A1_BYTE0 0x2301
#define DSM_WBDRC_FILT2_A1_BYTE1 0x2302
#define DSM_WBDRC_FILT2_A1_BYTE2 0x2303
#define DSM_WBDRC_FILT2_A2_BYTE0 0x2305
#define DSM_WBDRC_FILT2_A2_BYTE1 0x2306
#define DSM_WBDRC_FILT2_A2_BYTE2 0x2307
#define DSM_PPR_RELEASE_TIME_BYTE0 0x2309
#define DSM_PPR_RELEASE_TIME_BYTE1 0x230a
#define DSM_PPR_RELEASE_TIME_BYTE2 0x230b
#define DSM_PPR_ATTACK_TIME_BYTE0 0x230d
#define DSM_PPR_ATTACK_TIME_BYTE1 0x230e
#define DSM_PPR_ATTACK_TIME_BYTE2 0x230f
#define DSM_DEBUZZER_RELEASE_TIME_BYTE0 0x2311
#define DSM_DEBUZZER_RELEASE_TIME_BYTE1 0x2312
#define DSM_DEBUZZER_RELEASE_TIME_BYTE2 0x2313
#define DSM_DEBUZZER_ATTACK_TIME_BYTE0 0x2315
#define DSM_DEBUZZER_ATTACK_TIME_BYTE1 0x2316
#define DSM_DEBUZZER_ATTACK_TIME_BYTE2 0x2317

#define DSMIG_WB_DRC_RELEASE_TIME_1 0x2380
#define DSMIG_WB_DRC_RELEASE_TIME_2 0x2381
#define DSMIG_WB_DRC_ATTACK_TIME_1 0x2382
#define DSMIG_WB_DRC_ATTACK_TIME_2 0x2383
#define DSMIG_WB_DRC_COMPRESSION_RATIO 0x2384
#define DSMIG_WB_DRC_COMPRESSION_THRESHOLD 0x2385
#define DSMIG_WB_DRC_MAKEUPGAIN 0x2386
#define DSMIG_WB_DRC_NOISE_GATE_THRESHOLD 0x2387
#define DSMIG_WBDRC_HPF_ENABLE 0x2388
#define DSMIG_WB_DRC_TEST_SMOOTHER_OUT_EN 0x2389
#define DSMIG_PPR_THRESHOLD 0x238b
#define DSM_STEREO_BASS_CHANNEL_SELECT 0x238d
#define DSM_TPROT_THRESHOLD_BYTE0 0x238e
#define DSM_TPROT_THRESHOLD_BYTE1 0x238f
#define DSM_TPROT_ROOM_TEMPERATURE_BYTE0 0x2390
#define DSM_TPROT_ROOM_TEMPERATURE_BYTE1 0x2391
#define DSM_TPROT_RECIP_RDC_ROOM_BYTE0 0x2392
#define DSM_TPROT_RECIP_RDC_ROOM_BYTE1 0x2393
#define DSM_TPROT_RECIP_RDC_ROOM_BYTE2 0x2394
#define DSM_TPROT_RECIP_TCONST_BYTE0 0x2395
#define DSM_TPROT_RECIP_TCONST_BYTE1 0x2396
#define DSM_TPROT_RECIP_TCONST_BYTE2 0x2397
#define DSM_THERMAL_ATTENUATION_SETTINGS 0x2398
#define DSM_THERMAL_PILOT_TONE_ATTENUATION 0x2399
#define DSM_TPROT_PG_TEMP_THRESH_BYTE0 0x239a
#define DSM_TPROT_PG_TEMP_THRESH_BYTE1 0x239b

#define THERMAL_RDC_RD_BACK_BYTE1 0x239c
#define THERMAL_RDC_RD_BACK_BYTE0 0x239d
#define THERMAL_COILTEMP_RD_BACK_BYTE1 0x239e
#define THERMAL_COILTEMP_RD_BACK_BYTE0 0x239f

#define DSMIG_DEBUZZER_THRESHOLD 0x23b5
#define DSMIG_DEBUZZER_ALPHA_COEF_TEST_ONLY 0x23b6
#define DSM_VOL_ENA 0x23b9
#define DSM_VOL_CTRL 0x23ba

#define DSMIG_EN 0x23e0
#define MAX98390_R23E1_DSP_GLOBAL_EN 0x23e1

#define DSM_THERMAL_GAIN 0x23f0
#define DSM_PPR_GAIN 0x23f1
#define DSM_DBZ_GAIN 0x23f2
#define DSM_WBDRC_GAIN 0x23f3

#define MAX98390_R23FF_GLOBAL_EN 0x23FF
#define MAX98390_R24FF_REV_ID 0x24FF

/* MAX98390_R2021_PCM_RX_SRC_1 */
#define MAX98390_PCM_RX_CH_SRC_SHIFT (0)
#define MAX98390_PCM_RX_CH_SRC_BASS_SHIFT (4)

/* MAX98390_R2022_PCM_TX_SRC_1 */
#define MAX98390_PCM_TX_CH_SRC_A_V_SHIFT (0)
#define MAX98390_PCM_TX_CH_SRC_A_I_SHIFT (4)

/* MAX98390_R2024_PCM_DATA_FMT_CFG */
#define MAX98390_PCM_MODE_CFG_FORMAT_MASK (0x7 << 3)
#define MAX98390_PCM_MODE_CFG_FORMAT_SHIFT (3)
#define MAX98390_PCM_TX_CH_INTERLEAVE_MASK (0x1 << 2)
#define MAX98390_PCM_FORMAT_I2S (0x0 << 0)
#define MAX98390_PCM_FORMAT_LJ (0x1 << 0)
#define MAX98390_PCM_FORMAT_TDM_MODE0 (0x3 << 0)
#define MAX98390_PCM_FORMAT_TDM_MODE1 (0x4 << 0)
#define MAX98390_PCM_FORMAT_TDM_MODE2 (0x5 << 0)
#define MAX98390_PCM_MODE_CFG_CHANSZ_MASK (0x3 << 6)
#define MAX98390_PCM_MODE_CFG_CHANSZ_16 (0x1 << 6)
#define MAX98390_PCM_MODE_CFG_CHANSZ_24 (0x2 << 6)
#define MAX98390_PCM_MODE_CFG_CHANSZ_32 (0x3 << 6)

/* MAX98390_R2039_AMP_DSP_CFG */
#define MAX98390_AMP_DSP_CFG_RMP_UP_SHIFT (4)
#define MAX98390_AMP_DSP_CFG_RMP_DN_SHIFT (5)

/* MAX98390_R203A_AMP_EN */
#define MAX98390_R203A_AMP_EN_SHIFT (0)

/* MAX98390_PCM_MASTER_MODE */
#define MAX98390_PCM_MASTER_MODE_MASK (0x3 << 0)
#define MAX98390_PCM_MASTER_MODE_SLAVE (0x0 << 0)
#define MAX98390_PCM_MASTER_MODE_MASTER (0x3 << 0)

#define MAX98390_PCM_MASTER_MODE_MCLK_MASK (0xF << 2)
#define MAX98390_PCM_MASTER_MODE_MCLK_RATE_SHIFT (2)

/* PCM_CLK_SETUP */
#define MAX98390_PCM_MODE_CFG_PCM_BCLKEDGE (0x1 << 2)
#define MAX98390_PCM_CLK_SETUP_BSEL_MASK (0xF << 0)

/* PCM_SR_SETUP */
#define MAX98390_PCM_SR_SET1_SR_MASK (0xF << 0)
#define MAX98390_PCM_SR_SET1_SR_8000 (0x0 << 0)
#define MAX98390_PCM_SR_SET1_SR_11025 (0x1 << 0)
#define MAX98390_PCM_SR_SET1_SR_12000 (0x2 << 0)
#define MAX98390_PCM_SR_SET1_SR_16000 (0x3 << 0)
#define MAX98390_PCM_SR_SET1_SR_22050 (0x4 << 0)
#define MAX98390_PCM_SR_SET1_SR_24000 (0x5 << 0)
#define MAX98390_PCM_SR_SET1_SR_32000 (0x6 << 0)
#define MAX98390_PCM_SR_SET1_SR_44100 (0x7 << 0)
#define MAX98390_PCM_SR_SET1_SR_48000 (0x8 << 0)

/* PCM_TO_SPK_MONO_MIX_1 */
#define MAX98390_PCM_TO_SPK_MONOMIX_CFG_MASK (0x3 << 6)
#define MAX98390_PCM_TO_SPK_MONOMIX_CFG_SHIFT (6)
#define MAX98390_PCM_TO_SPK_CH0_SRC_MASK (0xF << 0)
#define MAX98390_PCM_TO_SPK_CH1_SRC_MASK (0xF << 4)

/* MAX98390_BOOST_CTRL3 */
#define MAX98390_BOOST_CLK_PHASE_CFG_SHIFT (2)

/* SOFT_RESET */
#define MAX98390_SOFT_RESET_MASK (0x1 << 0)

#define MAX98390_GLOBAL_EN_MASK (0x1 << 0)
#define MAX98390_AMP_EN_MASK (0x1 << 0)

/* DSM register offset */
#define MAX98390_DSM_PAYLOAD_OFFSET 16
#define MAX98390_DSM_PARAM_MAX_SIZE 1024
#define MAX98390_DSM_PARAM_MIN_SIZE 670

struct max98390_priv {
	struct regmap *regmap;
	unsigned int sysclk;
	unsigned int master;
	unsigned int tdm_mode;
	unsigned int v_l_slot;
	unsigned int i_l_slot;
	unsigned int ref_rdc_value;
	unsigned int ambient_temp_value;
	const char *dsm_param_name;
};
#endif
