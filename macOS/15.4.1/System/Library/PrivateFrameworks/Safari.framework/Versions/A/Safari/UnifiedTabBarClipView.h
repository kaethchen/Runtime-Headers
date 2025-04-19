@interface UnifiedTabBarClipView : NSClipView

@property (nonatomic) BOOL shouldChangeNextScrollFromVerticalToHorizontal;

- (BOOL)_scrollTo:(const struct CGPoint { double x0; double x1; } *)a0 animateScroll:(long long)a1 flashScrollerKnobs:(unsigned long long)a2;

@end
