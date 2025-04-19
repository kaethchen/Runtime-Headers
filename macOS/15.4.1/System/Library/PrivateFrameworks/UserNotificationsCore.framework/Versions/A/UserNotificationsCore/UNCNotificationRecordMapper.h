@class NSString;
@protocol UNSNotificationCategoryRepository, UNCNotificationBundle;

@interface UNCNotificationRecordMapper : NSObject {
    id<UNCNotificationBundle> _bundle;
    id<UNSNotificationCategoryRepository> _categoryRepository;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)_notificationCommunicationContextForNotificationRecord:(id)a0;
- (id)_notificationContentForNotificationRecord:(id)a0;
- (id)_notificationIconForNotificationRecord:(id)a0;
- (unsigned long long)_notificationInterruptionLevelForNotificationRecord:(id)a0;
- (id)_notificationSoundForNotificationRecord:(id)a0;
- (id)_notificationTriggerForNotificationRecord:(id)a0;
- (id)initWithBundle:(id)a0 categoryRepository:(id)a1;
- (id)notificationForNotificationRecord:(id)a0;
- (id)notificationRequestForNotificationRecord:(id)a0;

@end
