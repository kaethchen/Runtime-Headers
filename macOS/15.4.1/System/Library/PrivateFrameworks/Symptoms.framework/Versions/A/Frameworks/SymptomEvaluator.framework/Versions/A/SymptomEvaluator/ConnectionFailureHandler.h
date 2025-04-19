@class NSString, NSMutableSet, NWNumericAccumulator;

@interface ConnectionFailureHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {
    id _relayReadyObserver;
    NWNumericAccumulator *_stallAccumulator;
    NSMutableSet *_privacyProxiesUsed;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _privacyProxyLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)completeInitialization;
- (int)configureInstance:(id)a0;
- (void)handleFailureOrStallSymptom:(id)a0;
- (BOOL)noteSymptom:(id)a0;
- (void)postConnectionFailureMetrics:(unsigned char)a0;
- (void)setUpNumericAccumulator;

@end
