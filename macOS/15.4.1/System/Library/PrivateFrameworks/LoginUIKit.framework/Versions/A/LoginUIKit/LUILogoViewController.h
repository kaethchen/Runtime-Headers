@class CALayer, NSWindow;

@interface LUILogoViewController : LUIViewController {
    CALayer *_appleLogoLayer;
    NSWindow *_grayWindow;
    CALayer *_grayBackgroundLayer;
    CALayer *_grayBackgroundAppleLogoLayer;
    int _layout;
}

+ (id)identifier;
+ (id)controllerWithStyle:(int)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (int)layout;
- (void)setLayout:(int)a0;
- (id)initWithStyle:(int)a0;
- (void)refresh;
- (id)_backgroundLayerWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })_centerPointForLayer:(id)a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_darkGrayAppleLogoLayerInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layoutContentView:(BOOL)a0;
- (void)_releaseGrayWindow;
- (void)_setupContentView;
- (void)_setupGrayWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)hideProgressIndicator;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })progressRect;

@end
