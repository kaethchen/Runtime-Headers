@class NSManagedObjectContext, NSXPCStoreConnectionInfo, NSPersistentStore;

@interface NSXPCStoreServerConnectionContext : NSObject <NSCoreDataKeyedArchivingDelegate> {
    NSManagedObjectContext *_context;
    NSXPCStoreConnectionInfo *_info;
    id _manager;
    NSPersistentStore *_activeStore;
}

- (void)dealloc;
- (id)description;
- (struct { unsigned int x0[8]; })auditToken;
- (id)userInfo;
- (id)entitlements;
- (void)setUserInfo:(id)a0;
- (id)managedObjectContext;
- (id)persistentStoreCoordinator;
- (void)setManagedObjectContext:(id)a0;
- (id)cache;
- (BOOL)_allowCoreDataFutures;
- (id)initWithConnectionInfo:(id)a0;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)a0 onEntity:(id)a1;
- (id)notificationManager;
- (void)setNotificationManager:(id)a0;

@end
