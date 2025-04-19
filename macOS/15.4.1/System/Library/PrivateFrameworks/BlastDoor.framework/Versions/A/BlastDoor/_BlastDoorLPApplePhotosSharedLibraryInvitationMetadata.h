@class NSString;

@interface _BlastDoorLPApplePhotosSharedLibraryInvitationMetadata : _BlastDoorLPSpecializationMetadata

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *originatorDisplayName;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
