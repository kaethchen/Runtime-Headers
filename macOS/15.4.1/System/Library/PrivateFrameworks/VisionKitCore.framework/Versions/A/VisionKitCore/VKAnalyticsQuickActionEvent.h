@class NSString;

@interface VKAnalyticsQuickActionEvent : VKAnalyticsEvent

@property (nonatomic) long long eventType;
@property (nonatomic) long long quickActionsCount;
@property (retain, nonatomic) NSString *quickActionType;
@property (nonatomic) long long textLength;

- (id)description;
- (void).cxx_destruct;
- (long long)type;
- (id)eventKey;
- (id)coreAnalyticsDictionary;
- (id)initWithQuickActionType:(id)a0 quickActionsCount:(long long)a1 textLength:(long long)a2 eventType:(long long)a3 customIdentifier:(id)a4;

@end
