@class NSProgressIndicator, NSString, CALayer, LUISecureTextField, NSStackView, LUIEffectsButton, NSImageView, NSButton;

@interface LUISecureTextFieldView : NSView <NSTextFieldDelegate> {
    CALayer *_backgroundLayer;
    NSStackView *_stackView;
    LUISecureTextField *_secureTextField;
    NSButton *_hintButton;
    NSImageView *_errorImageView;
    NSProgressIndicator *_securityFieldProgressIndicator;
    LUIEffectsButton *_securityFieldGoButton;
    id _target;
    SEL _action;
    BOOL _usesHint;
    int _currentMode;
    long long _previousLength;
}

@property (weak) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (void)setMode:(int)a0;
- (void)setTarget:(id)a0;
- (id)target;
- (void)setAction:(SEL)a0;
- (SEL)action;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityPlaceholderValue;
- (void)controlTextDidChange:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)mode;
- (id)placeholderString;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setPlaceholderString:(id)a0;
- (void)_setupSubviews;
- (id)secureTextField;
- (float)_backgroundLayerOpacity;
- (id)_goButtonImage;
- (id)_passwordErrorImage;
- (id)_passwordHintImage;
- (void)_refreshButtonsAfterKeyInput;
- (void)_resetButtonUIToMode:(int)a0;
- (void)actionButtonPressed:(id)a0;
- (void)forceClearFocusRing;
- (void)forceDrawFocusRing;
- (struct CGPoint { double x0; double x1; })pointForPopover:(int)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })progressRect;
- (void)resetPassword;
- (void)setUIEnabled:(BOOL)a0;
- (void)setUsesHint:(BOOL)a0;
- (BOOL)usesHint;

@end
