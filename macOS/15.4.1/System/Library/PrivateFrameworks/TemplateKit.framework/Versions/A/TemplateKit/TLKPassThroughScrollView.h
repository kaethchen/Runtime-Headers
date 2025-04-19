@interface TLKPassThroughScrollView : NUIContentScrollView {
    BOOL _horizontalScrollingDisabled;
}

+ (BOOL)isCompatibleWithResponsiveScrolling;

- (BOOL)drawsBackground;
- (void)scrollWheel:(id)a0;
- (void)setHorizontalScrollingDisabled:(BOOL)a0;

@end
