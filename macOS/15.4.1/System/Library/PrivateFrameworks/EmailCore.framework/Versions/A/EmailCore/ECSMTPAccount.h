@interface ECSMTPAccount : ECAccount

+ (id)standardPorts;
+ (id)standardSSLPorts;

- (id)_hostnameFromParentAccount:(id)a0;
- (long long)defaultPortNumber;
- (id)portNumberObject;
- (id)usesSSLObject;

@end
