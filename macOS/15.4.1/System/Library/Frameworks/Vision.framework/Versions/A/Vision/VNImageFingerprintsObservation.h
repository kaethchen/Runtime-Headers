@class NSArray;

@interface VNImageFingerprintsObservation : VNObservation

@property (readonly, copy) NSArray *fingerprintHashes;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOriginatingRequestSpecifier:(id)a0 fingerprintHashes:(id)a1;

@end
