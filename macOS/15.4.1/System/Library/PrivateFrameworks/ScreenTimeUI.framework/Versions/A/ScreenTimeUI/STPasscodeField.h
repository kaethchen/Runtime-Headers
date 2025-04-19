@class NSString, NSImage, NSMutableString, NSAttributedString;
@protocol STPasscodeFieldDelegate;

@interface STPasscodeField : NSControl <NSAccessibilityGroup, NSStandardKeyBindingResponding> {
    NSAttributedString *_bulletString;
}

@property (nonatomic) unsigned long long length;
@property (readonly) NSMutableString *mutablePasscode;
@property (readonly) NSImage *unfocusedDigitBackgroundImage;
@property (readonly) double digitWidth;
@property (readonly) NSAttributedString *bulletString;
@property (readonly) double bulletHeight;
@property (readonly, copy) NSString *passcode;
@property (weak, nonatomic) id<STPasscodeFieldDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (void)deleteBackward:(id)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)insertText:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)keyDown:(id)a0;
- (BOOL)resignFirstResponder;
- (long long)userInterfaceLayoutDirection;
- (void)deleteBackward;
- (void)_drawFocusedBackgroundInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_makeAccessibilityElements;
- (void)_setNeedsDisplayForTwoDigitsStartingAtIndex:(unsigned long long)a0;
- (void)_stPasscodeFieldCommonInit;
- (void)_startEditingDigit:(unsigned long long)a0 clearValue:(BOOL)a1;
- (void)_stopEditingDigit:(unsigned long long)a0 setValue:(BOOL)a1;
- (void)clearPasscode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 length:(unsigned long long)a1;

@end
