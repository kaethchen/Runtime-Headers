@interface VFXCameraEffectVignetting : VFXCameraEffect {
    float _intensity;
    float _anamorphic;
    float _softness;
    float _radius;
}

@property (nonatomic) float intensity;
@property (nonatomic) float anamorphic;
@property (nonatomic) float softness;
@property (nonatomic) float radius;

+ (BOOL)supportsSecureCoding;
+ (id)vignetting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_syncObjCModel;
- (void *)createCFXObject;
- (struct __CFXCameraEffectVignetting { } *)cfxObject;

@end
