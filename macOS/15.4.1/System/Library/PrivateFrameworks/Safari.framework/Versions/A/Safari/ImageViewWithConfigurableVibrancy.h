@interface ImageViewWithConfigurableVibrancy : NSImageView {
    BOOL _allowsVibrancy;
}

- (BOOL)allowsVibrancy;
- (void)setAllowsVibrancy:(BOOL)a0;
- (BOOL)wantsUpdateLayer;

@end
