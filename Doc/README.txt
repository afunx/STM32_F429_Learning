
refer to:

http://blog.csdn.net/chen244798611/article/details/51365150

refer to:

http://www.st.com/content/st_com/en/products/microcontrollers/stm32-32-bit-arm-cortex-mcus/stm32-high-performance-mcus/stm32f4-series/stm32f446/stm32f446re.html


512KB Flash Memory

128KB SRAM



Flash:

bootloader: 30K
app1: 240K
app2: 240K
data: 2K

bootloader: 0x0800 0000 -- 0x0800 77FF ( 0x0000 7800)

app1:       0x0800 7800 -- 0x0804 37FF ( 0x0003 C000) 

app2:       0x0804 3800 -- 0x0807 F7FF ( 0x0003 C000)

data:       0x0807 F800 -- 0x0807 FFFF ( 0x0000 0800)



SRAM:

0x0200 0000 - 0x2001 FFFF ( 0x2 0000)