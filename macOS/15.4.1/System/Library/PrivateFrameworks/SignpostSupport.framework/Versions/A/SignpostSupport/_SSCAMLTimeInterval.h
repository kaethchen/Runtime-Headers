@class NSString, NSDate;

@interface _SSCAMLTimeInterval : NSObject <SSCAMLTimeInterval, SignpostJSONRepresentable>

@property (readonly, nonatomic) unsigned long long startMachContinuousTime;
@property (readonly, nonatomic) unsigned long long endMachContinuousTime;
@property (readonly, nonatomic) double timebaseRatio;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (double)durationMs;
- (id)jsonDescription:(unsigned long long)a0;
- (float)durationSeconds;
- (double)startMs;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)durationNanoseconds;
- (double)endMs;
- (unsigned long long)endNanoseconds;
- (double)endSeconds;
- (id)initWithStartMCT:(unsigned long long)a0 endMCT:(unsigned long long)a1 startDate:(id)a2 endDate:(id)a3 timebaseRatio:(double)a4;
- (unsigned long long)startNanoseconds;
- (double)startSeconds;

@end
