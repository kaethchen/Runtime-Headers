@interface UAModifiersEditor : NSTextView {
    unsigned long long _modifiers;
    BOOL _recording;
}

- (id)init;
- (void)flagsChanged:(id)a0;
- (void)keyDown:(id)a0;
- (unsigned long long)modifiers;
- (void)mouseDown:(id)a0;
- (BOOL)performKeyEquivalent:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (void)_stopRecording:(id)a0;
- (void)_flagsChangedAction:(id)a0;
- (void)setModifiers:(unsigned long long)a0;

@end
