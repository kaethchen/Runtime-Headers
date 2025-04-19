@interface EWSKerberos : NSObject

+ (void)_credentialCacheDidChange:(id)a0;
+ (id)_principalsForHost:(id)a0 user:(id)a1;
+ (id)credentialForHost:(id)a0 user:(id)a1;
+ (BOOL)hasCredentialForHost:(id)a0 user:(id)a1;

@end
