@class NSArray, NSOperationQueue;

@interface iCloudAccountMgr : NSObject

@property (retain) NSArray *accountCache;
@property (retain) NSOperationQueue *operationQueue;
@property long long queuedRefreshCount;

+ (id)sharedMgr;

- (id)init;
- (void).cxx_destruct;
- (void)_reloadAccounts:(id)a0;
- (void)forceReloadAccounts;
- (id)icaAppleAccountWithPersonID:(id)a0;
- (id)icaAppleAccountWithUsername:(id)a0;
- (id)icaPrimaryAppleAccount;

@end
