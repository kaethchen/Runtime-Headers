@class NSDictionary;

@interface ATXNotificationSenderImportanceWeights : NSObject {
    NSDictionary *_notificationSenderImportanceWeights;
}

- (id)init;
- (void).cxx_destruct;
- (double)interactedWithNotificationToday;
- (double)frequencyOfInteractionWithNotification;
- (double)speedOfResponseToNotification;

@end
