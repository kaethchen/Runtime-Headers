@class NSView, NSImageView, NSTextField;

@interface CLSNotificationBannerWindow : NSWindow

@property (weak, nonatomic) NSView *contentView;
@property (weak, nonatomic) NSView *iconContainerView;
@property (weak, nonatomic) NSImageView *iconView;
@property (weak, nonatomic) NSTextField *label;

+ (id)bundle;
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

@end
