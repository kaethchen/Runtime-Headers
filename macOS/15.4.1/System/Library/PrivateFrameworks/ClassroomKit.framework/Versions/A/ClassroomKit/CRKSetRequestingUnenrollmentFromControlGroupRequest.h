@class DMFControlGroupIdentifier;

@interface CRKSetRequestingUnenrollmentFromControlGroupRequest : CATTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier;
@property (nonatomic) BOOL requestingUnenroll;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
