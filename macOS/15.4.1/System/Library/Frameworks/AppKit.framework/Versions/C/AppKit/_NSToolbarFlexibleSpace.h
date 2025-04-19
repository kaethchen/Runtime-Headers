@class NSToolbarFlexibleSpaceItem;

@interface _NSToolbarFlexibleSpace : NSView {
    BOOL _inPalette;
}

@property BOOL inPalette;
@property (weak) NSToolbarFlexibleSpaceItem *spaceItem;
@property unsigned long long controlSize;

- (void).cxx_destruct;
- (BOOL)_shouldDrawFlexibleSpaceOutline;
- (Class)_classToCheckForWantsUpdateLayer;
- (struct __CFString { } *)_currentCoreUIWidget;
- (void)_drawToolbarFlexibleSpaceInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_drawsNothing;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)ignoreHitTest;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 forSpaceItem:(id)a1;
- (BOOL)preservesContentDuringLiveResize;
- (void)updateLayer;

@end
