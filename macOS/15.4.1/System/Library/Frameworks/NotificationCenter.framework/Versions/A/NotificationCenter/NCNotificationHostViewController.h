@class NCRemoteNotificationPlugIn, NSString;
@protocol NCNotificationHostViewControllerDelegate;

@interface NCNotificationHostViewController : NCRemoteViewHostViewController <NCNotificationHostProtocol>

@property (weak, nonatomic) id<NCNotificationHostViewControllerDelegate> delegate;
@property (readonly, nonatomic) NCRemoteNotificationPlugIn *notificationPlugIn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })maxSize;
- (id)initWithPlugin:(id)a0;
- (void)notificationCloseWithActivation:(long long)a0 actionIdentifier:(id)a1;
- (void)remoteViewReadyWithConfiguration:(id)a0;
- (void)remoteViewSetupConfiguration:(id)a0;

@end
