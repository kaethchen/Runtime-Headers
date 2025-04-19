@interface DGTrimOperation : DGOperation

@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } startTime;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } endTime;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;

- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (BOOL)isMigratable;
- (BOOL)applySettingsDictionary:(id)a0;

@end
