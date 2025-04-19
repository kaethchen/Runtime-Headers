@class NSError;

@interface IAServerAccountSetupResult : IAAccountSetupResult

@property BOOL isExistingAccount;
@property (retain) NSError *setupError;

- (void).cxx_destruct;

@end
