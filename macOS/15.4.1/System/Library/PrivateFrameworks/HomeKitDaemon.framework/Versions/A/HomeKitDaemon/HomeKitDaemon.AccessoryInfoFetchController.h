@class NSUUID;

@interface HomeKitDaemon.AccessoryInfoFetchController : NSObject <HMFMessageReceiver> {
    void /* unknown type, empty encoding */ messageTargetUUID;
    void /* unknown type, empty encoding */ messageDispatcher;
    void /* unknown type, empty encoding */ remoteEventRouterClientController;
}

@property (nonatomic, copy) NSUUID *messageTargetUUID;
@property (nonatomic, retain) void /* unknown type, empty encoding */ messageReceiveQueue;

- (id)init;
- (void).cxx_destruct;
- (void)handleFetchWithMessage:(id)a0;

@end
