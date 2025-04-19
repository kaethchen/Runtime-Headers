@class NSNumber;

@interface RTHintManagerNotificationDidUpdate : RTNotification

@property (retain, nonatomic) NSNumber *hintSourcesUpdated;

+ (id)sourcesUpdatedForHints:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithHints:(id)a0;

@end
