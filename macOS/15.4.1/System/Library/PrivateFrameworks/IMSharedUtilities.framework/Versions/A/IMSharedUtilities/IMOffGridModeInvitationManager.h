@class IDSOffGridStateManager, NSCache, NSObject;
@protocol OS_dispatch_queue;

@interface IMOffGridModeInvitationManager : NSObject

@property (retain, nonatomic) IDSOffGridStateManager *offGridStateManager;
@property (retain, nonatomic) NSCache *dateAttemptedInvitationByHandleCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *offGridBackgroundQueue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeAllInvitedHandlesWithCompletion:(id /* block */)a0;
- (id)_invitationCacheKeyForHandleID:(id)a0 fromHandleID:(id)a1;
- (void)_inviteHandleID:(id)a0 fromSenderHandle:(id)a1 completion:(id /* block */)a2;
- (void)_invitedHandlesContainHandleID:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isHandleAlreadyInvited:(id)a0 idsInvitedHandles:(id)a1;
- (BOOL)_isHandleIDEligibleToReceiveAutomaticInvitation:(id)a0;
- (BOOL)_isHandleIDEligibleToReceiveAutomaticInvitation:(id)a0 isContact:(id /* block */)a1;
- (void)attemptIfNecessaryToAutomaticallyShareOffGridModeWithHandleID:(id)a0 fromHandleID:(id)a1 completion:(id /* block */)a2;
- (void)batchShareOffGridModeToHandleIDs:(id)a0 fromHandleID:(id)a1 isContact:(id /* block */)a2 completion:(id /* block */)a3;
- (void)repairOffGridStatusWithHandleID:(id)a0 fromHandleID:(id)a1 completion:(id /* block */)a2;

@end
