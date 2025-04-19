@class RTDarwinNotificationHelper;

@interface RTUserSessionMonitor_OSX : RTUserSessionMonitor {
    RTDarwinNotificationHelper *_notificationHelper;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (unsigned int)uid;
- (void)_handleUserSessionChange;
- (BOOL)activeUser;
- (void)handleUserSessionChange;
- (id)initWithNotificationHelper:(id)a0;

@end
