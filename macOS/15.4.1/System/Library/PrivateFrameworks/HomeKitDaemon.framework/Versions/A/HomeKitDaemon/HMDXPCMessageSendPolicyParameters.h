@class NSString;

@interface HMDXPCMessageSendPolicyParameters : HMFObject

@property (readonly, nonatomic) unsigned long long entitlements;
@property (readonly, copy) NSString *signature;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithEntitlements:(unsigned long long)a0;
- (id)attributeDescriptions;

@end
