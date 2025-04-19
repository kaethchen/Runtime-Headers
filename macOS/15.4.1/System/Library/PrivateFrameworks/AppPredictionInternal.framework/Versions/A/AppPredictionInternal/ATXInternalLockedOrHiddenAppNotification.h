@class _ATXInternalNotification;

@interface ATXInternalLockedOrHiddenAppNotification : NSObject {
    _ATXInternalNotification *_note;
}

+ (void)postNotificationWithLockedOrHiddenApps:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)registerForNotificationsWithLockedOrHiddenAppBlock:(id /* block */)a0;

@end
