@class BKThreeLevelForest, NSString, NSMutableDictionary, NSMutableSet, BSMutableIntegerMap, BKHIDDomainServiceServer;

@interface BKHIDEventDeliveryObserverService : NSObject <BKSHIDEventObserverServerInterface, BKHIDDomainServiceDelegate, BKHIDEventDeliveryResolutionObserver> {
    BKHIDDomainServiceServer *_server;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSMutableIntegerMap *_lock_observationsByPID;
    NSMutableSet *_lock_deferringChainObserverConnections;
    BKThreeLevelForest *_lock_identityToPIDToObservations;
    NSMutableDictionary *_lock_identityToChain;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithServer:(id)a0;
- (void)setObservesDeferringChainIdentities:(id)a0;
- (id)setObservesDeferringResolutions:(id)a0;
- (void)connectionDidTerminate:(id)a0 process:(id)a1;
- (void)deliveryChainDidUpdate:(id)a0 forIdentity:(id)a1 reason:(id)a2;

@end
