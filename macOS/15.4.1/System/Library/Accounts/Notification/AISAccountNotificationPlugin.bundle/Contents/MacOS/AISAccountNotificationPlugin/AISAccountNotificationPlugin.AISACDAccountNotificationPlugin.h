@interface AISAccountNotificationPlugin.AISACDAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin> {
    void /* unknown type, empty encoding */ signOutInProgressQueue;
    void /* unknown type, empty encoding */ _isSignOutInProgress;
}

- (id)init;
- (void).cxx_destruct;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;

@end
