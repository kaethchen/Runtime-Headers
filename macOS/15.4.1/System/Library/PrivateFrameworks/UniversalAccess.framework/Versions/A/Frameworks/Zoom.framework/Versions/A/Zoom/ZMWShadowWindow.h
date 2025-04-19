@class NSMutableDictionary;

@interface ZMWShadowWindow : ZMWWindow {
    NSMutableDictionary *_shadowLayers;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)enableShadow:(BOOL)a0 forView:(id)a1 withRadius:(double)a2;
- (void)updateAllShadows;
- (void)updateShadowForView:(id)a0;

@end
