@class NSTextField;

@interface WebJavaScriptTextInputPanel : NSWindowController {
    NSTextField *prompt;
    NSTextField *textInput;
}

- (id)text;
- (id)initWithPrompt:(id)a0 text:(id)a1;
- (void)pressedCancel:(id)a0;
- (void)pressedOK:(id)a0;

@end
