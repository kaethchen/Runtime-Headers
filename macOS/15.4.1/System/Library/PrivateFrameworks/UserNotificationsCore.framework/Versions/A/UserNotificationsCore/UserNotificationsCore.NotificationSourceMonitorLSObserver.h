@interface UserNotificationsCore.NotificationSourceMonitorLSObserver : NSObject <LSApplicationWorkspaceObserverProtocol, NSCacheDelegate> {
    void /* unknown type, empty encoding */ workspace;
    void /* unknown type, empty encoding */ delegateQueue;
    void /* unknown type, empty encoding */ delegate;
}

- (id)init;
- (void).cxx_destruct;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)applicationsDidInstall:(id)a0;
- (void)applicationsDidUninstall:(id)a0;

@end
