@class WKTextInputPanel;

@interface WKTextInputWindowController : NSObject {
    WKTextInputPanel *_panel;
}

+ (id)sharedTextInputWindowController;

- (id)init;
- (BOOL)hasMarkedText;
- (id)inputContext;
- (void)unmarkText;
- (BOOL)interpretKeyEvent:(id)a0 usingLegacyCocoaTextInput:(BOOL)a1 string:(id *)a2;

@end
