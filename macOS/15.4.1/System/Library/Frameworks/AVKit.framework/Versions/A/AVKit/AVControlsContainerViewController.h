@class NSView, NSLayoutGuide, NSVisualEffectView, NSViewController, NSMutableArray, AVMovableView, AVControlsPresentationContext, NSLayoutConstraint;
@protocol AVControlsContainerViewContentLayout, AVControlsContainerViewControllerContent;

@interface AVControlsContainerViewController : NSViewController {
    NSViewController<AVControlsContainerViewControllerContent> *_controlsContentViewController;
    NSVisualEffectView *_backgroundView;
    NSVisualEffectView *_additionalControlsBackgroundView;
    AVMovableView *_movableView;
    NSMutableArray *_movableViewLayoutConstraints;
    NSView *_additionalControlsView;
    NSView<AVControlsContainerViewContentLayout> *_additionalNewControlsView;
    NSMutableArray *_additionalControlsViewLayoutConstraints;
    NSLayoutGuide *_preferredIndicatorAreaLayoutGuide;
    NSMutableArray *_preferredIndicatorAreaLayoutConstraints;
    NSLayoutConstraint *_leftConstraint;
    BOOL _animatingControls;
}

@property (retain, nonatomic) AVControlsPresentationContext *controlsPresentationContext;
@property (retain, nonatomic) NSViewController<AVControlsContainerViewControllerContent> *controlsContentViewController;
@property (nonatomic) BOOL showsControls;
@property (readonly, nonatomic) NSLayoutGuide *preferredIndicatorAreaLayoutGuide;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (void)viewDidLayout;
- (BOOL)_controlsAreVisibile;
- (id)_createBackgroundView:(id)a0;
- (BOOL)_isAnimatingControls;
- (void)_setAnimatingControls:(BOOL)a0;
- (void)_setUpAdditionalControlsViewIfNeeded;
- (void)_updateControlsVisibilityStateIfNeededWithAnimation:(BOOL)a0;
- (void)_updatePresentationContextIfNeeded;
- (void)addAdditionalContentViewIfNeeded:(BOOL)a0;
- (void)addControlsContentView:(id)a0 initiallyHidden:(BOOL)a1;
- (void)addObserversForControlsContentViewController:(id)a0;
- (void)initializeBackgroundViewIfNeeded;
- (void)removeControlsContentView:(id)a0;
- (void)removeObserversForControlsContentViewController:(id)a0;
- (void)replaceOldControlsContentViewController:(id)a0 withNewControlsContentViewController:(id)a1;
- (void)resetAdditionalControlsViewIfNeeded;
- (void)updateAdditionalControlsViewLayoutContraints;
- (void)updateBackgroundViewForControlsContentViewController:(id)a0;
- (void)updateMovableViewLayoutContraintsFromOldControlsContentViewController:(id)a0 toNewControlsContentViewController:(id)a1;
- (void)updatePreferredIndicatorAreaLayoutContraintsForNewControlsContentViewController:(id)a0;
- (void)updateViewVisibilityState;

@end
