@interface MUIManualSummaryView : NSView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ inlineTopPadding;
    void /* unknown type, empty encoding */ topPadding;
    void /* unknown type, empty encoding */ leadingMargin;
    void /* unknown type, empty encoding */ trailingMargin;
    void /* unknown type, empty encoding */ textViewTopPadding;
    void /* unknown type, empty encoding */ bottomPadding;
    void /* unknown type, empty encoding */ textViewExternalSummaryBottomPadding;
    void /* unknown type, empty encoding */ textViewLoadingBottomPadding;
    void /* unknown type, empty encoding */ textViewLineFragmentPadding;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ titleLabelTopConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ buttonBaselineConstraint;
    void /* unknown type, empty encoding */ buttonCenterYConstaint;
    void /* unknown type, empty encoding */ buttonTrailingConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_button;
    void /* unknown type, empty encoding */ textViewShowingLoadingAnimation;
    void /* unknown type, empty encoding */ textViewHeightConstraint;
    void /* unknown type, empty encoding */ textViewTopConstraint;
    void /* unknown type, empty encoding */ textViewBottomConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textView;
    void /* unknown type, empty encoding */ externalIntelligenceLabelZeroHeightConstraint;
    void /* unknown type, empty encoding */ externalIntelligenceLabelBottomConstraint;
    void /* unknown type, empty encoding */ $__lazy_storage_$_externalIntelligenceLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_showSummaryButtonTitle;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)updateTextView;
- (void)didTapButton;
- (void)provideFeedbackWithSender:(id)a0;
- (void)showFeedbackMenu;

@end
