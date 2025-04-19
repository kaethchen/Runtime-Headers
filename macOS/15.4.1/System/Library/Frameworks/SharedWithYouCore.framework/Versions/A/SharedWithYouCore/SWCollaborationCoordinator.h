@class NSString, NSMutableArray, NSCache;
@protocol SWCollaborationActionHandler;

@interface SWCollaborationCoordinator : NSObject <NSCacheDelegate>

@property (class, readonly, nonatomic) SWCollaborationCoordinator *sharedCoordinator;

@property (retain, nonatomic) NSCache *actionCache;
@property (retain, nonatomic) NSMutableArray *cachedUUIDs;
@property (nonatomic) BOOL applicationIsReadyForActions;
@property (weak, nonatomic) id<SWCollaborationActionHandler> actionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)processIncomingAction:(id)a0;
- (void)applicationHasFinishedLaunching;
- (void)_cacheAction:(id)a0;
- (void)_sendActionToApp:(id)a0;
- (void)_sendStartCollaborationAction:(id)a0;
- (void)_sendUndeliveredActionsIfNecessary;
- (void)_sendUpdateCollaborationParticipantsAction:(id)a0;
- (void)processIncomingActions:(id)a0;

@end
