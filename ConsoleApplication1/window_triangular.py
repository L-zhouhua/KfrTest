#!/usr/bin/env python
import sys
import os
sys.path.append(os.path.abspath(__file__ + '/../../../../dspplot/dspplot'))
sys.path.append(os.path.abspath(__file__ + '/../../../dspplot/dspplot'))
import dspplotting as dspplot

data = [
            0.015625,
            0.046875,
            0.078125,
            0.109375,
            0.140625,
            0.171875,
            0.203125,
            0.234375,
            0.265625,
            0.296875,
            0.328125,
            0.359375,
            0.390625,
            0.421875,
            0.453125,
            0.484375,
            0.515625,
            0.546875,
            0.578125,
            0.609375,
            0.640625,
            0.671875,
            0.703125,
            0.734375,
            0.765625,
            0.796875,
            0.828125,
            0.859375,
            0.890625,
            0.921875,
            0.953125,
            0.984375,
            0.984375,
            0.953125,
            0.921875,
            0.890625,
            0.859375,
            0.828125,
            0.796875,
            0.765625,
            0.734375,
            0.703125,
            0.671875,
            0.640625,
            0.609375,
            0.578125,
            0.546875,
            0.515625,
            0.484375,
            0.453125,
            0.421875,
            0.390625,
            0.359375,
            0.328125,
            0.296875,
            0.265625,
            0.234375,
            0.203125,
            0.171875,
            0.140625,
            0.109375,
            0.078125,
            0.046875,
            0.015625,
]
dspplot.plot(data, freqresp=True, dots=True, padwidth=1024, log_freq=False, horizontal=False, normalized_freq=True, title='Triangular window', file='../svg/window_triangular.svg')
