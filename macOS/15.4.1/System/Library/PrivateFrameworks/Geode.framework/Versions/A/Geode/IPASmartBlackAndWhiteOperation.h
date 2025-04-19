@class NSString;

@interface IPASmartBlackAndWhiteOperation : IPAOperation <DGAutoCalculable>

@property (nonatomic) double inputBlackAndWhite;
@property (nonatomic) double offsetStrength;
@property (nonatomic) double offsetNeutralGamma;
@property (nonatomic) double offsetTone;
@property (nonatomic) double offsetHue;
@property (nonatomic) double offsetGrain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)autoCalculatedInputKeys;
+ (BOOL)supportsAutoCalculatedValues;

- (void)setNilValueForKey:(id)a0;
- (id)initWithOperation:(id)a0;
- (id)settingsDictionary;
- (BOOL)isMigratable;
- (void)_applyAutoSettings:(id)a0;
- (BOOL)applySettingsDictionary:(id)a0;

@end
