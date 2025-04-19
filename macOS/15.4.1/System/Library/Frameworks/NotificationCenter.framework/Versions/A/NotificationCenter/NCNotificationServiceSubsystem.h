@class NSString, NCNotificationExtensionContext;
@protocol NCNotificationHostProtocol;

@interface NCNotificationServiceSubsystem : NCRemoteViewServiceSubsystem <NCNotificationServiceProtocol>

@property (readonly, nonatomic) NCNotificationExtensionContext *notificationExtensionContext;
@property (readonly, nonatomic) id<NCNotificationHostProtocol> notificationHost;
@property (readonly, nonatomic) BOOL fullCustomizationAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)viewControllerClass;
- (void)notificationServiceUpdateNotification:(id)a0;
- (void)remoteViewServiceConfigure:(id)a0 reply:(id /* block */)a1;

@end
