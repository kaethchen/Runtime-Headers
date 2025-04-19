@class NSSet;

@interface CRKFetchActiveRestrictionUUIDsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSSet *activeRestrictionUUIDs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
