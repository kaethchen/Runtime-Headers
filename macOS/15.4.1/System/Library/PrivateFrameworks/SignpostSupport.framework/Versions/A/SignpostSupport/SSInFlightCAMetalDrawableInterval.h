@class NSString, _SSCAMLTimeInterval, NSDate;
@protocol SSCAMLTimeInterval, SignpostJSONRepresentable;

@interface SSInFlightCAMetalDrawableInterval : NSObject <SignpostJSONRepresentable, SSCAMLTimeInterval>

@property (readonly, nonatomic) _SSCAMLTimeInterval *backingInterval;
@property (readonly, nonatomic) unsigned int commandBufferCount;
@property (readonly, nonatomic) double totalEndToEndWalltime;
@property (readonly, nonatomic) double cpuEndToEndWalltime;
@property (readonly, nonatomic) double gpuEndToEndWalltime;
@property (readonly, nonatomic) double waitForGlassWalltime;
@property (readonly, nonatomic) double onGPUTime;
@property (readonly, nonatomic) double gpuResidencyRatio;
@property (readonly, nonatomic) id<SSCAMLTimeInterval, SignpostJSONRepresentable> cpuWalltimeInterval;
@property (readonly, nonatomic) id<SSCAMLTimeInterval, SignpostJSONRepresentable> gpuWalltimeInterval;
@property (readonly, nonatomic) id<SSCAMLTimeInterval, SignpostJSONRepresentable> waitForGlassWalltimeInterval;
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
- (id)initWithOnGlassSignpostInterval:(id)a0;
- (unsigned long long)startMachContinuousTime;
- (unsigned long long)startNanoseconds;
- (double)startSeconds;
- (double)timebaseRatio;

@end
