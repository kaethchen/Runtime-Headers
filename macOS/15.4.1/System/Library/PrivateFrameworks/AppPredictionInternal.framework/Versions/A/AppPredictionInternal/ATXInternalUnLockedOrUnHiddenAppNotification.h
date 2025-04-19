@class _ATXInternalNotification;

@interface ATXInternalUnLockedOrUnHiddenAppNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithUnLockedOrUnHiddenApps:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)registerForNotificationsWithUnLockedOrUnHiddenAppBlock:(id /* block */)a0;

@end
