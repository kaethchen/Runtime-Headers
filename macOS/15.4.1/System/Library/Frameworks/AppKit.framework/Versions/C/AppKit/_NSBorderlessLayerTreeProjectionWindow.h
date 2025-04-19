@class CALayer;

@interface _NSBorderlessLayerTreeProjectionWindow : NSWindow

@property (readonly) CALayer *rootLayer;

- (BOOL)_ignoredForScripting;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)orderWindow:(long long)a0 relativeTo:(long long)a1;

@end
