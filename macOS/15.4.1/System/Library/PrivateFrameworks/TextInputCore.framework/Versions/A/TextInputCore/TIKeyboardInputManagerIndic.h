@class TIIndicScriptComposer;

@interface TIKeyboardInputManagerIndic : TIKeyboardInputManager

@property BOOL alphabeticLayout;
@property (retain) TIIndicScriptComposer *scriptComposer;

- (void).cxx_destruct;
- (id)contextualDisplayKeys;
- (void)setKeyLayout:(id)a0;
- (BOOL)deletesComposedTextByComposedCharacterSequence;
- (id)handleKeyboardInput:(id)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (Class)scriptComposerClass;
- (void)syncToLayoutState:(id)a0;

@end
