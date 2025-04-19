@class NSMenuWindowManagerBackingStore, NSMenuWindowManagerDrawingHandlerView, NSVisualEffectView, NSMenuWindowManagerWindow;

@interface NSMenuWindowManager : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    NSMenuWindowManagerWindow *_window;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _menuItemsClipRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _selectionMaterialRect;
    struct CGContext { } *_ctx;
    struct CGDisplayList { } *_displayList;
    NSMenuWindowManagerBackingStore *_backingStore;
    double _backingStoreScale;
    NSVisualEffectView *_selectionMaterialView;
    NSMenuWindowManagerDrawingHandlerView *_nonVibrantContentView;
    NSMenuWindowManagerDrawingHandlerView *_vibrantContentView;
    struct CGSRegionObject { } *_nonVibrantBlendingRegion;
}

@property (class, readonly, getter=isEnabled) BOOL enabled;
@property (class, readonly) BOOL providesShadow;

@property (readonly) unsigned int windowID;
@property (readonly) struct CGContext { } *CGContext;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (getter=isFocused) BOOL focused;
@property BOOL usesMenuBarMaterial;
@property BOOL hasDarkAppearance;
@property long long level;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } selectionMaterialRect;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } menuItemsClipRect;
@property (copy) struct CGSRegionObject { } *nonVibrantBlendingRegion;
@property struct CGImage { } *maskImage;

+ (id)managerForWindowID:(unsigned int)a0;
+ (void)saveImage:(struct CGImage { } *)a0;

- (void)dealloc;
- (void)invalidate;
- (void)drawContentViewFromImage:(struct CGImage { } *)a0 clippingRegion:(struct CGSRegionObject { } *)a1 context:(struct CGContext { } *)a2 viewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 visualizeRegion:(BOOL)a4;
- (void)drawSubimage:(struct CGImage { } *)a0 destBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(long long)a2 context:(struct CGContext { } *)a3;
- (void)flush;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 windowRef:(struct OpaqueWindowPtr { } *)a1;
- (void)orderFront;
- (void)orderOut;

@end
