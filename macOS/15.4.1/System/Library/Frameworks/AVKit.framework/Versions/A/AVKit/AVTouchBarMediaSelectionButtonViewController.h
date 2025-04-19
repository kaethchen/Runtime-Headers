@class AVObservationController, AVTouchBarMediaSelectionOption, NSMutableArray;
@protocol AVTouchBarMediaSelectionControlling, AVTouchBarMediaSelectionButtonViewControllerDelegate;

@interface AVTouchBarMediaSelectionButtonViewController : NSViewController {
    NSMutableArray *_bindings;
    AVObservationController *_keyValueObservationController;
}

@property (readonly) AVTouchBarMediaSelectionOption *touchBarMediaSelectionOptionForToggling;
@property (retain) AVTouchBarMediaSelectionOption *previouslySelectedTouchBarLegibleMediaSelectionOption;
@property (retain) id<AVTouchBarMediaSelectionControlling> playerController;
@property (weak, nonatomic) id<AVTouchBarMediaSelectionButtonViewControllerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)_presentMediaSelectionPopover;
- (void)actionMediaSelectionButtonPressAndHold:(id)a0;
- (void)actionMediaSelectionButtonTapped:(id)a0;

@end
