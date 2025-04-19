@interface RemindersUICore.TTRCloudKitNetworkActivityMonitor : NSObject <REMXPCDaemonControllerCloudKitNetworkActivityDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ executeToken;
}

- (id)init;
- (void).cxx_destruct;
- (void)cloudKitNetworkActivityDidChange:(id)a0;

@end
