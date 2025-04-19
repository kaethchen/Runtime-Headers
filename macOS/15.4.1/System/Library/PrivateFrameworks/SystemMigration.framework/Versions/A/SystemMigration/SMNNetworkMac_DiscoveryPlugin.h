@class NSObject;
@protocol OS_dispatch_queue;

@interface SMNNetworkMac_DiscoveryPlugin : SMSystemScanner_DiscoveryPlugin

@property (retain) NSObject<OS_dispatch_queue> *browserQueue;

- (id)init;
- (void).cxx_destruct;
- (void)startDiscovery;
- (void)stopDiscovery;
- (unsigned long long)scannerState;
- (id)systemQueueName;
- (void)addNonBonjourRemoteShare:(id)a0;
- (id)findParentOf:(id)a0;
- (void)performFinalCleanup;
- (void)registerChild:(id)a0 of:(id)a1;
- (BOOL)requiresSystemRetention;

@end
