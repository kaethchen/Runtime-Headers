@class MFEWSAccount;

@interface MFEWSSizeEngine : MFRemoteStoreSizeEngine

@property (readonly, nonatomic) MFEWSAccount *account;

- (id)initWithAccount:(id)a0;
- (void)_getSizeForMailbox:(id)a0;
- (void)_runWorkerThread;

@end
