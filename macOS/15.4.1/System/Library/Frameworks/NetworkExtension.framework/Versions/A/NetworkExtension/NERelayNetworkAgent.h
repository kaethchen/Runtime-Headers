@class NSObject;
@protocol OS_nw_proxy_config;

@interface NERelayNetworkAgent : NENetworkAgent

@property (retain) NSObject<OS_nw_proxy_config> *proxyConfig;

+ (id)agentDomain;
+ (id)agentFromData:(id)a0;
+ (id)agentType;

- (void).cxx_destruct;
- (id)agentDescription;
- (id)copyAgentData;

@end
