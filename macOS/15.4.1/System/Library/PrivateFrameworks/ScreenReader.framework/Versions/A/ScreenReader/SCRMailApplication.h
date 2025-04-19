@interface SCRMailApplication : SCRApplication

- (BOOL)_isDeepKeyboardChildSynchronizedWithVoiceOver:(id)a0;
- (void)_keyboardFocusDidChange:(id)a0;
- (BOOL)handleRotorContentChooserMoveInDirection:(long long)a0 request:(id)a1;
- (BOOL)isMailApplication;

@end
