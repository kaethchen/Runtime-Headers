@class ASTextField, NSString, ASRatingControl;

@interface ASWriteReviewBodyView : ASWriteReviewDialogView <NSTextFieldDelegate, NSControlTextEditingDelegate>

@property (readonly, nonatomic) ASRatingControl *ratingControl;
@property (readonly, nonatomic) ASTextField *titleTextField;
@property (readonly, nonatomic) ASTextField *bodyTextField;
@property (copy, nonatomic) id /* block */ titleDidChangeCallback;
@property (copy, nonatomic) id /* block */ bodyDidChangeCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)layout;
- (void)applyConfiguration:(id)a0;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (void)viewDidMoveToWindow;
- (id)initWithConfiguration:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
