@class NSArray, HMDNetworkRouterFirewallRuleWANAddressRange;

@interface HMDNetworkRouterFirewallRuleWANSubject : HMFObject

@property (readonly, nonatomic) NSArray *hostnames;
@property (readonly, nonatomic) NSArray *addresses;
@property (readonly, nonatomic) HMDNetworkRouterFirewallRuleWANAddressRange *addressRange;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithHostnames:(id)a0 addresses:(id)a1 addressRange:(id)a2;
- (id)prettyJSONDictionary;

@end
