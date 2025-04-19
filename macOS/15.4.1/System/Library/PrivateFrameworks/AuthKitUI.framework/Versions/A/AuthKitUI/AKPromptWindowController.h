@class NSWindow;

@interface AKPromptWindowController : NSWindowController

@property (nonatomic) BOOL _currentlyActive;
@property (weak, nonatomic) NSWindow *hostWindow;
@property (nonatomic) BOOL makeSheetCritical;

- (void).cxx_destruct;
- (void)dismiss;
- (void)present;
- (void)_presentAsSheet;
- (void)_dimissPrompt;
- (void)_dismissOnMainThread;
- (void)_presentAsModalWithCompletion:(id /* block */)a0;
- (void)presentWithCompletion:(id /* block */)a0;

@end
