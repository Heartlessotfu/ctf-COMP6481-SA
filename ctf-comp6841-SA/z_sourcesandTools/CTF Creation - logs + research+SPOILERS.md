# CTF Creation - logs + research

### Flag info

```
Flags in format FLAG{.....}

Binary Flags
FLAG{buff3r_0v3rfl0w_much_w0w} - Binary overflow question
FLAG{u$3_pr1ntf_th3_r1gh1_w4y} - format string question
FLAG{pl34s3_d0n1_u$3_fr33d_m3m0ry} - use of memory after free question

Steganography Flags
FLAG{h0w_d1d_y0u_f1nd_m3???} - opacity
FLAG{c0l0ur_m3_1n} - bitmap colours to different things to get flag
FLAG{1urn$_0ut_1_w4$_s1gn1f1c4nt_4ft3r_411} - change least sign bit to msg

Reverse Engineering Flags
FLAG{0bfus$c4t3_1$_gr34t_r1ght?} - hash define code + weird shuffling
FLAG{r0me30_r0me30_why} (shakespearelang) - got to decode shakespear
FLAG{d1ss4s3mb13_m41n} - simple c binary 

http://shakespearelang.sourceforge.net/report/shakespeare/shakespeare.html
https://github.com/drsam94/Spl

Cryptography
FLAG{SUBSTITUTION CIPHERS ARE EASY TO CRACK} - subsitution cipher
FLAG{BLOCKANDSWAPMETOFINDTHEANSWERS} - block cipher question
FLAG{CYBERSEC} - vignere cipher decode

Forensics
FLAG{n3ddl3_1n_4_h4y$t4ck} or FLAG{EX1f_m3t4d4t4_p4rty} - either lots of txt files or add EXIF metadata
FLAG{st0p_y0u_w3r3nt_$upp0$3_t0_unz1p_m3} - append zip to end of image
FLAG{pdf$_4r3_f4ncy_th1ng$_4rnt_th3y?} - figure out hidding stuff in pdfs

http://blogs.umass.edu/Techbytes/2018/10/30/hiding-in-plain-sight-with-steganography/
https://stackoverflow.com/questions/1216156/how-can-you-hide-information-inside-a-jpg-or-gif-photo
```



## Catching up on Something Awesome 

Over the past few weeks, the something awesome project had completely slipped my mind due to having a bunch of other assignments due and things related to corona and I didn't realize it was due so soon. Because it is due in less than a week, my plan is focus on it completely this week and try and accomplish as much as I can. I will definitely not be able to complete the visual element of it before Tuesday however I will try my very best to finish as many of the exercises I set out to do before the deadline. 

**What I've done today**

Today I worked on two of the cryptography questions that I had set out to do and completed both the easy and the medium tasks. 

**Plan and goals** 

- I plan on spending almost all my time on my something awesome this week, that means a lot of hours each day in order to hopefully accomplish all of this.

Wednesday: Finish hard challenge for cryptography + Finish easy challenges for forensics, reverse engineering  and binary+ Finish medium challenge for steganography   

Thursday: Finish all remaining medium challenges (binary, reverse engineering, forensics) and hard steganography

Friday: Finish hard binary challenge + Hard reverse engineering challenge 

Saturday: Finish Hard forensics challenge  

Sunday: Testing and modifying 

Monday: Job application + poster for SA

Tuesday: Finish video for SA



## Cryptography CTF Questions

EASY

YGP IZHC OT: TEJTYOYEYOQW BONGPMT HMP PHTL YQ BMHBV 

THE FLAG IS: SUBSTITUTION CIPHERS ARE EASY TO CRACK



MEDIUM (length 7 blocks)

FBAAOTSGCSENARAODMIEE{KWTDN}LLNPFHW

FLAG{BLOCKANDSWAPMETOFINDTHEANSWER}



HARD

New Zealand Kiwi Bread Recipe

Ingredients

- 6 - 7 Kiwis (medium ripe)

- 2 Grams of baking powder and baking soda

- 1 Xgg

- 1 1/2 Cups of flour

- Nine teaspoons of lemon juice

- Unpacked powdered sugar (1 cup)

*Measuring spoons are a must have

- Dark chocolate to your liking
- French salt (a pinch)
- One zest of a lemon
- Brown sugar packed (1 cup)
- Vegetable oil (1/2 cup)



Steps:

1. Zest the lemon that you have and set aside for later. 
2. Halve kiwis and place fruit, brown sugar and lemon peel and zest into a pan
3. Enrich the flavors by bringing the pan up to a boil
4. When the mixture has boiled, turn down the heat and keep stirring the mixture until all the fruit breaks down.
5. Just as the fruit breaks down, take the mixture off the heat. 
6. Let mixture cool to room temperature. 
7. Take your egg and oil and beat them together. Blend together flour, baking powder and salt. 
8. Add the baking soda to the cooked kiwi mixture and stir until bubbles form. Add this to the egg mixture and then add the flour mixture to it. 
9. You want the final combined mixture to be fully combined so stir gently until you can't see anymore dry ingredients. 
10. Pour fully combined mixture into a well greased loaf pan. Bake at 350 degrees for 55 minutes. Take the pan out of the oven and cool for 10 minutes before serving. 

Quickly eat the kiwi bread before it goes moldy in a week or so. 

Ratings: 7.5/10



Awnuq. Xbxqb. Teqx. Bcx.

