@class NSTitlebarPopoverViewController, NSPopover;

@interface NSTitlebarRenamingSession : NSTitlebarRenamingSessionBase {
    NSPopover *_popover;
    NSTitlebarPopoverViewController *_titlebarPopoverViewController;
    int _validity;
}

- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (BOOL)beginWithEditingMode:(unsigned long long)a0 editingTitle:(id)a1 editingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (void)cancelOperation:(id)a0;
- (void)popoverDidClose:(id)a0;
- (void)popoverWillClose:(id)a0;

@end
