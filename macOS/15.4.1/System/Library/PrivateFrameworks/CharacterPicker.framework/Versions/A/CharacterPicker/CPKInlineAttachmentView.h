@class CPKCalculatedGeometry, STKStickerView, NSString, STKImageGlyph;

@interface CPKInlineAttachmentView : CPKDraggableView <NSPasteboardWriting>

@property (retain, nonatomic) STKStickerView *stickerView;
@property (retain, nonatomic) CPKCalculatedGeometry *geometry;
@property (nonatomic) struct CGImage { } *image;
@property (readonly, nonatomic) BOOL placeholderViewIsShown;
@property (readonly, nonatomic) STKImageGlyph *imageGlyph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)accessibilityLabel;
- (void)didCloseMenu:(id)a0 withEvent:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })draggingFrame;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)menuForEvent:(id)a0;
- (id)pasteboardPropertyListForType:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void)willOpenMenu:(id)a0 withEvent:(id)a1;
- (id)writableTypesForPasteboard:(id)a0;
- (unsigned long long)writingOptionsForType:(id)a0 pasteboard:(id)a1;
- (id)tooltipString;
- (void)didSelectDelete:(id)a0;
- (void)didSelectID:(id)a0;
- (void)didSelectNewEmoji:(id)a0;
- (id)draggingImage;
- (id)initWithStickerView:(id)a0 geometry:(id)a1;
- (id)pasteboardWriter;
- (void)showTooltip;

@end
