@class NSToolbarSpaceItem;

@interface _NSToolbarSpace : NSView {
    BOOL _inPalette;
}

@property BOOL inPalette;
@property (weak) NSToolbarSpaceItem *spaceItem;
@property unsigned long long controlSize;

- (void).cxx_destruct;
- (Class)_classToCheckForWantsUpdateLayer;
- (struct __CFString { } *)_currentCoreUIWidget;
- (void)_drawToolbarSpaceInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_drawsNothing;
- (BOOL)_shouldDrawSpace;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)ignoreHitTest;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 forSpaceItem:(id)a1;
- (BOOL)isSpaceItem;
- (BOOL)preservesContentDuringLiveResize;
- (void)updateLayer;

@end
