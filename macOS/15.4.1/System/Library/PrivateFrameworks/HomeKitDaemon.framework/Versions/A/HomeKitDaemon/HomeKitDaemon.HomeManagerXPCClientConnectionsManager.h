@class OS_dispatch_queue, NSUUID;

@interface HomeKitDaemon.HomeManagerXPCClientConnectionsManager : NSObject <HMFMessageReceiver, HMDHomeManagerXPCClientConnectionsManager> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ messageDispatcher;
    void /* unknown type, empty encoding */ accessoryBrowser;
    void /* unknown type, empty encoding */ xpcTransport;
    void /* unknown type, empty encoding */ logEventSubmitter;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ messageTargetUUID;
    void /* unknown type, empty encoding */ lockedState;
}

@property (nonatomic, readonly) OS_dispatch_queue *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) BOOL hasActiveConnections;

- (id)init;
- (void).cxx_destruct;
- (void)configure;
- (void)handleActiveAssertionUpdateStateMessage:(id)a0;
- (void)handleProcessInfoStateChangedNotification:(id)a0;
- (void)handleXPCConnectionDidInvalidateNotification:(id)a0;
- (void)handleXPCConnectionDidStartNotification:(id)a0;

@end
