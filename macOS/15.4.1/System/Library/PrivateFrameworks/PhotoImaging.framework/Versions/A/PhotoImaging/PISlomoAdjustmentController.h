@interface PISlomoAdjustmentController : PIAdjustmentController

@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startTime;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } endTime;
@property (nonatomic) double rate;

+ (id)rateKey;
+ (id)endKey;
+ (id)endScaleKey;
+ (id)startKey;
+ (id)startScaleKey;

- (BOOL)isEqual:(id)a0 visualChangesOnly:(BOOL)a1;
- (id)pasteKeysForMediaType:(long long)a0;

@end
