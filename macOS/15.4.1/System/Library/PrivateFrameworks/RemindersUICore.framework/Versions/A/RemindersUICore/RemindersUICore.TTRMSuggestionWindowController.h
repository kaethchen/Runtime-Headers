@interface RemindersUICore.TTRMSuggestionWindowController : NSWindowController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ localMouseDownEventMonitor;
    void /* unknown type, empty encoding */ lostFocusObserver;
    void /* unknown type, empty encoding */ viewShownFor;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithWindow:(id)a0;
- (void)moveUp:(id)a0;
- (void)cancelOperation:(id)a0;
- (void)insertNewline:(id)a0;
- (void)moveDown:(id)a0;
- (void)windowDidLoad;

@end
