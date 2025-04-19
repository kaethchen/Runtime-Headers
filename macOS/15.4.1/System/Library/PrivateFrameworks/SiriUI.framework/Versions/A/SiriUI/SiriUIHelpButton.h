@interface SiriUIHelpButton : NSButton {
    BOOL _animatingEmphasis;
    BOOL _emphasized;
}

- (id)init;
- (BOOL)allowsVibrancy;
- (void)awakeFromNib;
- (void)pulse;
- (void)setEmphasized:(BOOL)a0;
- (double)_alphaForColor:(id)a0;
- (double)_targetAlpha;

@end
