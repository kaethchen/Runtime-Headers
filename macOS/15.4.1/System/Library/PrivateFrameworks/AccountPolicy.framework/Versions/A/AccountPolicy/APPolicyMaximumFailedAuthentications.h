@class NSNumber;

@interface APPolicyMaximumFailedAuthentications : APPolicy <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumber *maximumFailedAuthentications;
@property (copy) NSNumber *minutesUntilAutomaticallyUnlocked;

+ (id)policyWithIdentifier:(id)a0 maximum:(id)a1 automaticUnlock:(id)a2;
+ (id)policyWithMaximum:(id)a0 andAutomaticUnlock:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_contentForMaximum:(id)a0 andAutoUnlock:(id)a1;
- (id)_parametersForMaximum:(id)a0 andAutoUnlock:(id)a1;
- (id)initWithIdentifier:(id)a0 maximum:(id)a1 automaticUnlock:(id)a2;
- (id)initWithMaximum:(id)a0 andAutomaticUnlock:(id)a1;

@end
