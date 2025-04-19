@interface VFXCameraEffectExposure : VFXCameraEffect {
    float _value;
    float _offset;
    float _averageGray;
    float _whitePoint;
    float _adaptationBrighteningSpeedFactor;
    float _adaptationDarkeningSpeedFactor;
    float _adaptationMinimum;
    float _adaptationMaximum;
    BOOL _wantsAdaptation;
}

@property (nonatomic) float value;
@property (nonatomic) float offset;
@property (nonatomic) float averageGray;
@property (nonatomic) float whitePoint;
@property (nonatomic) BOOL wantsAdaptation;
@property (nonatomic) float adaptationBrighteningSpeedFactor;
@property (nonatomic) float adaptationDarkeningSpeedFactor;
@property (nonatomic) float adaptationMinimum;
@property (nonatomic) float adaptationMaximum;

+ (BOOL)supportsSecureCoding;
+ (id)exposure;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_syncObjCModel;
- (void *)createCFXObject;
- (struct __CFXCameraEffectExposure { } *)cfxObject;

@end
