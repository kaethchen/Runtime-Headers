@class DMFControlGroupIdentifier, NSArray, NSDate;

@interface DMFJoinControlGroupRequest : DMFTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier;
@property (copy, nonatomic) NSArray *leaderIdentifiers;
@property (copy, nonatomic) NSDate *expirationDate;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
