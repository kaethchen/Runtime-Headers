@interface _TtCV7SwiftUI23AppKitTextEditorAdaptor11Coordinator : NSObject <NSTextViewDelegate> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ selectionStorage;
    void /* unknown type, empty encoding */ undoManager;
}

- (id)init;
- (void).cxx_destruct;
- (id)textView:(id)a0 menu:(id)a1 forEvent:(id)a2 atIndex:(long long)a3;
- (void)textDidChange:(id)a0;
- (void)textViewDidChangeSelection:(id)a0;
- (id)undoManagerForTextView:(id)a0;

@end
