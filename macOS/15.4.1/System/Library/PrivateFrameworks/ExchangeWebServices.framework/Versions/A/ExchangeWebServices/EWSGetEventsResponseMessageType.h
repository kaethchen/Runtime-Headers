@class EWSNotificationType;

@interface EWSGetEventsResponseMessageType : EWSResponseMessageType

@property (retain, nonatomic) EWSNotificationType *Notification;

+ (id)definition;

- (void).cxx_destruct;

@end
