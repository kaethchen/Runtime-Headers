@interface SRFClamshellStateNotifier : NSObject {
    struct __CFRunLoopSource { } *_ioRunLoopSource;
    struct IONotificationPort { } *_notifyPort;
    unsigned int _notification;
    unsigned int _rootService;
}

@property (getter=isInClamshellMode) BOOL clamshellState;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)registerForClamshellNotification;

@end
