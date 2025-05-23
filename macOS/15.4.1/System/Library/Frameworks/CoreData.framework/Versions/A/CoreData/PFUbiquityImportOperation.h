@class NSString, NSPersistentStore, PFUbiquityLocation, NSObject, NSLock;

@interface PFUbiquityImportOperation : NSOperation {
    NSString *_localPeerID;
    NSString *_storeName;
    NSPersistentStore *_store;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSLock *_delegateLock;
    BOOL _lockedDelegateLock;
    NSObject *_delegate;
}

@property NSObject *delegate;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)retainedDelegate;
- (void)cancel;
- (id)initWithPersistentStore:(id)a0 localPeerID:(id)a1 andUbiquityRootLocation:(id)a2;
- (id)initWithStoreName:(id)a0 localPeerID:(id)a1 andUbiquityRootLocation:(id)a2;
- (void)storeWillBeRemoved:(id)a0;

@end
