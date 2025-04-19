@interface TheDialogController : NSWindowController {
    long long userClickedOk;
    unsigned short timesShown;
}

- (id)init;
- (void)showWindow:(id)a0;
- (void)windowDidBecomeKey:(id)a0;
- (void)windowDidLoad;
- (void)windowWillClose:(id)a0;
- (void)closeDialog:(id)a0;
- (void)okDialog:(id)a0;

@end
