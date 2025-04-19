@class NSBundle;

@interface SOUserNotificationHelper : NSObject

@property (retain, nonatomic) NSBundle *bundle;

+ (id)sharedHelper;

- (id)init;
- (void).cxx_destruct;
- (id)_firstImageForMessage:(id)a0;
- (id)_userNotificationWithTitle:(id)a0 subtitle:(id)a1 infomativeText:(id)a2 actionButtonTitle:(id)a3 otherButtonTitle:(id)a4 userInfo:(id)a5 identifier:(id)a6 date:(id)a7 sound:(id)a8 peopleIdentifiers:(id)a9 buddyImage:(id)a10 attachedImage:(id)a11 responsePlaceholder:(id)a12 serviceIsiMessage:(BOOL)a13 emojiSubstitutionEnabled:(BOOL)a14 isBusiness:(BOOL)a15;
- (void)clearAllUserNotificationsForGuid:(id)a0;
- (void)postAlertNotificationMentioningMeInChat:(id)a0 message:(id)a1;
- (void)postUserNotification:(id)a0;
- (id)subtitleForChatRoom:(id)a0;
- (id)userNotificationForChat:(id)a0 sound:(id)a1;
- (id)userNotificationForMessage:(id)a0 chat:(id)a1 sound:(id)a2 buddyImage:(id)a3;

@end
