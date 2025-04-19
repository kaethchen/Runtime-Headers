@class NSString, NSDictionary;

@interface APPolicyData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *creativeIdentifier;
@property (retain) NSDictionary *policyValue;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToAPPolicyData:(id)a0;

@end
