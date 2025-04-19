@class NSString, NSDictionary, ODSession, ODMappings, NSArray;

@interface ODConfiguration : NSObject

@property (copy) NSString *trustAccount;
@property (copy) NSString *trustMetaAccount;
@property (copy) NSString *trustKerberosPrincipal;
@property (copy) NSString *trustType;
@property BOOL trustUsesMutualAuthentication;
@property BOOL trustUsesKerberosKeytab;
@property BOOL trustUsesSystemKeychain;
@property (readonly, copy) NSDictionary *configuration;
@property (retain) ODSession *session;
@property (copy) NSString *nodeName;
@property (copy) NSString *comment;
@property (retain) ODMappings *defaultMappings;
@property (copy) NSString *templateName;
@property (copy) NSArray *virtualSubnodes;
@property BOOL hideRegistration;
@property (copy) NSString *preferredDestinationHostName;
@property unsigned short preferredDestinationHostPort;
@property long long packetSigning;
@property long long packetEncryption;
@property BOOL manInTheMiddleProtection;
@property long long queryTimeoutInSeconds;
@property long long connectionSetupTimeoutInSeconds;
@property long long connectionIdleTimeoutInSeconds;
@property (copy) NSArray *defaultModuleEntries;
@property (copy) NSArray *authenticationModuleEntries;
@property (copy) NSArray *discoveryModuleEntries;
@property (copy) NSArray *generalModuleEntries;

+ (id)configuration;
+ (id)configurationWithDictionary:(id)a0 session:(id)a1;
+ (id)suggestedTrustAccount:(id)a0;
+ (id)suggestedTrustPassword:(unsigned long long)a0;

- (void)dealloc;
- (id)init;
- (BOOL)addTrustType:(id)a0 trustAccount:(id)a1 trustPassword:(id)a2 username:(id)a3 password:(id)a4 joinExisting:(BOOL)a5 error:(id *)a6;
- (id)initWithSession:(id)a0;
- (void)packageModules:(id)a0 intoConfiguration:(id)a1 forCategory:(id)a2;
- (BOOL)removeTrustUsingUsername:(id)a0 password:(id)a1 deleteTrustAccount:(BOOL)a2 error:(id *)a3;
- (BOOL)saveUsingAuthorization:(id)a0 error:(id *)a1;

@end
