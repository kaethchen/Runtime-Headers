@class NSString, NSDate;

@interface ATXNotificationSuggestionFeedbackHistoryQueryResult : NSObject

@property (retain, nonatomic) NSString *feedbackKey;
@property (nonatomic) long long latestOutcome;
@property (retain, nonatomic) NSDate *createdTimestamp;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFeedbackKey:(id)a0 latestOutcome:(long long)a1 createdTimestamp:(id)a2;

@end
