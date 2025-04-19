@class NSString, NSArray, NSURL, NSError, NSObject, NSDate;
@protocol OS_nw_activity, OS_nw_content_context, OS_nw_endpoint, OS_dispatch_source, OS_dispatch_queue, OS_nw_connection;

@interface SiriNWConnection : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_url;
    NSString *_resolvedHost;
    unsigned int _network_traffic_class;
    NSObject<OS_nw_connection> *_connection;
    NSObject<OS_nw_activity> *_activity;
    NSObject<OS_nw_endpoint> *_endpoint;
    NSObject<OS_nw_content_context> *_content_context;
    id /* block */ _wfcompletion;
    BOOL _isCanceled;
    BOOL _isEstablishing;
    BOOL _isReady;
    BOOL _usingTLS;
    NSString *_connectionId;
    long long _probeLabel;
    int _interfaceIndex;
    id /* block */ _openCompletion;
    NSObject<OS_dispatch_source> *_openTimer;
    NSObject<OS_dispatch_source> *_staleConnectionTimer;
    unsigned long long _readWriteCounter;
    NSObject<OS_dispatch_source> *_connectionUnviableTimer;
    unsigned long long _betterPathAvailableNotificationMachTime;
    NSArray *_attemptedEndpoints;
    NSError *_mostRecentErrorFromNWConnection;
    NSDate *_dateToDisable;
    NSString *_reason;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (id)_queue;
- (void)_configureConnection:(id)a0;
- (void)_closeWithError:(id)a0;
- (void)_invokeOpenCompletionWithError:(id)a0;
- (void)_setupOpenTimer;
- (void)_cancelOpenTimer;
- (id)_getAttemptedEndpoints;
- (void)_getNWConnectionWithInitialData:(id)a0 completion:(id /* block */)a1;
- (id)_setParametersForHost:(const char *)a0 useTLS:(BOOL)a1 initialPayload:(id)a2;
- (BOOL)hasActiveConnection;
- (void)openConnectionForURL:(id)a0 withConnectionId:(id)a1 initialPayload:(id)a2 completion:(id /* block */)a3;
- (id)resolvedHost;
- (id)initWithQueueAndCompletion:(id)a0 reason:(id)a1 callback:(id /* block */)a2;
- (void)runSiriProbeWithDepth:(long long)a0 trafficClass:(unsigned int)a1;

@end
