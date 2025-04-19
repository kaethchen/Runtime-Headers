@class NSMutableDictionary;

@interface WLKPushNotificationMetricsManager : NSObject

@property (readonly, copy, nonatomic) NSMutableDictionary *displayCriteria;

- (void).cxx_destruct;
- (id)_stringFromNotificationSetting:(long long)a0;
- (id)_createDisplayCriteriaFromSettings:(id)a0;
- (id)initWithNotificationSettings:(id)a0 notificationSettingsForTopic:(id)a1;

@end
