@interface TIKeyboardInputManagerPolymorph : TIKeyboardInputManagerWrapper

- (void)dealloc;
- (void)handleKeyboardInput:(id)a0 keyboardState:(id)a1 completionHandler:(id /* block */)a2;
- (void)skipHitTestForTouchEvent:(id)a0 keyboardState:(id)a1;
- (void)syncToKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleKeyboardState:(id)a0 withInputEvent:(id)a1;
- (void)setInputManagerForInputMode:(id)a0 withKeyboardState:(id)a1 class:(Class)a2;
- (void)setInputManagerForKeyboardState:(id)a0 withInputEvent:(id)a1;

@end
