@class NSUUID, NENetworkRule, NEAppRule;

@interface NEFilterRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NEAppRule *appRule;
@property (readonly, copy) NSUUID *effectiveUUID;
@property (readonly, copy) NENetworkRule *networkRule;
@property (readonly) long long action;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initWithAppRule:(id)a0 action:(long long)a1;
- (id)initWithAppRule:(id)a0 effectiveUUID:(id)a1 action:(long long)a2;
- (id)initWithNetworkRule:(id)a0 action:(long long)a1;

@end
