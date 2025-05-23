@class VNImageprint, NSString, NSData;

@interface VNImageprintObservation : VNObservation

@property (retain, nonatomic) VNImageprint *imageprint;
@property (readonly, nonatomic) BOOL imageprintValid;
@property (readonly, copy, nonatomic) NSString *imageprintVersion;
@property (readonly, nonatomic) NSData *rawImageprintDescriptor;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;
+ (id)observationWithImageprint:(id)a0 error:(id *)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (float)calculateDistanceFromImageprintObservation:(id)a0;
- (id)initWithRawImageprintDescriptor:(id)a0;
- (BOOL)isImageprintValid;
- (id)vn_cloneObject;

@end
