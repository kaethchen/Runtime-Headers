@class NSDictionary;

@interface DMFFetchRestrictionsResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *restrictions;
@property (readonly, copy, nonatomic) NSDictionary *globalRestrictions;
@property (readonly, copy, nonatomic) NSDictionary *profileRestrictions;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRestrictions:(id)a0;

@end
