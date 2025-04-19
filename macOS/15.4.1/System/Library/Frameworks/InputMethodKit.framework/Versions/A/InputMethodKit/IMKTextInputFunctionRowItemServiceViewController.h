@interface IMKTextInputFunctionRowItemServiceViewController : NSServiceViewController <IMKTextInputTouchBarHostViewControllerProtocol>

- (void)dealloc;
- (void)invalidate;
- (id)exportedInterface;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)handleCloseButtonOfCharacterPickerFunctionRowItem;
- (void)loadView;
- (void)setCandidateListProperties:(id)a0;
- (void)setAllowsCollapsingCandidateList:(BOOL)a0;

@end
