@class NSString;

@interface IAServerAccountSetupInput : IAAccountSetupInput

@property (retain) NSString *serverName;
@property (retain) NSString *serverAddress;
@property BOOL enableMail;
@property BOOL enableJabber;
@property BOOL enableCalDAV;
@property BOOL enableCardDAV;
@property BOOL enableVPN;

- (void).cxx_destruct;

@end
