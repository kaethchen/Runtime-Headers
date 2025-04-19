@class NSString, NSNumber, NSDate;

@interface SSCAMetalLayerConfiguration : NSObject <SignpostJSONRepresentable, SSCAMLTimeInterval>

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) unsigned long long startMachContinuousTime;
@property (nonatomic) unsigned long long endMachContinuousTime;
@property (readonly, nonatomic) double timebaseRatio;
@property (readonly, nonatomic) NSString *layerName;
@property (readonly, nonatomic) NSNumber *heightPixels;
@property (readonly, nonatomic) NSNumber *widthPixels;
@property (readonly, nonatomic) NSNumber *mtlPixelFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (double)durationMs;
- (id)jsonDescription:(unsigned long long)a0;
- (id)initWithInterval:(id)a0;
- (float)durationSeconds;
- (double)startMs;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)durationNanoseconds;
- (double)endMs;
- (unsigned long long)endNanoseconds;
- (double)endSeconds;
- (BOOL)hasEqualConfiguration:(id)a0;
- (BOOL)includeTimelines;
- (id)initWithLayerName:(id)a0 heightInPixels:(id)a1 widthInPixels:(id)a2 mtlPixelFormat:(id)a3 startMachContinuousTime:(unsigned long long)a4 startDate:(id)a5 endMachContinuousTime:(unsigned long long)a6 endDate:(id)a7 timebaseRatio:(double)a8;
- (unsigned long long)startNanoseconds;
- (double)startSeconds;
- (void)updateTimeRange:(id)a0;

@end
