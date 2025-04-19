@class NEDNSSettings;

@interface NEDNSSettingsNetworkAgent : NENetworkAgent

@property (retain) NEDNSSettings *settings;

+ (id)agentDomain;
+ (id)agentFromData:(id)a0;
+ (id)agentType;

- (void).cxx_destruct;
- (id)agentDescription;
- (id)copyAgentData;

@end
