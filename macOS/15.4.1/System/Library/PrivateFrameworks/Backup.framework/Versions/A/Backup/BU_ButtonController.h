@class BU_TBackupView, BU_Button, NSVisualEffectView, BU_DateText, NSLayoutConstraint;

@interface BU_ButtonController : BU_TViewController {
    BU_TBackupView *_backupView;
    NSVisualEffectView *_bottomButtonsVisualEffectView;
    NSVisualEffectView *_sideButtonsVisualEffectView;
    NSLayoutConstraint *_previousXConstraint;
    NSLayoutConstraint *_previousYConstraint;
    NSLayoutConstraint *_restoreXConstraint;
    NSLayoutConstraint *_restoreYConstraint;
    NSLayoutConstraint *_dateYConstraint;
    NSLayoutConstraint *_dateWidthConstraint;
}

@property (weak, nonatomic) BU_Button *cancelButton;
@property (weak, nonatomic) BU_Button *restoreButton;
@property (weak, nonatomic) BU_Button *previousButton;
@property (weak, nonatomic) BU_Button *nextButton;
@property (weak, nonatomic) BU_DateText *dateText;

+ (id)arrowImageUpOrDown:(BOOL)a0;

- (void).cxx_destruct;
- (id)nibName;
- (void)loadView;
- (void)setDateY:(double)a0 width:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andBackupView:(id)a1;
- (void)setPreviousOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)setRestoreOrigin:(struct CGPoint { double x0; double x1; })a0;

@end
