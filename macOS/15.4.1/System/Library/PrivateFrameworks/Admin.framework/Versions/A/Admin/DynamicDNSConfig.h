@interface DynamicDNSConfig : NSObject

+ (id)sharedDynamicDNSConfig;

- (void)scWriteBrowseDomains:(id)a0;
- (void)scWriteHostname:(id)a0;
- (void)scWriteRegistrationDomains:(id)a0;

@end
