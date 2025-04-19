@class SFPasswordAssistantInspectorController;

@interface SFPasswordStrengthTextField : NSTextField {
    SFPasswordAssistantInspectorController *_pwaInspector;
}

- (void)dealloc;
- (void)mouseDown:(id)a0;
- (void)resetCursorRects;
- (void)setInspector:(id)a0;

@end
