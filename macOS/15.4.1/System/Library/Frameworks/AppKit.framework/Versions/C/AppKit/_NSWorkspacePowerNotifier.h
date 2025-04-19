@class NSObject, NSWorkspaceNotificationCenter;
@protocol OS_dispatch_queue;

@interface _NSWorkspacePowerNotifier : NSObject {
    NSWorkspaceNotificationCenter *_workspaceCenter;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    struct IONotificationPort { } *_notificationPort;
    unsigned int _notifierReference;
    unsigned int _powerConnection;
    unsigned long long _userActivityLevelNotificationHandle;
    int _currentPowerState;
    unsigned long long _lastUserActivityLevel;
    unsigned int _lastPowerMessage;
    BOOL _isInvalid;
    BOOL _shouldInvalidateWhenInvalidatable;
    unsigned long long _invalidationDisableCount;
}

- (void)dealloc;
- (void)invalidate;
- (id)initWithWorkspaceNotificationCenter:(id)a0;

@end
