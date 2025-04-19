@class NSProgressIndicator, NSWindow;

@interface MMLoadingSheetController : NSViewController

@property (retain) NSWindow *modalWindow;
@property (retain) NSWindow *hostWindow;
@property (weak) NSProgressIndicator *spinner;

- (id)init;
- (void).cxx_destruct;
- (void)dismiss;
- (void)viewDidLoad;
- (id)_setupWindowWithContentViewController:(id)a0;
- (void)presentViewControllerFromHostWindow:(id)a0;

@end
