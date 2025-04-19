@interface SystemPowerNotifier : NSObject {
    id _delegate;
    unsigned int _notifier;
    struct IONotificationPort { } *_notificationPort;
}

@property unsigned int rootConnection;

+ (id)systemPowerNotifierWithTarget:(id)a0;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (BOOL)notifyDelegate:(unsigned int)a0;

@end
