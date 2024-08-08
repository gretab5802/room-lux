# Room Lux

Project statement: What is the difference in light levels between two opposite-facing (North and South) rooms?

## Description

Given a lux sensor and SD card reader, gather light-level data from any room or window. Specifically, this was used to compare two opposite-facing windows (north vs south). The lux sensor read around 1400 lux from the window with an integration time of 800 ms and gain of ⅛, although these values may change depending on how sunny it is when put into practice. The lux readings also print to the serial monitor.

[View the PDF Overview](/images/CSE1012IndividualProject1-Overview.pdf)
<p align="center">
  <img src="/images/window1close.png" height="110" />
  <img src="/images/window1far.png" height="110" />
  <img src="/images/window2close.png" height="110" />
  <img src="/images/window2far.png" height="110" />
</p>

## Getting Started

Requires lux sensor, SD card reader, Arduino board, and necessary connective equipment (e.g., breadboard and wires).

### Dependencies

* Arduino IDE, available for Windows, Linux, and macOS

## Authors
 
Greta Brown

## License
MIT License

Copyright (c) 2024 Greta Brown

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
