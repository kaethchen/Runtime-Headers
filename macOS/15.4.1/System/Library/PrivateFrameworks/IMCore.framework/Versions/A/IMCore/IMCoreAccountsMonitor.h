@class NSObject, ACAccount;
@protocol OS_dispatch_queue;

@interface IMCoreAccountsMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    ACAccount *_cachedPrimaryAppleAccount;
}

@property (class, readonly) IMCoreAccountsMonitor *sharedInstance;

@property (readonly, nonatomic) BOOL isSignedIntoiCloud;

- (id)init;
- (void).cxx_destruct;
- (void)accountStoreDidChange:(id)a0;
- (id)_cachedPrimaryAppleAccount;

@end
