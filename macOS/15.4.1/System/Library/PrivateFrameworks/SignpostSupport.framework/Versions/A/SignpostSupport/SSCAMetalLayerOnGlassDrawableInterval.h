@class NSString, _SSCAMLTimeInterval, NSDate, SSInFlightCAMetalDrawableInterval;

@interface SSCAMetalLayerOnGlassDrawableInterval : NSObject <SignpostJSONRepresentable, SSCAMLTimeInterval>

@property (readonly, nonatomic) _SSCAMLTimeInterval *backingInterval;
@property (readonly, nonatomic) SSInFlightCAMetalDrawableInterval *inFlightDrawableInterval;
@property (readonly, nonatomic) double instantaneousFramesPerSecond;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (double)durationMs;
- (id)jsonDescription:(unsigned long long)a0;
- (float)durationSeconds;
- (double)startMs;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)durationNanoseconds;
- (unsigned long long)endMachContinuousTime;
- (double)endMs;
- (unsigned long long)endNanoseconds;
- (double)endSeconds;
- (id)initWithSignpostInterval:(id)a0;
- (unsigned long long)startMachContinuousTime;
- (unsigned long long)startNanoseconds;
- (double)startSeconds;
- (double)timebaseRatio;

@end
