@class AXDispatchTimer;
@protocol HUSessionManagerDelegate;

@interface HUSessionManager : NSObject {
    struct IONotificationPort { } *_notificationPort;
    unsigned int _notifierReference;
}

@property unsigned int powerConnection;
@property (retain) AXDispatchTimer *sleepCallbackTimer;
@property (nonatomic) BOOL isMacSleep;
@property (weak, nonatomic) id<HUSessionManagerDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)registerForSessionNotifications;
- (void)unregisterForSessionNotifications;
- (void)userLoggedOut:(id)a0;

@end
