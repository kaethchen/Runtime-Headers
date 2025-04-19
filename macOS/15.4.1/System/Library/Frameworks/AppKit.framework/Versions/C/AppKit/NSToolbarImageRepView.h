@class NSArray, NSString, NSBitmapImageRep, NSToolbar, NSImageRep;

@interface NSToolbarImageRepView : NSView <NSDraggingSource> {
    NSArray *_itemIdentifiers;
    NSImageRep *_activeImageRep;
    NSImageRep *_inactiveImageRep;
}

@property (weak) NSToolbar *validatedDragDestinationToolbar;
@property (readonly) NSBitmapImageRep *_activeImageRep;
@property (readonly) NSBitmapImageRep *_inactiveImageRep;
@property (readonly, copy) NSArray *_itemIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_computeDragImage;
- (BOOL)_isPaletteView;
- (void)_windowChangedKeyState;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityRoleAttribute;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isOpaque;
- (id)menuForEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)setActiveImageRep:(id)a0 inactiveImageRep:(id)a1 forItemIdentifiers:(id)a2;

@end
