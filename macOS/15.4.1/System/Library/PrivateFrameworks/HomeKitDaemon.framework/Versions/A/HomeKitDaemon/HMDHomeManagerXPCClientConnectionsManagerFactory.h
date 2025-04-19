@interface HMDHomeManagerXPCClientConnectionsManagerFactory : NSObject

+ (id)makeInstanceWithQueue:(id)a0 messageDispatcher:(id)a1 messageTargetUUID:(id)a2 accessoryBrowser:(id)a3 logEventSubmitter:(id)a4;

- (id)init;

@end
