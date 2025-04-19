@class NSString;
@protocol LAUIPasswordFieldDelegate;

@interface LAUIPasswordField : NSSecureTextField <NSTextFieldDelegate> {
    BOOL _isTextFieldFirstResponder;
}

@property (weak, nonatomic) id<LAUIPasswordFieldDelegate> passwordFieldDelegate;
@property (nonatomic) long long style;
@property (nonatomic) BOOL tabNavigationDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setup;
- (BOOL)control:(id)a0 textView:(id)a1 doCommandBySelector:(SEL)a2;
- (void)controlTextDidChange:(id)a0;
- (void)doCommandBySelector:(SEL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (void)_setupPlainStyle;
- (void)setIsTextFieldFirstResponder:(BOOL)a0;

@end
