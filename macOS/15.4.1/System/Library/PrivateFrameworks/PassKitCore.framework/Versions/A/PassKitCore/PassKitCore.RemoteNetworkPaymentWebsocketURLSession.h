@interface PassKitCore.RemoteNetworkPaymentWebsocketURLSession : NSObject <NSURLSessionWebSocketDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ remoteIdentifier;
    void /* unknown type, empty encoding */ sessionIdentifier;
    void /* unknown type, empty encoding */ websocketURL;
    void /* unknown type, empty encoding */ urlSession;
    void /* unknown type, empty encoding */ delegateQueue;
    void /* unknown type, empty encoding */ webSocketTask;
    void /* unknown type, empty encoding */ hasExplicitlyDisconnected;
    void /* unknown type, empty encoding */ pingTimer;
    void /* unknown type, empty encoding */ pingInterval;
    void /* unknown type, empty encoding */ pingTolerance;
    void /* unknown type, empty encoding */ connectionTimeout;
    void /* unknown type, empty encoding */ connectionAttemptCount;
    void /* unknown type, empty encoding */ connectionAttemptLimit;
    void /* unknown type, empty encoding */ hasReportedError;
    void /* unknown type, empty encoding */ logger;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)URLSession:(id)a0 webSocketTask:(id)a1 didCloseWithCode:(long long)a2 reason:(id)a3;
- (void)URLSession:(id)a0 webSocketTask:(id)a1 didOpenWithProtocol:(id)a2;

@end
