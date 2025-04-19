@class BrowserViewController, BrowserWindowController;

@interface TabPlacementHint : NSObject

@property (readonly, nonatomic) BrowserWindowController *windowController;
@property (readonly, nonatomic) BrowserViewController *currentTabBrowserViewController;
@property (readonly, nonatomic) BOOL treatCurrentTabAsAncestorTabIfPossible;

- (id)init;
- (void).cxx_destruct;
- (id)initWithWindowController:(id)a0;
- (id)initWithWindowController:(id)a0 treatCurrentTabAsAncestorTabIfPossible:(BOOL)a1;

@end
