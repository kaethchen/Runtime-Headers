@class NSStackView, NSTextField;
@protocol AVTouchBarMediaSelectionControlling, AVTouchBarMediaSelectionViewControllerDelegate;

@interface AVTouchBarMediaSelectionViewController : NSViewController {
    NSTextField *_audioLabel;
    NSTextField *_legibleLabel;
    NSStackView *_audioOptionsContainerView;
    NSStackView *_legibleOptionsContainerView;
}

@property (retain) id<AVTouchBarMediaSelectionControlling> playerController;
@property (weak, nonatomic) id<AVTouchBarMediaSelectionViewControllerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (void)_updateButtonStatesForCurrentTouchBarMediaSelectionOption:(id)a0 containerView:(id)a1;
- (void)_updateTouchBarMediaSelectionOptionInContainerView:(id)a0 mediaSelectionOptions:(id)a1 currentMediaSelectionOption:(id)a2 selectionAction:(SEL)a3;
- (void)actionAudioTouchBarMediaSelectionOptionSelected:(id)a0;
- (void)actionLegibleTouchBarMediaSelectionOptionSelected:(id)a0;

@end
