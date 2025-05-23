@class NSString, NSAttributedString;

@interface LPApplePhotosStatusMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSAttributedString *status;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)a0;
- (id)presentationPropertiesForTransformer:(id)a0;

@end
