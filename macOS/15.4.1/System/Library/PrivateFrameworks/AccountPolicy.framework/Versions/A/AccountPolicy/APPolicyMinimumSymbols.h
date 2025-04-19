@interface APPolicyMinimumSymbols : APPolicyMinimum <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)policyWithIdentifier:(id)a0 andMinimum:(id)a1;
+ (id)policyWithMinimum:(id)a0;

- (id)_contentDescriptionsForMinimum:(id)a0;
- (id)_contentForMinimum:(id)a0;
- (id)_parametersForMinimum:(id)a0;
- (id)initWithIdentifier:(id)a0 andMinimum:(id)a1;
- (id)initWithMinimum:(id)a0;

@end
