@interface LUI2ScrollViewWithOverlayScrollers : NSScrollView

@property (class) BOOL allowResponsiveScrolling;

+ (BOOL)isCompatibleWithResponsiveScrolling;

- (void)setScrollerStyle:(long long)a0;

@end
