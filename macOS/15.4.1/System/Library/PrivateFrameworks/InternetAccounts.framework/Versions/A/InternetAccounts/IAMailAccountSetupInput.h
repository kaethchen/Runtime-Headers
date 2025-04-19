@class NSString;

@interface IAMailAccountSetupInput : IAAccountSetupInput

@property (retain) NSString *emailAddress;
@property (retain) NSString *fullName;
@property BOOL disableRecentsSync;

- (void).cxx_destruct;

@end
