@protocol IMDaemonProtocol;

@interface IMDaemonConnection : NSObject <IMDaemonConnectionManaging> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ setupQueue;
    void /* unknown type, empty encoding */ isInvokingSetup;
    void /* unknown type, empty encoding */ listener;
}

@property (nonatomic, readonly) BOOL isConnected;
@property (nonatomic, readonly) id<IMDaemonProtocol> remoteObjectProxy;
@property (nonatomic, readonly) id<IMDaemonProtocol> synchronousRemoteObjectProxy;
@property (nonatomic, copy) id /* block */ onSetupComplete;

- (id)init;
- (void).cxx_destruct;
- (void)disconnect;
- (id)initWithListener:(id)a0;
- (void)connectWithCapabilities:(unsigned long long)a0 context:(id)a1 contextChanged:(BOOL)a2;
- (void)requestSetup;
- (void)requestSetupIfNeededWithCompletionHandler:(void (^)(void))a0;
- (void)waitForSetup;

@end
