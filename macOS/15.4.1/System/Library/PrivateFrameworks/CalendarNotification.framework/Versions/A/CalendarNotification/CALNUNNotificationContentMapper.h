@class CALNUNNotificationIconMapper;

@interface CALNUNNotificationContentMapper : NSObject

@property (readonly, nonatomic) CALNUNNotificationIconMapper *notificationIconMapper;

+ (id)_calnNotificationSoundFromUNNotificationContent:(id)a0;
+ (id)_sectionIdentifierFromTopicIdentifiers:(id)a0;
+ (void)_setBodyForUNMutableNotificationContent:(id)a0 usingCALNNotificationContent:(id)a1;
+ (void)_setInterruptionLevelForCALNMutableNotificationContent:(id)a0 usingUNNotificationContent:(id)a1;
+ (void)_setInterruptionLevelForUNMutableNotificationContent:(id)a0 usingCALNNotificationContent:(id)a1;
+ (void)_setPeopleIdentifiersForUNMutableNotificationContent:(id)a0 usingCALNNotificationContent:(id)a1;
+ (void)_setSoundForUNMutableNotificationContent:(id)a0 usingCALNNotificationContent:(id)a1;
+ (void)_setSubtitleForUNMutableNotificationContent:(id)a0 usingCALNNotificationContent:(id)a1;
+ (void)_setThreadIdentifierForUNMutableNotificationContent:(id)a0 usingCALNNotificationContent:(id)a1;
+ (void)_setTitleForUNMutableNotificationContent:(id)a0 usingCALNNotificationContent:(id)a1;
+ (void)_setTopicIdentifiersForUNMutableNotificationContent:(id)a0 usingCALNNotificationContent:(id)a1;
+ (void)_setUserInfoForUNMutableNotificationContent:(id)a0 usingCALNNotificationContent:(id)a1;

- (void).cxx_destruct;
- (id)initWithNotificationIconMapper:(id)a0;
- (id)_iconIdentifierFromUNNotificationContent:(id)a0;
- (id)_unNotificationIconFromCALNNotificationContent:(id)a0;
- (id)calnNotificationContentFromUNNotificationContent:(id)a0;
- (id)unNotificationContentFromCALNNotificationContent:(id)a0;

@end
