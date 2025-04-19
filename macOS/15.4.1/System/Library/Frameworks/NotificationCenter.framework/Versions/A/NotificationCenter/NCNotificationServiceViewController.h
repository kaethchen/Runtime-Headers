@class NCNotificationServiceSubsystem;

@interface NCNotificationServiceViewController : NCRemoteViewServiceViewController

@property (readonly, nonatomic) NCNotificationServiceSubsystem *notificationService;

- (id)readyContext;

@end
