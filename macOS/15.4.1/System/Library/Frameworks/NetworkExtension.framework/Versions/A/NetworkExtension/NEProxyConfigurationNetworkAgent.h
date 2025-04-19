@class NSData;

@interface NEProxyConfigurationNetworkAgent : NENetworkAgent {
    NSData *_agentData;
}

+ (id)agentDomain;
+ (id)agentFromData:(id)a0;
+ (id)agentType;

- (void).cxx_destruct;
- (id)agentDescription;
- (id)copyAgentData;
- (id)initWithProxyConfiguration:(id)a0;

@end
