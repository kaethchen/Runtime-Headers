@class NSNumber;

@interface APPolicyChangePasswordEveryNDays : APPolicy <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumber *days;

+ (id)policyWithDays:(id)a0;
+ (id)policyWithIdentifier:(id)a0 andDays:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_contentForDays:(id)a0;
- (id)_parametersForDays:(id)a0;
- (id)initWithDays:(id)a0;
- (id)initWithIdentifier:(id)a0 andDays:(id)a1;

@end
