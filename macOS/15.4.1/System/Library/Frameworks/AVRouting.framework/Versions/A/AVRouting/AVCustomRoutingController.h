@class NSArray;
@protocol AVCustomRoutingControllerDelegate;

@interface AVCustomRoutingController : NSObject {
    NSArray *_routeEventRecords;
}

@property (nonatomic, getter=isSessionSuspended) BOOL sessionSuspended;
@property (readonly, nonatomic) NSArray *pendingEvents;
@property (weak, nonatomic) id<AVCustomRoutingControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *authorizedRoutes;
@property (retain, nonatomic) NSArray *knownRouteIPs;
@property (retain, nonatomic) NSArray *customActionItems;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_startSession;
- (void)_stopSession;
- (void)handleCustomActionItemSelected:(id)a0;
- (void)_addAuthorizedRoute:(id)a0;
- (void)_informClientOfEventReason:(long long)a0 forRoute:(id)a1;
- (void)_removeAuthorizedRoute:(id)a0;
- (void)_resumeSessionUpdates;
- (void)_setActive:(BOOL)a0 forRoute:(id)a1;
- (void)_setAuthorizedRoutes:(id)a0;
- (void)_setPendingEvents:(id)a0;
- (void)_storeRecordForEvent:(id)a0;
- (void)_suspendSessionUpdates;
- (void)_updateSessionForEvent:(id)a0;
- (void)_updateSessionFromEventRecords;
- (void)_updateSessionStateToMatchRoute:(id)a0;
- (void)_updateSessionToReflectCurrentlyActiveRoutes;
- (void)invalidateAuthorizationForRoute:(id)a0;
- (BOOL)isRouteActive:(id)a0;
- (void)setActive:(BOOL)a0 forRoute:(id)a1;

@end
