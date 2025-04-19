@interface ATXPrivacyReset : NSObject {
    id _resetPrivacyWarningsNotificationToken;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_handlePrivacyResetNotification;
- (BOOL)_placeholderExists;
- (id)_placeholderPath;
- (void)_registerForResetPrivacyWarningsNotification;
- (void)_removeAllAppActionData;
- (void)_removeAllBlendingUICaches;
- (void)_writeDeletionPlaceholder;

@end
