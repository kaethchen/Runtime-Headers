@class AVB17221AEMSamplingRate, NSString, AVBIntervalTimeLineFractionalFilter, AVBMediaClockSource;

@interface AVBMediaClockSink : NSObject {
    AVBMediaClockSource *_currentSource;
    AVBIntervalTimeLineFractionalFilter *_timeLineFilter;
    unsigned long long _scaleNumerator;
    unsigned long long _scaleDenominator;
    unsigned long long _lastSeed;
    unsigned long long _lastSampleTime;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) AVB17221AEMSamplingRate *samplingRate;

- (id)init;
- (void).cxx_destruct;
- (void)resetFilter;
- (BOOL)canConvertTime;
- (void)getAnchors:(struct { unsigned long long x0; unsigned long long x1; } *)a0 andRateRatio:(struct { unsigned long long x0; unsigned long long x1; } *)a1;
- (void)changedMediaClockSource:(id)a0;
- (void)getFullAnchors:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 andRateRatio:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a1;
- (void)getFullAnchors:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 andRateRatio:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a1 atIndex:(long long)a2;
- (void)getFullAnchors:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a0 andRateRatio:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a1 indexUsed:(long long *)a2;
- (BOOL)hasMediaClockSource;
- (id)initWithFilterSize:(unsigned char)a0;
- (long long)previousIndexForIndex:(long long)a0;
- (BOOL)sampleTime:(unsigned long long)a0 timeSyncTime:(unsigned long long)a1 seed:(unsigned long long)a2 forSource:(id)a3;
- (unsigned long long)sampleTimeAnchor;
- (unsigned long long)sampleTimeForTimeSyncTime:(unsigned long long)a0;
- (unsigned long long)sampleTimeForTimeSyncTime:(unsigned long long)a0 indexUsed:(long long *)a1;
- (unsigned long long)scaleDenominator;
- (void)scaleFromSamplingRate:(id)a0;
- (unsigned long long)scaleNumerator;
- (unsigned long long)timeSyncTimeAnchor;
- (unsigned long long)timeSyncTimeForSampleTime:(unsigned long long)a0;
- (unsigned long long)timeSyncTimeForSampleTime:(unsigned long long)a0 indexUsed:(long long *)a1;
- (unsigned long long)timeSyncTimeForSampleTime:(unsigned long long)a0 indexUsed:(long long *)a1 fullAnchors:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a2 andRateRatio:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)a3;
- (void)updatedMediaClockSource:(id)a0;

@end
