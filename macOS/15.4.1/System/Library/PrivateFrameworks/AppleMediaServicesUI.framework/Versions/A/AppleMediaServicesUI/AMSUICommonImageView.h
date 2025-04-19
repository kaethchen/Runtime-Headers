@class NSColor, NSImageSymbolConfiguration;

@interface AMSUICommonImageView : NSImageView

@property long long contentMode;
@property (copy) NSColor *tintColor;
@property (retain) NSImageSymbolConfiguration *preferredSymbolConfiguration;

+ (id)contentGravityFromContentMode:(long long)a0;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)setImage:(id)a0;
- (void)_setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
