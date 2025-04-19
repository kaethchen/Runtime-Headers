@class NSCursor, MUPDFViewBase, NSString, NSMutableSet, NSClipView, PDFDocument;
@protocol MUContentViewControllerDataDelegate;

@interface MUPDFContentViewController : MUContentViewController <PDFAKControllerDelegateProtocol, PDFViewDelegate, PDFDocumentDelegate, MUContentViewControllerProtocol>

@property (retain) NSMutableSet *currentlyObservedCropAnnotations;
@property (retain) NSMutableSet *currentlyObservedPageModelControllers;
@property (retain) PDFDocument *contentPDFDocument;
@property (retain) NSCursor *annotationCursor;
@property (retain) id frameChangedObserver;
@property (weak) NSClipView *pdfScrollViewContentView;
@property (retain) MUPDFViewBase *preloadedView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MUContentViewControllerDataDelegate> dataDelegate;
@property BOOL contentViewControllerCropEnabled;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)teardown;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRect;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)loadView;
- (void)viewDidLoad;
- (void)setup;
- (id)PDFViewWindowForSheet:(id)a0;
- (id)controller:(id)a0 willSetToolbarItems:(id)a1;
- (id)initWithPreloadedView:(id)a0 delegate:(id)a1;
- (void)loadContentWithCompletionBlock:(id /* block */)a0;
- (void)_callBlockAfterWaitingForMouseUpIfNecessary:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })_medianSizeForCurrentDocumentInPDFViewWithGetter:(id /* block */)a0;
- (void)_showPDFCropWarningIfNecessary;
- (void)_showPDFOcclusionWarningIfNecessary;
- (void)_startObservingCropAnnotationForFirstEdit:(id)a0;
- (void)_startObservingPageModelControllerForAddedAnnotations:(id)a0;
- (void)_stopObservingAllCropAnnotations;
- (void)_stopObservingAllPageModelControllers;
- (void)_stopObservingCropAnnotationForFirstEdit:(id)a0;
- (void)_stopObservingPageModelControllerForAddedAnnotations:(id)a0;
- (void)_warnThatPDFCroppingIsNonDestructive;
- (void)_warnThatPDFOcclusionIsNonDestructive;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })borderFrame;
- (void)editDetectedForAnnotationController:(id)a0;
- (void)finalizeCrop;
- (struct CGSize { double x0; double x1; })idealContentSizeForScreenSize:(struct CGSize { double x0; double x1; })a0 windowDecorationSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1 delegate:(id)a2;
- (id)initWithPDFDocument:(id)a0 delegate:(id)a1;
- (id)initWithPDFDocument:(id)a0 delegate:(id)a1 preloadedView:(id)a2;
- (void)pdfView:(id)a0 didAddView:(id)a1 forPage:(id)a2 atIndex:(unsigned long long)a3;
- (void)pdfView:(id)a0 willRemoveView:(id)a1 forPage:(id)a2 atIndex:(unsigned long long)a3;
- (id)popoverPresentingViewControllerForAnnotationController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })positioningRectForCandidatePicker;
- (void)setupInitialDocumentAppearanceAndPosition;
- (BOOL)shouldShowAnnotationsOfType:(id)a0;
- (void)uninstallAllAnnotationControllerOverlays;

@end
