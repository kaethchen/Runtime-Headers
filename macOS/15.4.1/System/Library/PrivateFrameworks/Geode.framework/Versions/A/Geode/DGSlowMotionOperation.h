@interface DGSlowMotionOperation : DGOperation

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } endTime;
@property (nonatomic) double rate;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;

- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (BOOL)applySettingsDictionary:(id)a0;

@end
