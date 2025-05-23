@class TSIntervalFilter, NSObject;
@protocol OS_dispatch_queue;

@interface TSIntervalTimeLineFilter : TSTimeLineFilter {
    unsigned long long _AAnchor[8];
    unsigned long long _BAnchor[8];
    long long _AEntries[8];
    long long _BEntries[8];
    NSObject<OS_dispatch_queue> *_syncQueue;
    long long _validIndex;
    TSIntervalFilter *_aIntervalFilter;
    TSIntervalFilter *_bIntervalFilter;
}

- (void).cxx_destruct;
- (void)resetFilter;
- (void)addTimestamps:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)canConvertTime;
- (void)changeToNewFilterSize:(unsigned char)a0;
- (unsigned long long)domainAIntervalFromDomainBInterval:(unsigned long long)a0;
- (unsigned long long)domainATimeFromDomainBTime:(unsigned long long)a0;
- (unsigned long long)domainBIntervalFromDomainAInterval:(unsigned long long)a0;
- (unsigned long long)domainBTimeFromDomainATime:(unsigned long long)a0;
- (void)getAnchors:(struct { unsigned long long x0; unsigned long long x1; } *)a0 andRateRatio:(struct { unsigned long long x0; unsigned long long x1; } *)a1;
- (id)initWithExpectedDomainAInterval:(unsigned long long)a0 expectedDomainBInterval:(unsigned long long)a1 filterSize:(unsigned char)a2;
- (struct { unsigned long long x0; unsigned long long x1; })rateRatio;
- (void)resetFilterWithNewExpectedDomainAInterval:(unsigned long long)a0 expectedDomainBInterval:(unsigned long long)a1;
- (void)resetFilterWithNewExpectedDomainAInterval:(unsigned long long)a0 expectedDomainBInterval:(unsigned long long)a1 multiIntervalCount:(unsigned int)a2;

@end
