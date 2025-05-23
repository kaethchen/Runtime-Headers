@class NSMapTable, TKPowerMonitor, NSDate, NSObject, TKSmartCardSessionEngine, NSMutableArray, TKSmartCardATR, NSString, TKSlotParameters, NSHashTable, NSXPCListenerEndpoint, NSXPCListener, NSNumber, NSXPCConnection;
@protocol OS_os_log, OS_dispatch_source, OS_dispatch_queue, TKSmartCardSlotEngineDelegate;

@interface TKSmartCardSlotEngine : NSObject <TKProtocolSmartCardSlot, NSXPCListenerDelegate> {
    unsigned long long _lastId;
    long long _state;
    long long _powerState;
    long long _previousState;
    double _cardReinsertionSimulationCallInterval;
    NSDate *_lastCardReinsertionSimulationCallTime;
    TKSmartCardATR *_atr;
    unsigned long long _protocol;
    NSObject<OS_dispatch_source> *_idlePowerDownSource;
    NSXPCConnection *_registrationConnection;
    NSXPCListener *_listener;
    NSHashTable *_clients;
    NSMutableArray *_sessionRequests;
    NSMapTable *_stateRequests;
    NSMapTable *_reservations;
    TKPowerMonitor *_powerMonitor;
    NSObject<OS_os_log> *_log;
}

@property (class, retain) NSNumber *_testing_stateDelay;

@property (weak) id<TKSmartCardSlotEngineDelegate> delegate;
@property (readonly) NSString *name;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_queue> *powerRequestsQueue;
@property BOOL apduSentSinceLastReset;
@property (weak) TKSmartCardSessionEngine *session;
@property double powerDownIdleTimeout;
@property (readonly, copy) TKSlotParameters *slotParameters;
@property (retain) NSXPCListenerEndpoint *serverEndpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)reset;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)setProtocol:(unsigned long long)a0;
- (void)terminate;
- (void)_changeStateTo:(id)a0 forClient:(id)a1;
- (id)_findReservation:(id)a0 connection:(id)a1;
- (id)_getReservationId;
- (BOOL)_setupWithName:(id)a0 delegate:(id)a1;
- (BOOL)canSimulateCardReinsertion;
- (void)cardPresent:(BOOL)a0;
- (void)changeStateTo:(long long)a0 powerState:(long long)a1;
- (BOOL)connectCardSessionWithParameters:(id)a0;
- (id)dictionaryForState:(long long)a0;
- (void)getAttrib:(unsigned int)a0 reply:(id /* block */)a1;
- (id)initWithSlotParameters:(id)a0;
- (void)leaveSession:(id)a0;
- (void)logWithBytes:(id)a0 handler:(id /* block */)a1;
- (void)powerDownWithEject:(BOOL)a0;
- (void)reserveProtocols:(id)a0 reservationId:(id)a1 exclusive:(BOOL)a2 reply:(id /* block */)a3;
- (void)runUserInteraction:(id)a0 reply:(id /* block */)a1;
- (void)scheduleIdlePowerDown;
- (void)sendControl:(id)a0 data:(id)a1 expectedLength:(unsigned int)a2 reply:(id /* block */)a3;
- (void)sessionWithParameters:(id)a0 reply:(id /* block */)a1;
- (void)setAttrib:(unsigned int)a0 data:(id)a1 reply:(id /* block */)a2;
- (void)setCardReinsertionSimulationCallInterval:(double)a0;
- (void)setupSlotWithReply:(id /* block */)a0;
- (BOOL)setupWithName:(id)a0 delegate:(id)a1;
- (void)simulateCardReinsertionWithReply:(id /* block */)a0;
- (id)slotRegistryWithErrorHandler:(id /* block */)a0;
- (void)waitForNextState:(long long)a0 reply:(id /* block */)a1;
- (void)waitForStateFlushedWithReply:(id /* block */)a0;

@end
