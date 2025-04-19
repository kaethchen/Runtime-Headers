@class NSAttributedString, LUPresenter, LUSearchTermIndicator;

@interface LUPresenterAnimationController : NSPopoverAnimationController

@property (retain, nonatomic) LUPresenter *associatedPresenter;
@property (retain, nonatomic) LUSearchTermIndicator *searchTermIndicator;
@property (retain, nonatomic) NSAttributedString *displayedTerm;
@property (nonatomic) struct CGPoint { double x; double y; } displayedTermOrigin;

- (void)dealloc;
- (void).cxx_destruct;
- (void)recognizerDidCompleteAnimation:(id)a0;
- (void)showPopover;
- (void)commonLUPresenterAnimationControllerTeardown;

@end
