@interface UINSKeyCodeTextField : NSTextField {
    long long _keyCode;
}

- (id)string;
- (void)setObjectValue:(id)a0;
- (id)objectValue;
- (BOOL)becomeFirstResponder;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;

@end
