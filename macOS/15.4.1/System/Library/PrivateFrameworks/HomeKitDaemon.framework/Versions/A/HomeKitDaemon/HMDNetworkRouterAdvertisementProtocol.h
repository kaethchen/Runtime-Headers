@class NSString;

@interface HMDNetworkRouterAdvertisementProtocol : NSObject <NSCopying, HAPTLVProtocol>

@property (nonatomic) long long advertisementProtocol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;
+ (id)protocolFromFirewallRuleAdvertisingProtocol:(unsigned char)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)serializeWithError:(id *)a0;
- (id)initWithAdvertisementProtocol:(long long)a0;

@end
