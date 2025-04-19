@interface IMKVerbatimInputMethod : IMKAbstractInputMethod

@property (nonatomic) BOOL useComposingText;

- (BOOL)handleKeyPress:(id)a0 whileInKeyboardState:(id)a1;

@end
