@class NSError, IMAccount;

@interface IAChatAccountSetupResult : IAAccountSetupResult

@property (retain) IMAccount *accountObject;
@property (retain) NSError *setupError;
@property BOOL isExistingAccount;

- (void).cxx_destruct;

@end
