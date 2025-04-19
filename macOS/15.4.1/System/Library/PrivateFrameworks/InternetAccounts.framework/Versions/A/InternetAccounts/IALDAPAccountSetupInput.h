@class NSString, NSNumber;

@interface IALDAPAccountSetupInput : IAAccountSetupInput

@property (retain) NSString *serverAddress;
@property (retain) NSNumber *useSSL;
@property long long port;
@property (retain) NSString *scope;
@property (retain) NSString *searchBase;
@property BOOL authenticate;

- (void).cxx_destruct;

@end
