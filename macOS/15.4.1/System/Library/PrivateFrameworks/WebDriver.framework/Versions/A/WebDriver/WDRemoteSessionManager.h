@class NSString, SimDeviceSet, NSSet, SimServiceContext, NSMutableDictionary, NSMutableSet, NSObject, RWIDriver;
@protocol WDServiceHost, OS_dispatch_queue;

@interface WDRemoteSessionManager : NSObject <RWITargetDelegate, RWIDriverSessionProvider, WDSessionHostDelegate> {
    id<WDServiceHost> _serviceHost;
    NSMutableSet *_pendingSessions;
    NSMutableSet *_activeSessions;
    NSMutableDictionary *_criteriaForPendingSessions;
    NSObject<OS_dispatch_queue> *_simulatorAccessQueue;
    SimServiceContext *_simulatorService;
    SimDeviceSet *_simulatorDeviceSet;
}

@property (readonly, nonatomic) RWIDriver *driver;
@property (readonly, copy, nonatomic) NSSet *activeSessions;
@property (readonly, copy, nonatomic) NSSet *remoteSessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *allSessions;
@property (readonly, nonatomic) id<WDServiceHost> serviceHost;

- (void).cxx_destruct;
- (BOOL)_simulatorHost:(id)a0 matchesCriteria:(id)a1;
- (id)pendingSessions;
- (BOOL)_deviceHost:(id)a0 matchesCriteria:(id)a1;
- (void)_initializeSimulatorSupport;
- (id)_validateHostCriteria:(id)a0;
- (void)createSessionWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)findDeviceHostsMatchingCriteria:(id)a0 completionHandler:(id /* block */)a1;
- (void)findMachineHostsMatchingCriteria:(id)a0 completionHandler:(id /* block */)a1;
- (void)findSimulatorHostsMatchingCriteria:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithDriver:(id)a0 serviceHost:(id)a1;
- (void)populateDriverStateWithActiveSessions:(id)a0;
- (id)sessionHost:(id)a0 canFulfillNewSessionRequestWithDrivable:(id)a1;
- (void)sessionHostConnectionTerminated:(id)a0;
- (id)sessionHostForwardedCapabilities:(id)a0;

@end
