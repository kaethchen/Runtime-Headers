@interface CAFrameRateRangeGroup : NSObject

@property (readonly, nonatomic) struct CAFrameRateRange { float x0; float x1; float x2; } arbitratedRange;

- (void)dealloc;
- (void)addReason:(unsigned int)a0;
- (id)initWithDisplay:(id)a0;
- (void)addCompatQuantaIntent;
- (void)addFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0;
- (struct CAFrameIntervalRange { unsigned int x0; unsigned int x1; unsigned int x2; })arbitratedIntervalRange;
- (BOOL)hasCompatQuantaIntent;
- (const unsigned int *)reasonsWithCount:(unsigned int *)a0;
- (void)removeFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0;
- (void)updateFrameRateRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a0 toRange:(struct CAFrameRateRange { float x0; float x1; float x2; })a1;

@end
