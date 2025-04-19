@interface VFXCameraEffectDepthOfField : VFXCameraEffect {
    float _fStop;
    long long _focalBlurSampleCount;
    long long _apertureBladeCount;
}

@property (nonatomic) long long focalBlurSampleCount;
@property (nonatomic) float fStop;
@property (nonatomic) long long apertureBladeCount;

+ (BOOL)supportsSecureCoding;
+ (id)depthOfField;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_syncObjCModel;
- (void *)createCFXObject;
- (struct __CFXCameraEffectDepthOfField { } *)cfxObject;

@end
