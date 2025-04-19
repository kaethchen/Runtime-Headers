@class NSString;

@interface CRKFetchControlGroupIdentifiersRequest : CATTaskRequest

@property (copy, nonatomic) NSString *leaderIdentifier;
@property (nonatomic) BOOL includeTemporary;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
