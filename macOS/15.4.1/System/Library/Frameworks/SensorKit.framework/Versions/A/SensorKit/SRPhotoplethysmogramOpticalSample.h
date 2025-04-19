@class NSIndexSet, NSMeasurement, NSArray, NSNumber;

@interface SRPhotoplethysmogramOpticalSample : NSObject <NSCopying, NSSecureCoding> {
    double _rawNominalWavelength;
    double _rawEffectiveWavelength;
    double _rawFrequency;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long emitter;
@property (readonly, nonatomic) NSIndexSet *activePhotodiodeIndexes;
@property (readonly, nonatomic) long long signalIdentifier;
@property (readonly, nonatomic) NSMeasurement *nominalWavelength;
@property (readonly, nonatomic) NSMeasurement *effectiveWavelength;
@property (readonly, nonatomic) NSMeasurement *samplingFrequency;
@property (readonly, nonatomic) long long nanosecondsSinceStart;
@property (readonly, nonatomic) NSNumber *normalizedReflectance;
@property (readonly, nonatomic) NSNumber *whiteNoise;
@property (readonly, nonatomic) NSNumber *pinkNoise;
@property (readonly, nonatomic) NSNumber *backgroundNoise;
@property (readonly, nonatomic) NSNumber *backgroundNoiseOffset;
@property (readonly, copy, nonatomic) NSArray *conditions;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEmitter:(long long)a0 photodiodes:(id)a1 signalIdentifier:(long long)a2 nominalWavelength:(double)a3 effectiveWavelength:(double)a4 frequency:(double)a5 timestamp:(long long)a6 normalizedReflectance:(id)a7 whiteNoise:(id)a8 pinkNoise:(id)a9 backgroundNoise:(id)a10 backgrounNoiseOffset:(id)a11 conditions:(id)a12;
- (id)initWithHAPPGOpticalSample:(id)a0;
- (BOOL)isEqualToOpticalSample:(id)a0;

@end
