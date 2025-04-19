@interface CalDAVKerberosHelper : NSObject

+ (void)credentialCacheDidChange:(id)a0;
+ (id)credentialForHost:(id)a0 user:(id)a1 password:(id)a2;
+ (id)principalsForHost:(id)a0 user:(id)a1 password:(id)a2;

@end
