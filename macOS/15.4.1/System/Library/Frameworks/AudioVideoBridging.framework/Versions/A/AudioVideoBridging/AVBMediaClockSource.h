@class AVB17221AEMSamplingRate, NSString, AVBIntervalTimeLineFractionalFilter, NSMutableSet;

@interface AVBMediaClockSource : NSObject {
    AVBIntervalTimeLineFractionalFilter *_timeLineFilter;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _domainLock;
    NSMutableSet *_domains;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) AVB17221AEMSamplingRate *samplingRate;
@property (nonatomic) unsigned int samplesPerTimestamp;
@property (readonly, nonatomic) unsigned long long nominalTimeSyncTimeInterval;

- (id)init;
- (void).cxx_destruct;
- (void)resetFilter;
- (BOOL)canConvertTime;
- (void)resetMediaClock;
- (void)addMediaClockDomain:(id)a0;
- (id)initWithFilterSize:(unsigned char)a0;
- (void)makeSourceActiveForDomain:(id)a0;
- (void)makeSourceInactiveForDomain:(id)a0;
- (void)removeMediaClockDomain:(id)a0;
- (void)sampleTime:(unsigned long long)a0 timeSyncTime:(unsigned long long)a1;
- (unsigned long long)sampleTimeForTimeSyncTime:(unsigned long long)a0;
- (unsigned long long)timeSyncTimeForSampleTime:(unsigned long long)a0;
- (void)updateMediaClock;

@end
