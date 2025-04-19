@class NoteHTMLEditorView;

@interface NoteWKWebView : WKWebView {
    BOOL _hasActiveFindSession;
}

@property (weak, nonatomic) NoteHTMLEditorView *noteHTMLEditorView;

- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)paste:(id)a0;
- (void)pasteAsPlainText:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (BOOL)supportsTextReplacement;
- (void)ic_evaluateJavaScript:(id)a0;
- (void)strikethrough:(id)a0;

@end
