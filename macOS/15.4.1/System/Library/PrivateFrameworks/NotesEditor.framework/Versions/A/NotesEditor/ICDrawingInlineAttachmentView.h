@class ICDrawingInlineView;

@interface ICDrawingInlineAttachmentView : ICAttachmentView

@property (retain, nonatomic) ICDrawingInlineView *drawingInlineView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundsForDisplay;

- (void)dealloc;
- (void).cxx_destruct;
- (id)accessibilityHelp;
- (void)setAttachment:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)cancelDidScrollIntoVisibleRange;
- (void)didChangeSize;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (id)initWithTextAttachment:(id)a0 textContainer:(id)a1 forManualRendering:(BOOL)a2;
- (void)setAttachmentContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)didTapAttachment:(id)a0;
- (id)icaxTypeDescription;
- (void)sharedInit:(BOOL)a0;
- (BOOL)shouldAddPanGesture;
- (BOOL)shouldIncludeAttachmentTitleInAXLabel;

@end
