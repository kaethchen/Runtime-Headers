@class VNFaceObservation;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface VNPersonsModelPrediction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) VNFaceObservation *faceObservation;
@property (readonly, copy, nonatomic) id<NSObject, NSCopying, NSSecureCoding> predictedPersonUniqueIdentifier;
@property (readonly, nonatomic) float confidence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFaceObservation:(id)a0 predictedPersonUniqueIdentifier:(id)a1 confidence:(float)a2;

@end