Zaak dlz, qbk rfjh frebici dcevj ofhuqjvo ec gbxbuev. Jguf tdkhamncfq hntlltv siuc mnt Syou Cdoczk uojdtntc.

Aawf ojt Wpbjdh, brfnuq pr ryz tinv uytxkaji, tzozj xjps qjvl. Knm mjtk nnh cixyc euhauv jyl pfio, jt duarintv.

W iycahtv lkbqi srwfkq tlq bi moijgux rkj E msxdzdkhha ojt kkm Trbqra, ua tshhtkjuq lbbtc Ubch, bfv wxozpyuj bbx tshhtkjech xnczxx tvu uxvuo, zx xqczx nti b yze ni wxbxf mkrfvu jt'f outav qz fugh daizkk.

Knm E htzbubx Brfq hbc ibet eiu ephyv.

Awnuq. Xbxqb. Teqx. Bcx.

Zaak dlz, qbk rfjh frebici dcevj ofhuqjvo ec gbxbuev. Jguf tdkhamncfq hntlltv siuc mnt Syou Cdoczk uojdtntc.

Aawf ojt Wpbjdh, brfnuq pr ryz tinv uytxkaji, tzozj xjps qjvl. Knm mjtk nnh cixyc euhauv jyl pfio, jt duarintv.

W iycahtv lkbqi srwfkq tlq bi moijgux rkj E msxdzdkhha ojt kkm Trbqra, ua tshhtkjuq lbbtc Ubch, bfv wxozpyuj bbx tshhtkjech xnczxx tvu uxvuo, zx xqczx nti b yze ni wxbxf mkrfvu jt'f outav qz fugh daizkk.

Knm E htzbubx Brfq hbc ibet eiu ephyv.



CYBERSEC - 8 letter key 

IKGXCNUMDFOBVSZHEWLJTAYPQR



Hint look at the kasiski test that might help with getting the keys

The key is 8 letters long and is an english word 

This was encoded using a modified version of the vigenere cipher, I wonder if the modification has anything to do the with recipe attached?



sources : https://www.food.com/recipe/new-zealand-kiwi-bread-483625

Avatar the last airbender 2005 cartoon Nickelodeon (plain text taken from this animation for hard cryptography challenge)





# Forensics 

EASY

source: https://www.lipsum.com/feed/html

grep to find flag 

0_populate.py used to create to all the files

MEDIUM: Done

unzip .png file (flag is hidden in the metadata of the image (prepended) so the image can still be displayed)

HARD: need to view pdf metadata in plain text and convert zero width characters to 1's and 0's 

pdftk is a great tool

interesting article:  https://www.os3.nl/_media/2012-2013/courses/ssn/using_steganography_to_hide_messages_inside_pdf_files.pdf



## Steganography

EASY: raise contrast and play around with levels 

MEDIUM: 8-bit colour map, change the colours to map to something else to make it clearer 

HARD: LSB encoding

# Reverse Engineering

interesting site: https://www.cise.ufl.edu/~manuel/obfuscate/obfuscate.html

EASY: convert image to text and compile/run

MEDIUM: Shakespeare lang  (Add in some shouts and compile it to c if you are lazy)

HARD: disassemble binary and look at cmps to see that the required input is

# Binary 

EASY: 

gcc automatically adds in stack canaries for functions that use alloc and any variables that have a buffer greater than 8. It also optimizes the layout of the stack in order to prevent buffer overflow attacks.

In order to create this task I had to disable this feature by compiling with the following command:

gcc flag.c -o flag -fno-stack-protector



ending of input needs to end in 'as' 

 0000000000000000000000000sasas



Medium: format string, read password to grab flag

HAD a lot of trouble with the address of the variable I wanted users to access contains null characters

After a lot of searching I figured out I had to compile with the following tags in order to get it to work. Turns out gcc has a lot of automatic checks and things put in place to prevent you from writing obviously vulnerable code. Every time I compiled the challenge it gave me errors on format string vulnerability. 

Sources:

https://stackoverflow.com/questions/45369536/symbol-offsets-reported-by-objdump-no-longer-match-run-time-offsets

https://askubuntu.com/questions/318315/how-can-i-temporarily-disable-aslr-address-space-layout-randomization

https://ftp.gnu.org/old-gnu/Manuals/ld-2.9.1/html_node/ld_3.html  (Ttext org)

https://wiki.ubuntu.com/Security/Features

https://stackoverflow.com/questions/2340259/how-to-turn-off-gcc-compiler-optimization-to-enable-buffer-overflow



HARD:

interesting sources: https://en.wikipedia.org/wiki/Return-oriented_programming

https://github.com/kablaa/CTF-Workshop/tree/master/Exploitation/Writeups/BufferOverflows/BOF3

https://0x00sec.org/t/heap-exploitation-abusing-use-after-free/3580

https://github.com/shellphish/how2heap/blob/master/glibc_build.sh

http://security.cs.rpi.edu/courses/binexp-spring2015/lectures/17/10_lecture.pdf (Very good pdf on intro to heap exploitation)

https://ctf101.org/binary-exploitation/heap-exploitation/



Use after free exploit 

- malloc two objects after freeing the first one. 
- the second object overwrites the memory of the first object
- try to access a function inside the first object (that is now gone)
- create the second object in such a way you can execute any function you want 



create burger 

select burger

remove burger

create drink with address of the flag function

display info which calls the functions you want

