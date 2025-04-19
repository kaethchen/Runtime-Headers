@class NSImage;

@interface GameCenterUI.AvatarView : GameCenterUI.BaseView

@property (nonatomic, readonly) void /* unknown type, empty encoding */ artworkView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ arcadeBadgeView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ messagesBadgeView;
@property (nonatomic, retain) NSImage *image;
@property (nonatomic, retain) NSImage *avatarImage;
@property (nonatomic) void /* unknown type, empty encoding */ isArcadeSubscriber;
@property (nonatomic) void /* unknown type, empty encoding */ showMessagesBadge;

- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showWithImage:(id)a0 isAnimationPermitted:(BOOL)a1;
- (void)addBorderWithBorderWidth:(double)a0 color:(id)a1;
- (void)setImageWithImage:(id)a0 animated:(BOOL)a1;
- (void)showWithAvatarImage:(id)a0 isAnimationPermitted:(BOOL)a1;

@end
