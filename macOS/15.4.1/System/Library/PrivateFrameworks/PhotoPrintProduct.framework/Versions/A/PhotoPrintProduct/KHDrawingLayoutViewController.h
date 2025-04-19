@class NSString, KHLayout, KHCanvasViewController, KHDrawingLayoutView;

@interface KHDrawingLayoutViewController : UXViewController <KHSelectionViewControllerDelegate>

@property (retain, nonatomic) KHLayout *layout;
@property (readonly, nonatomic) KHDrawingLayoutView *layoutView;
@property (weak, nonatomic) KHCanvasViewController *layoutController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (void).cxx_destruct;
- (void)selectionViewController:(id)a0 didBeginEditingSelection:(id)a1;
- (void)selectionViewController:(id)a0 didClickOnRelatedPhotosButtonWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 selection:(id)a2;
- (void)selectionViewController:(id)a0 didClickOnSimilarPhotosButtonWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 selection:(id)a2;
- (void)selectionViewController:(id)a0 didModifySelection:(id)a1;
- (BOOL)selectionViewController:(id)a0 shouldAddSelection:(id)a1;
- (void)selectionViewController:(id)a0 willAddSelection:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionViewController:(id)a0 willApplyResize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toSelection:(id)a2;
- (void)selectionViewController:(id)a0 willApplyRotation:(double)a1 toSelection:(id)a2;
- (struct CGPoint { double x0; double x1; })selectionViewController:(id)a0 willApplyTranslation:(struct CGPoint { double x0; double x1; })a1 toSelection:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionViewController:(id)a0 willEndEditingSelection:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)selectionViewController:(id)a0 willRemoveSelection:(id)a1;

@end
