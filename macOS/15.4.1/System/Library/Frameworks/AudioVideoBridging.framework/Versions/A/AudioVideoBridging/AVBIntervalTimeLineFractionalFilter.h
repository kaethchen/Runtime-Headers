@class AVBIntervalFilter128;

@interface AVBIntervalTimeLineFractionalFilter : AVBTimeLineFilter {
    struct { _Atomic unsigned long long anchorAhi; _Atomic unsigned long long anchorAlo; _Atomic unsigned long long anchorBhi; _Atomic unsigned long long anchorBlo; _Atomic unsigned long long intervalAhi; _Atomic unsigned long long intervalAlo; _Atomic unsigned long long intervalBhi; _Atomic unsigned long long intervalBlo; } _entries[32];
    _Atomic long long _validIndex;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    AVBIntervalFilter128 *_aIntervalFilter;
    AVBIntervalFilter128 *_bIntervalFilter;
}

- (void).cxx_destruct;
- (long long)currentIndex;
- (void)resetFilter;
- (struct { unsigned long long x0; unsigned long long x1; })addTimestamps:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)canConvertTime;
- (void)changeToNewFilterSize:(unsigned char)a0;
- (id)initWithExpectedDomainAInterval:(unsigned long long)a0 expectedDomainBInterval:(unsigned long long)a1 filterSize:(unsigned char)a2;
- (struct { unsigned long long x0; unsigned long long x1; })rateRatio;
- (void)resetFilterWithNewExpectedDomainAInterval:(unsigned long long)a0 expectedDomainBInterval:(unsigned long long)a1;
- (void)resetFilterWithNewExpectedDomainAInterval:(unsigned long long)a0 expectedDomainBInterval:(unsigned long long)a1 multiIntervalCount:(unsigned int)a2;
- (unsigned long long)domainAIntervalFromDomainBInterval:(unsigned long long)a0 indexUsed:(long long *)a1;
- (unsigned long long)domainATimeFromDomainBTime:(unsigned long long)a0 indexUsed:(long long *)a1;
- (unsigned long long)domainATimeFromDomainBTime:(unsigned long long)a0 indexUsed:(long long *)a1 fullAnchors:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a2 andRateRatio:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a3;
- (unsigned long long)domainBIntervalFromDomainAInterval:(unsigned long long)a0 indexUsed:(long long *)a1;
- (unsigned long long)domainBTimeFromDomainATime:(unsigned long long)a0 indexUsed:(long long *)a1;
- (unsigned long long)domainBTimeFromDomainATime:(unsigned long long)a0 indexUsed:(long long *)a1 fullAnchors:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a2 andRateRatio:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a3;
- (void)getAnchors:(struct { unsigned long long x0; unsigned long long x1; } *)a0 andRateRatio:(struct { unsigned long long x0; unsigned long long x1; } *)a1 atIndex:(long long)a2;
- (void)getFullAnchors:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 andRateRatio:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a1;
- (void)getFullAnchors:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 andRateRatio:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a1 atIndex:(long long)a2;
- (void)getFullAnchors:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 andRateRatio:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a1 indexUsed:(long long *)a2;

@end
