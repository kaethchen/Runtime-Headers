@class NSLayoutConstraint;

@interface FI_TListNameSubtitleTextField : FI_TListTextField {
    NSLayoutConstraint *_minWidthConstraint;
}

@property (nonatomic) BOOL shouldCalcMinWidthFromStrs;

- (void).cxx_destruct;
- (void)setFont:(id)a0;
- (void)initCommon;
- (void)updateTextColor;
- (void)setStringSet:(const void *)a0 extraContentInsets:(const struct NSEdgeInsets { double x0; double x1; double x2; double x3; } *)a1;
- (void)updateMinWidth;

@end
