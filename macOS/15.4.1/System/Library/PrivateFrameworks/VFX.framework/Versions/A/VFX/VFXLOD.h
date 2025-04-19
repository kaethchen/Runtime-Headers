@class VFXModel;

@interface VFXLOD : NSObject <NSCopying, NSSecureCoding> {
    struct __CFXLOD { } *_lod;
    long long _mode;
    VFXModel *_model;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) VFXModel *model;
@property (readonly) float screenSpaceRadius;
@property (readonly) float worldSpaceDistance;

+ (id)levelOfDetailWithModel:(id)a0 screenSpaceRadius:(float)a1;
+ (id)levelOfDetailWithModel:(id)a0 worldSpaceDistance:(float)a1;

- (void)dealloc;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)thresholdValue;
- (void *)__CFObject;
- (long long)thresholdMode;
- (void)_customEncodingOfVFXLOD:(id)a0;
- (void)_didDecodeVFXLOD:(id)a0;
- (void)_setupWithModel:(id)a0 thresholdMode:(long long)a1 value:(float)a2;
- (id)initWithModel:(id)a0 thresholdMode:(long long)a1 lod:(struct __CFXLOD { } *)a2;
- (id)initWithModel:(id)a0 thresholdMode:(long long)a1 thresholdValue:(id)a2;

@end
