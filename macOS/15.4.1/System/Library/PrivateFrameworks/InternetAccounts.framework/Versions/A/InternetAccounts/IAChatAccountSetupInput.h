@class NSString;

@interface IAChatAccountSetupInput : IAAccountSetupInput

@property (retain) NSString *accountType;
@property (retain) NSString *loginName;
@property (retain) NSString *serverName;
@property long long serverPort;
@property BOOL useSSL;
@property BOOL useKerberosV5;

- (void).cxx_destruct;

@end
