@class NSView, NSArray, EKUIButton;

@interface EKUIThreeButtonGadget : EKUISingleViewGadget

@property (retain) EKUIButton *firstButton;
@property (retain) EKUIButton *secondButton;
@property (retain) EKUIButton *thirdButton;
@property (retain) NSView *control;
@property (retain) NSArray *buttonConstraints;

- (void).cxx_destruct;
- (BOOL)needsExpansion;
- (double)preferredWidth;
- (void)updateButtons;
- (void)updateConstraints;
- (id)initWithViewController:(id)a0;
- (id)_buttonWithTitle:(id)a0;
- (void)firstButtonClicked:(id)a0;
- (id)firstButtonTitle;
- (id)firstButtonTitles;
- (id)longestStringFromArray:(id)a0;
- (void)secondButtonClicked:(id)a0;
- (id)secondButtonTitle;
- (id)secondButtonTitles;
- (void)thirdButtonClicked:(id)a0;
- (id)thirdButtonTitle;
- (id)thirdButtonTitles;
- (void)updateWithChanges:(id)a0;

@end
