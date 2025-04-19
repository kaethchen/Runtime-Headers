@class RPCompanionLinkClient, NSObject;
@protocol OS_dispatch_queue, WFTrafficEngDelegate;

@interface WFTrafficEngManager : NSObject {
    NSObject<OS_dispatch_queue> *_traffic_engr_queue;
    RPCompanionLinkClient *_discoveryClient;
    BOOL _configured;
}

@property (nonatomic) id<WFTrafficEngDelegate> trafficEngDelegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cleanup;
- (void)__activateDiscovery;
- (id)__collectCriticalAppInfo;
- (BOOL)__configureRapportDiscoveryClient;
- (void)__configureRapportSessionClient:(id)a0;
- (void)__invalidateDiscovery;
- (void)__invalidateSession;
- (void)__registerCallbacksAndActivate;
- (void)__registerRequestHandler;
- (void)__requestCriticalAppInfo:(id)a0 completionBlock:(id /* block */)a1;
- (void)__sendEventToPeers;
- (void)__sendKeepAliveEvent:(id)a0 dictionary:(id)a1;
- (void)__sendPeriodicEvent:(id)a0;
- (void)__tearDownRapportDataSession;
- (id)initWithTrafficEngDelegate:(id)a0;

@end
