@class NSString;

@interface ODCAddODServerAction : ODCAction

@property (copy) NSString *serverName;
@property (copy) NSString *userName;
@property (copy) NSString *password;
@property (copy) NSString *clientComputerID;
@property BOOL errorOnOptionalAuthWithNoCredentials;
@property BOOL forceBind;
@property BOOL authBindOnlyIfRequired;
@property BOOL useSSL;
@property BOOL secureAuthOnly;
@property BOOL manInMiddle;
@property BOOL encryptionOnly;
@property BOOL signPackets;
@property BOOL addServerToSearchPaths;
@property BOOL autoSSL;
@property BOOL addCertificates;

+ (long long)securityLevelFromResponse:(id)a0;

- (id)init;
- (void)bind;
- (void)createTrust;
- (void)legacyBind;
- (void)startExecution;

@end
