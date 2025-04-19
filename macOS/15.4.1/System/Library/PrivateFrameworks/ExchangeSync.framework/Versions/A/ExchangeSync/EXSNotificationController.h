@class NSObject;
@protocol EXSNotificationControllerDelegate;

@interface EXSNotificationController : NSObject

@property (nonatomic) int notificationRegistrationToken;
@property (nonatomic) BOOL hasValidNotificationRegistrationToken;
@property (weak, nonatomic) NSObject<EXSNotificationControllerDelegate> *delegate;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (void)stopListeningForNotifications;
- (void)startListeningForNotifications;

@end
