@class NSNumber;

@interface APPolicyPasswordHistory : APPolicy <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumber *numberOfHistoryItems;

+ (id)policyWithNumberOfHistoryItems:(id)a0;
+ (id)policyWithIdentifier:(id)a0 andNumberOfHistoryItems:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_contentDescriptionsForNumItems:(id)a0;
- (id)_parametersForNumItems:(id)a0;
- (id)initWithIdentifier:(id)a0 andNumberOfHistoryItems:(id)a1;
- (id)initWithNumberOfHistoryItems:(id)a0;

@end
