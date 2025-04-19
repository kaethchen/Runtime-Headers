@interface _TtCC7SwiftUI17HostingScrollView17PlatformContainer : NSView {
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ safeAreaHelper;
    void /* unknown type, empty encoding */ recursiveIgnoreHitTest;
    void /* unknown type, empty encoding */ customAcceptsFirstMouse;
    void /* unknown type, empty encoding */ currentHitTestingCacheKey;
}

@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } _safeAreaInsets;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } computedSafeAreaInsets;

+ (BOOL)automaticallyTracksDependenciesOn_safeAreaInsets;
+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })default_safeAreaInsets;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_nextResponderForEvent:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;

@end
