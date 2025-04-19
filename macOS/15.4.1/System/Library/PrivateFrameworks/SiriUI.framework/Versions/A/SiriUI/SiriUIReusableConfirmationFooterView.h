@class SiriUIFooterButton, SiriUIKeyline, SAUIConfirmationOptions;

@interface SiriUIReusableConfirmationFooterView : SiriUIReusableFooterView {
    SiriUIKeyline *_verticalKeyline;
}

@property (retain, nonatomic) SAUIConfirmationOptions *confirmationOptions;
@property (readonly, nonatomic) SiriUIFooterButton *cancelButton;
@property (readonly, nonatomic) SiriUIFooterButton *confirmButton;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (void)layout;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (BOOL)requiresKeyWindowFocus;

@end
