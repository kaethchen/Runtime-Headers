@class NSView, NSImageView, NSTextField;

@interface GKNotificationBannerWindow : NSWindow {
    NSTextField *label;
}

@property NSView *iconContainerView;
@property (retain) NSView *contentView;
@property (retain) NSImageView *iconView;
@property (retain) NSImageView *avatarImageView;
@property BOOL canTransitionToPlayerAvatar;
@property (copy, nonatomic) id /* block */ touchHandler;

+ (id)queue;
+ (id)semaphore;
+ (id)notificationBannerWithTitle:(id)a0 message:(id)a1;

- (void).cxx_destruct;
- (id)icon;
- (void)sendEvent:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1;
- (void)setIcon:(id)a0;
- (void)showWithCompletionHandler:(id /* block */)a0;
- (void)showForDuration:(double)a0 withCompletionHandler:(id /* block */)a1;
- (void)hideAnimatedWithHandler:(id /* block */)a0;
- (void)prepareForTransitionToPlayerAvatarWithImage:(id)a0;
- (void)showPlayerAvatarAnimationWithCompletionHandler:(id /* block */)a0;
- (void)startLoadingPlayerAvatar;
- (void)transitionToPlayerAvatar;

@end
