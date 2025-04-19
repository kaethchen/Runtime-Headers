@interface UserNotificationsCore.SettingsCenterListener : NSObject <UNNotificationSettingsCenterObserver> {
    void /* unknown type, empty encoding */ delegate;
}

- (id)init;
- (void).cxx_destruct;
- (void)userNotificationSettingsCenter:(id)a0 didUpdateNotificationSourceIdentifiers:(id)a1;

@end
