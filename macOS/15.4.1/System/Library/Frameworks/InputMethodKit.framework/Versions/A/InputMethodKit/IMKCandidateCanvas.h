@class NSView, IMKCandidateGroupView, IMKCandidateView, IMKClipView, IMKCandidateStepperView, IMKCandidateController, NSTimer, IMKCandidateArrowView, IMKCandidateSelectionView;

@interface IMKCandidateCanvas : NSObject

@property (readonly, nonatomic) BOOL layoutDirectionIsRTL;
@property (retain, nonatomic) IMKClipView *canvasView;
@property (retain, nonatomic) IMKCandidateArrowView *arrowView;
@property (retain, nonatomic) IMKCandidateView *candidateView;
@property (retain, nonatomic) IMKCandidateGroupView *groupView;
@property (retain, nonatomic) IMKCandidateSelectionView *selectionView;
@property (retain, nonatomic) IMKCandidateStepperView *stepperView;
@property (nonatomic) IMKCandidateController *candidateController;
@property (nonatomic) long long canvasTypeForWindowType;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) NSView *informationView;
@property (retain, nonatomic) NSTimer *groupViewTimer;
@property (nonatomic) BOOL groupViewVisibility;
@property (nonatomic) BOOL showSortingModes;
@property (readonly, nonatomic) BOOL currentWindowTypeIsSortable;
@property (nonatomic) unsigned long long sortingSelectionIndex;

- (void)dealloc;
- (void)moveToNextSortingSelectionIndex;
- (void)UITypeUpdated;
- (void)createGroupViewIfNeeded;
- (void)groupViewTimerFired:(id)a0;
- (void)hideArrowViewWithAnimation:(BOOL)a0;
- (void)hideSelectionView;
- (id)initWithCanvasView:(id)a0 candidateController:(id)a1;
- (void)moveToPreviousSortingSelectionIndex;
- (void)nilOutConnectionsToCandidateController;
- (void)removeAuxilliaryViews;
- (void)removeCandidateAndRelatedViews;
- (void)showArrowViewWithAnimation:(BOOL)a0;
- (void)showAuxilliaryInformationViewAtBottom;
- (void)showCandidateAndGroupView;
- (void)showCandidateViewAtTop;
- (void)showCandidateViewAtTopWithBottomMargin:(double)a0;
- (void)showInformationView;
- (void)showSelectionViewAtBottom;
- (void)startGroupViewTimer;
- (void)stopGroupViewTimer;
- (void)updateAfterSizeChange;
- (void)updateArrowViewVisibility;
- (void)updateArrowViewVisibilityWithTarget:(id)a0;
- (void)updateCandidateViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateClipViewRadius;
- (void)updateConnections;
- (void)updateStepperViewVisibility;
- (void)updateViewForWindowType;

@end
