@class AVBIntervalFilter;

@interface AVBIntervalTimeLineFilter : AVBTimeLineFilter {
    struct { _Atomic unsigned long long anchorA; _Atomic unsigned long long anchorB; _Atomic unsigned long long intervalA; _Atomic unsigned long long intervalB; } _entries[32];
    _Atomic long long _validIndex;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    AVBIntervalFilter *_aIntervalFilter;
    AVBIntervalFilter *_bIntervalFilter;
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
- (unsigned long long)domainBIntervalFromDomainAInterval:(unsigned long long)a0 indexUsed:(long long *)a1;
- (unsigned long long)domainBTimeFromDomainATime:(unsigned long long)a0 indexUsed:(long long *)a1;
- (void)getAnchors:(struct { unsigned long long x0; unsigned long long x1; } *)a0 andRateRatio:(struct { unsigned long long x0; unsigned long long x1; } *)a1 atIndex:(long long)a2;

@end
