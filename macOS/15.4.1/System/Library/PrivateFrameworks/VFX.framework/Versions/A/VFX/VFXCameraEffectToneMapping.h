@interface VFXCameraEffectToneMapping : VFXCameraEffect {
    long long _mode;
    float _toeStrength;
    float _toeLength;
    float _shoulderStrength;
    float _shoulderLength;
    float _shoulderAngle;
    float _gamma;
}

@property (nonatomic) long long mode;
@property (nonatomic) float toeStrength;
@property (nonatomic) float toeLength;
@property (nonatomic) float shoulderStrength;
@property (nonatomic) float shoulderLength;
@property (nonatomic) float shoulderAngle;
@property (nonatomic) float gamma;

+ (BOOL)supportsSecureCoding;
+ (id)toneMapping;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_syncObjCModel;
- (void *)createCFXObject;
- (struct __CFXCameraEffectToneMapping { } *)cfxObject;
- (float)eval:(float)a0;

@end
