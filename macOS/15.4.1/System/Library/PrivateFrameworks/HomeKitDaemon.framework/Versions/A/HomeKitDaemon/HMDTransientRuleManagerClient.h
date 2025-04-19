@class NSString;

@interface HMDTransientRuleManagerClient : NSObject <HMDNetworkRouterFirewallRuleManagerClient> {
    NSString *_description;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDescription:(id)a0;

@end
