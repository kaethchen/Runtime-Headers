@class NSColor, NSObject;
@protocol OS_dispatch_queue, _UNNotificationContentExtensionHostContextDelegate;

@interface _UNNotificationContentExtensionHostContext : NSExtensionContext <_UNNotificationExtensionHostInterface, _UNNotificationExtensionVendorInterface>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, getter=isDelegateQueueSuspended) BOOL delegateQueueSuspended;
@property (nonatomic) BOOL wantsToBecomeFirstResponder;
@property (nonatomic) BOOL wantsToReceiveActionResponses;
@property (nonatomic) unsigned long long playPauseMediaButtonType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } playPauseMediaButtonFrame;
@property (retain, nonatomic) NSColor *playPauseMediaButtonColor;
@property (weak, nonatomic) id<_UNNotificationContentExtensionHostContextDelegate> delegate;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithInputItems:(id)a0 listenerEndpoint:(id)a1 contextUUID:(id)a2;
- (void)_extensionRequestsDefaultAction;
- (void)_resumeDelegateQueueIfNecessary;
- (void)didReceiveNotificationResponse:(id)a0;
- (void)_extensionDidCompleteNotificationResponse:(id)a0 withOption:(unsigned long long)a1;
- (void)_extensionDidUpdateNotificationActions:(id)a0;
- (void)_extensionDidUpdatePlayPauseMediaButton;
- (void)_extensionDidUpdateTitle:(id)a0;
- (void)_extensionMediaPlayingPaused;
- (void)_extensionMediaPlayingStarted;
- (void)_extensionRequestsDismiss;
- (void)_extensionSetPlayPauseMediaButtonColor:(id)a0;
- (void)_extensionSetPlayPauseMediaButtonFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_extensionSetPlayPauseMediaButtonType:(unsigned long long)a0;
- (void)_extensionUpdatedContentSize:(struct CGSize { double x0; double x1; })a0 sendRight:(id)a1;
- (void)_extensionUpdatedPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_extensionWantsToBecomeFirstResponder:(BOOL)a0;
- (void)_extensionWantsToReceiveActionResponses:(BOOL)a0;
- (void)_hostDidReceiveNotification:(id)a0;
- (void)_hostDidReceiveNotificationResponse:(id)a0;
- (void)_hostDidReceiveNotificationResponse:(id)a0 completionHandler:(id /* block */)a1;
- (void)_hostWantsMediaToPause;
- (void)_hostWantsMediaToPlay;
- (void)_hostWantsToPreserveInputViews;
- (void)_hostWantsToRestoreInputViews;
- (void)_hostWantsToUpdateMediaPlayPauseButton;
- (void)didReceiveNotification:(id)a0;
- (void)didReceiveNotificationResponse:(id)a0 completionHandler:(id /* block */)a1;
- (void)mediaPause;
- (void)mediaPlay;
- (void)preserveInputViews;
- (void)restoreInputViews;
- (void)updateMediaPlayPauseButton;

@end
