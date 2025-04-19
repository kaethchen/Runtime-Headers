@class FI_TPopoverController, NSStackView, NSLayoutConstraint;

@interface FI_TPopoverContentViewController : FI_TViewController {
    struct TNSWeakPtr<FI_TPopoverController> { FI_TPopoverController *fWeakObject; } _weakPopoverController;
    NSStackView *_stackView;
    NSLayoutConstraint *_widthConstraint;
}

@property (readonly, weak, nonatomic) FI_TPopoverController *popoverController;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)addSubview:(id)a0;
- (void)keyDown:(id)a0;
- (void)performClose:(id)a0;
- (void)preferredContentSizeDidChangeForViewController:(id)a0;
- (void)setPopoverController:(id)a0;
- (void)removeSubview:(id)a0;

@end
