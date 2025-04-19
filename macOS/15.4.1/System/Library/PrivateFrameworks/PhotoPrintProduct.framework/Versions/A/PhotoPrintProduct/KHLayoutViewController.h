@class KHLayoutManager, KHLayout, KHGridView, KHLayoutView, NSButton, NSString;
@protocol KHLayoutViewControllerDelegate;

@interface KHLayoutViewController : UXViewController <KHFrameViewContainerDelegate, KHLayoutViewDelegate, KHSelectionViewControllerDelegate>

@property (retain, nonatomic) KHLayoutManager *layoutManager;
@property (retain, nonatomic) KHGridView *gridView;
@property (retain) NSButton *accessoryButton;
@property (retain, nonatomic) KHLayout *layout;
@property (readonly, nonatomic) KHLayoutView *layoutView;
@property (weak, nonatomic) id<KHLayoutViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLayout:(id)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)willStartAnimation;
- (void)didEndAnimation;
- (void)_selectionViewController:(id)a0 updateGeometryForSelection:(id)a1 forView:(id)a2;
- (void)_updateOverlayButtonsForSelection:(id)a0;
- (void)frameViewContainer:(id)a0 didAddFrameView:(id)a1;
- (void)frameViewContainer:(id)a0 didPlaceFrameView:(id)a1;
- (void)frameViewContainer:(id)a0 willRemoveFrameView:(id)a1;
- (id)selectionManagerForLayoutView:(id)a0;
- (void)selectionViewController:(id)a0 didBeginEditingSelection:(id)a1;
- (void)selectionViewController:(id)a0 didModifySelection:(id)a1;
- (BOOL)selectionViewController:(id)a0 shouldAddSelection:(id)a1;
- (void)selectionViewController:(id)a0 willAddSelection:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionViewController:(id)a0 willApplyResize:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toSelection:(id)a2;
- (void)selectionViewController:(id)a0 willApplyRotation:(double)a1 toSelection:(id)a2;
- (struct CGPoint { double x0; double x1; })selectionViewController:(id)a0 willApplyTranslation:(struct CGPoint { double x0; double x1; })a1 toSelection:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionViewController:(id)a0 willEndEditingSelection:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)selectionViewController:(id)a0 willRemoveSelection:(id)a1;

@end
