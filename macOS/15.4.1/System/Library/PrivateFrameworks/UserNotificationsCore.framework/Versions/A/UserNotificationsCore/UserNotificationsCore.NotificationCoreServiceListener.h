@interface UserNotificationsCore.NotificationCoreServiceListener : NSObject <BSServiceConnectionListenerDelegate> {
    void /* unknown type, empty encoding */ notificationRepository;
    void /* unknown type, empty encoding */ categoryRepository;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ queue_listener;
    void /* unknown type, empty encoding */ queue_connections;
}

- (id)init;
- (void).cxx_destruct;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;

@end
