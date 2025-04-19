@interface APPolicyMaximumConsecutiveCharacters : APPolicyMaximum <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)policyWithIdentifier:(id)a0 andMaximum:(id)a1;
+ (id)policyWithMaximum:(id)a0;

- (id)_contentDescriptionsForMaximum:(id)a0;
- (id)_contentForMaximum:(id)a0;
- (id)_parametersForMaximum:(id)a0;
- (id)initWithIdentifier:(id)a0 andMaximum:(id)a1;
- (id)initWithMaximum:(id)a0;

@end
