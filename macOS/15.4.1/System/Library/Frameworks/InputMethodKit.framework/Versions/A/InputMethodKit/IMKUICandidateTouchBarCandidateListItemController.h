@class IMKUICandidateLayout, NSArray, NSViewController, IMKCandidateListDictionary, IMKCandidate, NSButton, NSView;
@protocol IMKCandidateBarFunctionRowButtonProtocol, IMKUICandidateControllerDelegate;

@interface IMKUICandidateTouchBarCandidateListItemController : NSObject <IMKUIAbstractCandidateController, NSCandidateBarFunctionRowButtonTouchEvents> {
    NSViewController *_viewController;
    NSView *_view;
    IMKUICandidateLayout *_layout;
}

@property (retain, nonatomic) NSButton<IMKCandidateBarFunctionRowButtonProtocol> *button;
@property (readonly, nonatomic) BOOL isUsingDebugColoring;
@property (nonatomic) BOOL showsChevron;
@property (retain, nonatomic) IMKCandidate *selectedCandidate;
@property (nonatomic) double surfaceWidth;
@property (readonly, nonatomic) NSArray *visibleCandidates;
@property (readonly, nonatomic) NSViewController *viewController;
@property (retain, nonatomic) IMKCandidateListDictionary *candidateGroups;
@property (weak, nonatomic) id<IMKUICandidateControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)attributes;
- (id)accessoryViewController;
- (void)continueTrackingInSegmentType:(unsigned long long)a0 index:(unsigned long long)a1;
- (void)hide;
- (void)showCandidates;
- (void)startTrackingInSegmentType:(unsigned long long)a0 index:(unsigned long long)a1;
- (void)stopTrackingInSegmentType:(unsigned long long)a0 index:(unsigned long long)a1;
- (id)touchBarItem;
- (void)updateLayout;
- (void)updateVisualElements;
- (id)candidateAtIndex:(unsigned long long)a0;
- (BOOL)didSetCandidateAtIndex:(unsigned long long)a0 shouldConfirm:(BOOL)a1;
- (void)didShowCandidates;
- (id)functionRowCandidateForCandidateArray:(id)a0 index:(unsigned long long)a1;
- (id)functionRowCandidateForText:(id)a0;
- (void)setCandidatesInFunctionRowButton:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })standardFrame;
- (void)updateVisualSelection;
- (void)willShowCandidates;

@end
