@class MRGroupSessionEligibilityMonitor, NSString, MRAVRoutingDiscoverySession;

@interface MRAVLocalEndpoint : MRAVOutputContextEndpoint <MRGroupSessionEligibilityObserver>

@property (readonly, nonatomic) MRAVRoutingDiscoverySession *audioDiscoverySession;
@property (readonly, nonatomic) MRGroupSessionEligibilityMonitor *groupSessionEligibilityMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedLocalEndpoint;
+ (id)sharedLocalEndpointForRoutingContextWithUID:(id)a0;

- (id)groupLeader;
- (BOOL)canModifyGroupMembership;
- (BOOL)groupContainsDiscoverableGroupLeader;
- (id)groupSessionInfo;
- (void)groupSessionMonitor:(id)a0 statusDidChangeFrom:(id)a1 to:(id)a2;
- (void)handleActiveGroupSessionDidChangeNotification:(id)a0;
- (BOOL)isEligibleForHostingGroupSessionExcludingAcknowledgements;
- (void)requestGroupSessionWithDetails:(id)a0 queue:(id)a1 completion:(id /* block */)a2;

@end
