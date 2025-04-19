@class NSString, NSArray, NSEvent, NSTableView, NSTextView, NSWindow;

@interface NSTextViewCompletionController : NSObject <NSTableViewDelegate, NSTableViewDataSource> {
    NSWindow *_completionWindow;
    NSTableView *_tableView;
    NSWindow *_textViewWindow;
    NSTextView *_textView;
    struct _NSRange { unsigned long long location; unsigned long long length; } _charRange;
    NSString *_originalString;
    long long _movement;
    NSArray *_completions;
    long long _textViewWindowNumber;
    id /* block */ _endDisplayNoComplete;
    NSEvent *_sessionTerminatingEvent;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedController;

- (void)dealloc;
- (id)init;
- (id)currentTextView;
- (void)_reflectSelection:(BOOL)a0;
- (void)_reloadWithCompletions:(id)a0;
- (void)_setupWindow;
- (id)completionWindow;
- (void)displayCompletions:(id)a0 forPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 originalString:(id)a2 atPoint:(struct CGPoint { double x0; double x1; })a3 forTextView:(id)a4;
- (void)displayCompletions:(id)a0 indexOfSelectedItem:(long long)a1 forPartialWordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 originalString:(id)a3 atPoint:(struct CGPoint { double x0; double x1; })a4 forTextView:(id)a5;
- (void)endDisplay;
- (void)endDisplayAndComplete:(BOOL)a0;
- (void)endDisplayNoComplete;
- (void)endDisplayWithNotification:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)sessionTerminatingEvent;
- (void)tableAction:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;

@end
