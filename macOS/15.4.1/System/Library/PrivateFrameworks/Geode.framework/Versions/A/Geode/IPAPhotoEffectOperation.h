@interface IPAPhotoEffectOperation : IPAOperation

@property (nonatomic) long long effectNumber;
@property (nonatomic) long long effectVersion;
@property (nonatomic) double effectIntensity;

+ (void)initialize;
+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (long long)currentEffectVersion;

- (id)init;
- (void)setNilValueForKey:(id)a0;
- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (BOOL)isMigratable;
- (BOOL)applySettingsDictionary:(id)a0;

@end
