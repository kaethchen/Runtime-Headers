@class NSString, KHSelectionLayer, NSClickGestureRecognizer, KHSelectionManager, KHSelectionView, UXView, NSPanGestureRecognizer;
@protocol KHSelectionViewControllerDelegate;

@interface KHSelectionViewController : UXViewController <KHSelectionViewDelegate, KHSelectionObserver>

@property (retain, nonatomic) NSClickGestureRecognizer *clickRecognizer;
@property (retain, nonatomic) NSPanGestureRecognizer *panRecognizer;
@property (retain, nonatomic) KHSelectionLayer *panSelectionLayer;
@property (nonatomic) unsigned long long panSelectionResizeType;
@property (readonly, nonatomic) KHSelectionManager *selectionManager;
@property (readonly, nonatomic) KHSelectionView *selectionView;
@property (readonly, nonatomic) UXView *accessoryView;
@property (weak, nonatomic) id<KHSelectionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)pan:(id)a0;
- (void)click:(id)a0;
- (id)initWithSelectionManager:(id)a0;
- (void)setupGestureRecognizers;
- (id)_selectionLayerAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)addSelectionLayerForSelection:(id)a0;
- (id)findNextSiblingBelowPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)reloadSelections;
- (void)resizeSelectable:(id)a0;
- (id)selectionLayerForSelection:(id)a0;
- (void)selectionManager:(id)a0 didAddSelections:(id)a1;
- (void)selectionManager:(id)a0 didModifySelections:(id)a1;
- (void)selectionManager:(id)a0 didRemoveSelections:(id)a1;
- (id)selectionManagerForSelectionView:(id)a0;
- (BOOL)selectionView:(id)a0 shouldHandleEvent:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)translateSelectable:(id)a0;

@end
