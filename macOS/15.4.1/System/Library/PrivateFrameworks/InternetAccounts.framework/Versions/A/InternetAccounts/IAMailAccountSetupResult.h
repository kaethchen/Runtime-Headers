@class NSString, NSArray, NSData;

@interface IAMailAccountSetupResult : IAAccountSetupResult

@property (retain) NSString *displayName;
@property (retain) NSString *fullName;
@property (retain) NSArray *emailAddresses;
@property (retain) NSString *imapPathPrefix;
@property (retain) NSString *incomingAccountType;
@property (retain) NSString *incomingHostname;
@property long long incomingPort;
@property BOOL incomingUseSSL;
@property (retain) NSString *incomingAuthMechanism;
@property (retain) NSString *incomingUserName;
@property (retain) NSString *incomingPassword;
@property (retain) NSData *incomingTLSCertificate;
@property (retain) NSString *incomingNTLMDomain;
@property (retain) NSString *outgoingHostname;
@property long long outgoingPort;
@property BOOL outgoingUseSSL;
@property (retain) NSString *outgoingAuthMechanism;
@property (retain) NSString *outgoingUserName;
@property (retain) NSString *outgoingPassword;
@property (retain) NSData *outgoingTLSCertificate;
@property long long deletionPolicy;
@property long long deleteOnServerInterval;

- (void)dealloc;
- (void).cxx_destruct;

@end
