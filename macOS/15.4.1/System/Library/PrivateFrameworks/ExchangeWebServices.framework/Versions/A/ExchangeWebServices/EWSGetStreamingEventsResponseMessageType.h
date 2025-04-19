@class NSArray;

@interface EWSGetStreamingEventsResponseMessageType : EWSResponseMessageType

@property (copy, nonatomic) NSArray *Notifications;
@property (copy, nonatomic) NSArray *ErrorSubscriptionIds;
@property (nonatomic) BOOL ConnectionStatus;

+ (id)definition;

- (void).cxx_destruct;

@end
