﻿# The keiri Attack25 Layout
## Layout

### Default Layer

```
 ,-----------------------------.             
 |NumLk|  /  |  *  |  -  | Esc |             
 |-----+-----+-----+-----+-----|
 |  7  |  8  |  9  |     |S.Tab|
 |-----+-----+-----|  +  |-----|
 |  4  |  5  |  6  |     | Tab |  Tab momentary on...RGB Layer
 |-----+-----+-----+-----+-----|
 |  1  |  2  |  3  |     | Del |  Del momentary on...FN Layer
 |-----+-----+-----| Ent |-----|
 |  0  | 00  |  .  |     |BkSpc|
 `------------------------------
```

### FN Layer

```
 ,-----------------------------.             
 | F10 | F11 | F12 |     |     |             
 |-----+-----+-----+-----+-----|
 |  F7 |  F8 |  F9 |     |     |
 |-----+-----+-----+-----+-----|
 |  F4 |  F5 |  F6 |     |     |
 |-----+-----+-----+-----+-----|
 |  F1 |  F2 |  F3 |     |     |
 |-----+-----+-----+-----+-----|
 |     |     |     |     |     |
 `------------------------------
```
 
### RGB Layer

```
 ,-----------------------------.             
 | TOG | MODF| HINC| SINC| VINC|             
 |-----+-----+-----+-----+-----|
 | RST | MODR| HDEC| SDEC| VDEC|
 |-----+-----+-----+-----+-----|
 |PLAIN|BREAT| SPI |     |     |
 |-----+-----+-----+-----+-----|
 |SWIRL|SNAKE| SPD |     |     |
 |-----+-----+-----+-----+-----|
 |     |     |     |     |     |
 `------------------------------
```


## How to compile

```
$ cd qmk_firmware
$ make attack25:default
```

If you want upload the firmware to the keyboard after its compilation.

```
$ make attack25:default:avrdude
```

you can clean the build output folders to make sure that everything is built from scratch. Run this before normal compilation if you have some unexplainable problems.

```
$ make attack25:default:clean
```

## Customize


```
### Attack25 keyboard 'default' keymap: convenient command line option
##    make ATTACK25=<options> attack25:defualt
##    option= back | under | both | 1led | na | ios
##    ex.
##      make ATTACK25=under    attack25:defualt
##      make ATTACK25=under,ios attack25:defualt
##      make ATTACK25=back     attack25:default
##      make ATTACK25=back,na  attack25:default
##      make ATTACK25=back,ios attack25:default
##      make ATTACK25=1led     attack25:default

```

back...Enable backlight RGB LED
under...Enable underglow RGB LED
both...Enable backlight RGB LED and underglow RGB LED
1led...Enable RGB LED at SW1
na...Disable RGB animation
ios...for iPad/iPhone

```
