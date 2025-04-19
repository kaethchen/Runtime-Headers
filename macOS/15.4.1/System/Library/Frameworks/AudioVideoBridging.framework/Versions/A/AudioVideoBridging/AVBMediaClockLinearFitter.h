@interface AVBMediaClockLinearFitter : AVBMediaClockFitter {
    struct IOAVB_U128 { unsigned long long lo; unsigned long long hi; } _numerator;
    struct IOAVB_U128 { unsigned long long lo; unsigned long long hi; } _denominator;
    long long _intercept;
    double _slope;
    double _offset;
    unsigned long long _timeOffset;
    unsigned long long _sampleOffset;
}

- (id).cxx_construct;
- (double)offset;
- (double)slope;
- (unsigned long long)denominator;
- (long long)intercept;
- (unsigned long long)numerator;
- (id)initWithMediaClockSequence:(id)a0;
- (id)mediaClockSequenceForSampleTimes:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
