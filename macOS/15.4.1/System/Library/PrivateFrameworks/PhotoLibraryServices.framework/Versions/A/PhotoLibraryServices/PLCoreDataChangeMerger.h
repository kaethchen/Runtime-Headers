@class NSDictionary, NSObject, PLManagedObjectContextList;
@protocol OS_dispatch_queue;

@interface PLCoreDataChangeMerger : NSObject {
    PLManagedObjectContextList *_contextsToReceiveNotifications;
    NSObject<OS_dispatch_queue> *_mergeChangesQueue;
    BOOL _invalidated;
}

@property (nonatomic) BOOL isMergingCoalescedSaveNotification;
@property (copy, nonatomic) NSDictionary *allDidSaveObjectIDsUserInfo;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (id)allContexts;
- (void)refreshAllObjects;
- (void)handleUnknownMergeEvent;
- (id)allContextsNotIdenticalTo:(id)a0;
- (void)mergeChangesFromRemoteContextSave:(id)a0 intoAllContextsNotIdenticalTo:(id)a1 completionHandler:(id /* block */)a2;
- (void)mergeIntoAllContextsChangesFromRemoteContextSave:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerToReceiveCoreDataChanges:(id)a0;

@end
