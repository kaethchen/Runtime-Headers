@class NSArray, NSView, NSProgressIndicator, UXNavigationItem, NSVisualEffectView;

@interface UXNavigationBar : NSView

@property (retain, nonatomic) NSView *emptyRightView;
@property (retain, nonatomic) NSView *emptyInnerRightView;
@property (retain, nonatomic) NSView *emptyLeftView;
@property (retain, nonatomic) NSView *emptyInnerLeftView;
@property (retain, nonatomic) NSView *emptyCenterView;
@property (retain, nonatomic) UXNavigationItem *topItem;
@property (nonatomic) BOOL didSetupObservers;
@property (retain, nonatomic) NSVisualEffectView *effectView;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) int style;
@property (retain, nonatomic) NSView *backgroundView;
@property (retain, nonatomic) UXNavigationItem *defaultItem;
@property (retain, nonatomic) NSProgressIndicator *spinner;
@property (readonly, nonatomic) NSView *currentLeftBarButtonView;
@property (readonly, nonatomic) NSView *currentRightBarButtonView;
@property (readonly, nonatomic) NSView *currentInnerLeftBarButtonView;
@property (readonly, nonatomic) NSView *currentInnerRightBarButtonView;
@property (readonly, nonatomic) NSView *currentTitleView;
@property (readonly, nonatomic) BOOL currentSpinnerEnabled;
@property (nonatomic) BOOL prefersLargeTitles;
@property (nonatomic) BOOL translucent;
@property (nonatomic) double customNavBarHeight;

+ (id)keyPathsForValuesAffectingCurrentInnerLeftBarButtonView;
+ (id)keyPathsForValuesAffectingCurrentInnerRightBarButtonView;
+ (id)keyPathsForValuesAffectingCurrentLeftBarButtonView;
+ (id)keyPathsForValuesAffectingCurrentRightBarButtonView;
+ (id)keyPathsForValuesAffectingCurrentSpinnerEnabled;
+ (id)keyPathsForValuesAffectingCurrentTitleView;
+ (id)keyPathsForValuesAffectingTopItem;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateConstraints;
- (void)viewDidMoveToSuperview;
- (void)setupObservers;
- (void)popNavigationItemAnimated:(BOOL)a0;
- (void)pushNavigationItem:(id)a0 animated:(BOOL)a1;
- (void)_invalidateConstraints;
- (id)currentInnerLeftBarButtonView;
- (id)currentInnerRightBarButtonView;
- (id)currentLeftBarButtonView;
- (id)currentRightBarButtonView;
- (id)currentTitleView;
- (void)popToNavigationItem:(id)a0 animated:(BOOL)a1;

@end
