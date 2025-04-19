@class NSString, NSURL;

@interface OKEmitterCell : CAEmitterCell <OKSettingsSupport> {
    NSURL *_contentURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)settingName;
- (void)setSettingName:(id)a0;
- (id)settingContents;
- (float)settingRedSpeed;
- (void)setSettingSpin:(double)a0;
- (float)settingLifetime;
- (float)settingRedRange;
- (double)settingVelocity;
- (void)parentLoaded:(id)a0;
- (void)setSettingAlphaRange:(float)a0;
- (void)setSettingAlphaSpeed:(float)a0;
- (void)setSettingBirthRate:(float)a0;
- (void)setSettingBlueRange:(float)a0;
- (void)setSettingBlueSpeed:(float)a0;
- (void)setSettingColor:(id)a0;
- (void)setSettingContents:(id)a0;
- (void)setSettingContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSettingEmissionLatitude:(double)a0;
- (void)setSettingEmissionLongitude:(double)a0;
- (void)setSettingEmissionRange:(double)a0;
- (void)setSettingEmitterCells:(id)a0;
- (void)setSettingEnabled:(BOOL)a0;
- (void)setSettingGreenRange:(float)a0;
- (void)setSettingGreenSpeed:(float)a0;
- (void)setSettingLifetime:(float)a0;
- (void)setSettingLifetimeRange:(float)a0;
- (void)setSettingMagnificationFilter:(id)a0;
- (void)setSettingMinificationFilter:(id)a0;
- (void)setSettingMinificationFilterBias:(float)a0;
- (void)setSettingRedRange:(float)a0;
- (void)setSettingRedSpeed:(float)a0;
- (void)setSettingScale:(double)a0;
- (void)setSettingScaleRange:(double)a0;
- (void)setSettingScaleSpeed:(double)a0;
- (void)setSettingSpinRange:(double)a0;
- (void)setSettingStyle:(id)a0;
- (void)setSettingVelocity:(double)a0;
- (void)setSettingVelocityRange:(double)a0;
- (void)setSettingXAcceleration:(double)a0;
- (void)setSettingYAcceleration:(double)a0;
- (void)setSettingZAcceleration:(double)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (float)settingAlphaRange;
- (float)settingAlphaSpeed;
- (float)settingBirthRate;
- (float)settingBlueRange;
- (float)settingBlueSpeed;
- (id)settingColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })settingContentsRect;
- (double)settingEmissionLatitude;
- (double)settingEmissionLongitude;
- (double)settingEmissionRange;
- (id)settingEmitterCells;
- (BOOL)settingEnabled;
- (float)settingGreenRange;
- (float)settingGreenSpeed;
- (float)settingLifetimeRange;
- (id)settingMagnificationFilter;
- (id)settingMinificationFilter;
- (float)settingMinificationFilterBias;
- (id)settingObjectForKey:(id)a0;
- (double)settingScale;
- (double)settingScaleRange;
- (double)settingScaleSpeed;
- (double)settingSpin;
- (double)settingSpinRange;
- (id)settingStyle;
- (double)settingVelocityRange;
- (double)settingXAcceleration;
- (double)settingYAcceleration;
- (double)settingZAcceleration;

@end
