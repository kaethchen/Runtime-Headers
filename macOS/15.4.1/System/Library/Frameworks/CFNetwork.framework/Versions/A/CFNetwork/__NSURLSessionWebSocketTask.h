@class NSString, NSData, NSError, NSMutableArray, NSObject;
@protocol OS_nw_protocol_options;

@interface __NSURLSessionWebSocketTask : __NSCFLocalSessionTask {
    BOOL _webSocketHandshakeCompleted;
    BOOL _readInProgress;
    int _pingSeed;
    NSMutableArray *_pendingSendWork;
    NSMutableArray *_pendingReceiveWork;
    NSMutableArray *_highPriorityPendingWork;
    NSMutableArray *_delegateWork;
    NSError *_webSocketError;
    NSString *_protocolPicked;
    NSObject<OS_nw_protocol_options> *_wsOptions;
}

@property long long maximumMessageSize;
@property (readonly) long long closeCode;
@property (readonly, copy) NSData *closeReason;

- (void)dealloc;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)receiveMessageWithCompletionHandler:(id /* block */)a0;
- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)_onqueue_cancel;
- (void)sendPingWithPongReceiveHandler:(id /* block */)a0;
- (void)_onqueue_resume;
- (void)_onqueue_didReceiveResponse:(id)a0 completion:(id /* block */)a1;
- (void)_sendCloseCode:(long long)a0 reason:(id)a1;
- (void)cancelWithCloseCode:(long long)a0 reason:(id)a1;
- (void)connection:(id)a0 didFinishLoadingWithError:(id)a1;
- (id)initWithOriginalRequest:(id)a0 ident:(unsigned long long)a1 taskGroup:(id)a2;

@end
