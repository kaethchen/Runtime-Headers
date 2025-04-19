@class IDSOffGridConnectionMonitor, IDSServerBag;
@protocol FTMessageDeliveryRemoteURLConnectionFactory, FTMessageDeliveryRemoteURLConnection, FTMessageDeliveryHTTPMobileNetworkManager;

@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate> {
    id<FTMessageDeliveryRemoteURLConnectionFactory> _remoteConnectionFactory;
    id<FTMessageDeliveryRemoteURLConnection> _remoteConnection;
    id<FTMessageDeliveryHTTPMobileNetworkManager> _mobileNetworkManager;
    IDSOffGridConnectionMonitor *_offGridConnectionMonitor;
    BOOL _pendingRetryAfterAirplaneMode;
    double _retryTimeAfterAirplaneMode;
    id /* block */ _retryBackoffProvider;
    id /* block */ _timeoutBackoffProvider;
    IDSServerBag *_idsServerBag;
    IDSServerBag *_iMessageServerBag;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (BOOL)sendMessage:(id)a0;
- (void)cancelMessage:(id)a0;
- (BOOL)busy;
- (void)_cleanupURLConnection;
- (void)_clearRetryTimer;
- (void)_dequeueIfNeeded;
- (void)_informDelegatesOfMessage:(id)a0 result:(id)a1 resultCode:(long long)a2 error:(id)a3;
- (void)_notifyDelegateAboutError:(id)a0 forMessage:(id)a1;
- (id)_processResultData:(id)a0 forMessage:(id)a1 error:(id *)a2;
- (BOOL)_sendMessageAsynchronously:(id)a0 error:(id *)a1;
- (void)_serverBagLoaded:(id)a0;
- (BOOL)_tryRetryMessageWithTimeInterval:(double)a0;
- (void)_updateWiFiAssertions;
- (void)_urlRequestWithURL:(id)a0 andData:(id)a1 message:(id)a2 completionBlock:(id /* block */)a3;
- (BOOL)authKitBAADisabled;
- (void)cancelMessage:(id)a0 withError:(long long)a1;
- (id)initWithAPSConnection:(id)a0;
- (id)initWithIDSServerBag:(id)a0;
- (id)initWithIDSServerBag:(id)a0 apsConnection:(id)a1;
- (id)initWithIDSServerBag:(id)a0 iMessageServerBag:(id)a1 remoteConnectionFactory:(id)a2 mobileNetworkManager:(id)a3 apsConnection:(id)a4 retryBackoffProvider:(id /* block */)a5 timeoutBackoffProvider:(id /* block */)a6;
- (id)initWithIDSServerBag:(id)a0 iMessageServerBag:(id)a1 remoteConnectionFactory:(id)a2 mobileNetworkManager:(id)a3 retryBackoffProvider:(id /* block */)a4 timeoutBackoffProvider:(id /* block */)a5;
- (void)networkStateChanged;
- (void)queue:(id)a0 hitTimeoutForMessage:(id)a1;
- (BOOL)sendMessageAtTopOfTheQueue:(id)a0;
- (BOOL)shouldFailFastForMessage:(id)a0;

@end
