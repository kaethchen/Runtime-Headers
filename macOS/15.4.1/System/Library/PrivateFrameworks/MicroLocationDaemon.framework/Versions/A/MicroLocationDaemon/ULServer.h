@class ULEnvironment, NSString, ULLogicAdapter, NSMutableSet, NSDate;

@interface ULServer : NSObject <ULDiagnosticsProvider, ULClientProcessConnectionDelegate, NSXPCListenerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) ULEnvironment *environment;
@property (retain, nonatomic) NSMutableSet *clientConnections;
@property (retain, nonatomic) ULLogicAdapter *logicAdapter;
@property (retain, nonatomic) NSMutableSet *signals;
@property (retain, nonatomic) NSDate *stimulationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createSourceForSignal:(int)a0 withBlock:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_start;
- (void)_stop;
- (void)_exit;
- (id)initWithEnvironment:(id)a0;
- (id)diagnosticInfo;
- (id)_remoteProxyForToken:(id)a0;
- (void)clientConnectionSeveredConnection:(id)a0;
- (void)didCompleteObservationWithMetaInformation:(id)a0 toConnection:(id)a1;
- (void)didCompletePredictionWithMetaInformation:(id)a0 toConnection:(id)a1;
- (void)didCompleteRequest:(id)a0 withError:(id)a1 toConnection:(id)a2;
- (void)didCreateCustomLoiAtCurrentLocationWithError:(id)a0 forConnection:(id)a1;
- (void)didFailWithError:(id)a0 toConnection:(id)a1;
- (void)didRemoveCustomLoiWithIdentifier:(id)a0 forConnection:(id)a1 withError:(id)a2;
- (void)didSendGenericEvent:(unsigned long long)a0 withDescription:(id)a1 toConnection:(id)a2;
- (void)didSendPredictionResults:(id)a0 toConnection:(id)a1;
- (void)didUpdateServiceStatus:(id)a0 toConnection:(id)a1;
- (void)locationsOfInterestDidClearNotification;
- (void)resetPrivacyWarningsNotification;

@end
