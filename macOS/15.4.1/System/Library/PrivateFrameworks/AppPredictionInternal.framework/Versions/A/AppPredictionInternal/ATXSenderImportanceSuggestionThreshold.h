@class NSDictionary;

@interface ATXSenderImportanceSuggestionThreshold : NSObject {
    NSDictionary *_senderImportanceSuggestionThreshold;
}

- (id)init;
- (void).cxx_destruct;
- (double)mailSenderImportanceThreshold;
- (double)messageSenderImportanceThreshold;
- (double)notificationSenderImportanceThreshold;

@end
