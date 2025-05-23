@class NSMutableArray;

@interface HMPendingRequests : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *contextLists;

- (id)init;
- (void).cxx_destruct;
- (void)_addRequest:(id)a0 ofType:(long long)a1 forIdentifier:(id)a2;
- (id)_retrieveRequestOfType:(long long)a0 forIdentifier:(id)a1 remove:(BOOL)a2;
- (void)addAccessory:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (void)addAccessoryDescription:(id)a0 progressBlock:(id)a1 andCompletionBlock:(id)a2 forIdentifier:(id)a3;
- (void)addAction:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (void)addApplicationData:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (void)addCompletionBlock:(id)a0 forIdentifier:(id)a1;
- (void)addEvent:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (void)addEvents:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (void)addMediaSystemBuilder:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (void)addProgressHandler:(id)a0 forAccessoryIdentifier:(id)a1;
- (void)addRequest:(id)a0 ofType:(long long)a1 forIdentifier:(id)a2;
- (void)addTrigger:(id)a0 andCompletionBlock:(id)a1 forIdentifier:(id)a2;
- (id)removeAccessoryDescriptionForIdentifier:(id)a0;
- (id)removeAccessoryForIdentifier:(id)a0;
- (id)removeActionForIdentifier:(id)a0;
- (id)removeApplicationDataForIdentifier:(id)a0;
- (id)removeCompletionBlockForIdentifier:(id)a0;
- (id)removeEventForIdentifier:(id)a0;
- (id)removeEventsForIdentifier:(id)a0;
- (id)removeMediaSystemBuilderForIdentifier:(id)a0;
- (id)removeProgressBlockForIdentifier:(id)a0;
- (id)removeRequestOfType:(long long)a0 forIdentifier:(id)a1;
- (id)removeTriggerForIdentifier:(id)a0;
- (id)retrieveAccessoryDescriptionForIdentifier:(id)a0;
- (id)retrieveCompletionBlockForIdentifier:(id)a0;
- (id)retrieveProgressBlockForIdentifier:(id)a0;
- (id)retrieveRequestOfType:(long long)a0 forIdentifier:(id)a1;
- (id)uuidForAccessoryDescriptionUUID:(id)a0;

@end
