@class NSArray, NSString, NSHashTable, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WBSOngoingSharingGroupProvider : NSObject <KCSharingGroupManagerSubscriberProtocol> {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_subscribers;
    NSArray *_cachedGroups;
    NSArray *_cachedInvitations;
    NSMutableDictionary *_groupIDToPermissionLevelForCurrentUser;
    NSString *_cachedCurrentUserParticipantID;
    id _keybagLockStatusObserverToken;
}

@property (class, readonly, nonatomic) WBSOngoingSharingGroupProvider *sharedProvider;

@property (readonly, nonatomic) NSArray *cachedGroups;
@property (readonly, nonatomic) NSArray *cachedInvitations;
@property (readonly, nonatomic) NSString *currentUserParticipantID;
@property (readonly, nonatomic) BOOL hasLoadedGroups;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)accountChanged;
- (void)addSubscriber:(id)a0;
- (void)groupsUpdated;
- (void)_addNewGroupToCachedGroups:(id)a0;
- (void)_contactsUpdatedNotification:(id)a0;
- (void)_fetchCurrentUserParticipantIDWithCompletion:(id /* block */)a0;
- (void)_fetchGroups;
- (void)_fetchGroupsWithCompletion:(id /* block */)a0;
- (void)_notifySubscribers;
- (void)_performTaskEnsuringGroupsAreLoadedOnQueue:(id)a0 shouldForceUpdate:(BOOL)a1 task:(id /* block */)a2;
- (void)_updateCachedPermissionLevelsForCurrentUser;
- (id)cachedGroupWithID:(id)a0;
- (BOOL)canCurrentUserEditSavedAccountsInGroupWithID:(id)a0;
- (void)performTaskEnsuringGroupsAreLoadedOnQueue:(id)a0 task:(id /* block */)a1;
- (void)performTaskOnQueueAfterFetchingGroups:(id)a0 task:(id /* block */)a1;

@end
