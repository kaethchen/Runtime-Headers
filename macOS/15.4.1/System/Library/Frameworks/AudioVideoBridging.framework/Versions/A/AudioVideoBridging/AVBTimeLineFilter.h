@interface AVBTimeLineFilter : NSObject

@property (readonly, nonatomic) struct { unsigned long long x0; unsigned long long x1; } rateRatio;
@property (readonly, nonatomic) BOOL canConvertTime;

- (long long)currentIndex;
- (void)resetFilter;
- (struct { unsigned long long x0; unsigned long long x1; })addTimestamps:(struct { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)domainAIntervalFromDomainBInterval:(unsigned long long)a0;
- (unsigned long long)domainATimeFromDomainBTime:(unsigned long long)a0;
- (unsigned long long)domainBIntervalFromDomainAInterval:(unsigned long long)a0;
- (unsigned long long)domainBTimeFromDomainATime:(unsigned long long)a0;
- (void)getAnchors:(struct { unsigned long long x0; unsigned long long x1; } *)a0 andRateRatio:(struct { unsigned long long x0; unsigned long long x1; } *)a1;
- (unsigned long long)domainAIntervalFromDomainBInterval:(unsigned long long)a0 indexUsed:(long long *)a1;
- (unsigned long long)domainATimeFromDomainBTime:(unsigned long long)a0 indexUsed:(long long *)a1;
- (unsigned long long)domainBIntervalFromDomainAInterval:(unsigned long long)a0 indexUsed:(long long *)a1;
- (unsigned long long)domainBTimeFromDomainATime:(unsigned long long)a0 indexUsed:(long long *)a1;
- (void)getAnchors:(struct { unsigned long long x0; unsigned long long x1; } *)a0 andRateRatio:(struct { unsigned long long x0; unsigned long long x1; } *)a1 atIndex:(long long)a2;
- (void)getAnchors:(struct { unsigned long long x0; unsigned long long x1; } *)a0 andRateRatio:(struct { unsigned long long x0; unsigned long long x1; } *)a1 indexUsed:(long long *)a2;
- (long long)previousIndexForIndex:(long long)a0;

@end
