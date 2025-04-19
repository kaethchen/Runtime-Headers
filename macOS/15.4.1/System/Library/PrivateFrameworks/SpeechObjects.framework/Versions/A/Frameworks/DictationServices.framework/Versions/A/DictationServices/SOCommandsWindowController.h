@class SODictationCommandManager, NSTableView;
@protocol SOCommandsWindowControllerDelegate;

@interface SOCommandsWindowController : NSWindowController {
    id<SOCommandsWindowControllerDelegate> _delegate;
    SODictationCommandManager *_commandManager;
    NSTableView *_commandsTableView;
}

@property BOOL doNotSaveNextCloseAction;

+ (BOOL)didRepositionWindowToBeOnScreenUsingRectPtr:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
+ (id)sharedCommandsWindowController;

- (void)dealloc;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)awakeFromNib;
- (BOOL)isVisible;
- (long long)numberOfRowsInTableView:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (BOOL)tableView:(id)a0 isGroupRow:(long long)a1;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)windowDidDeminiaturize:(id)a0;
- (void)windowDidMiniaturize:(id)a0;
- (void)windowDidMove:(id)a0;
- (void)windowDidResize:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)searchForString:(id)a0;
- (id)_bestScreenContainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_globalWindowFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_tableCellViewForRow:(long long)a0;
- (void)beginShowingWindow;
- (void)resyncWithCurrentCommands;
- (void)showHideItem:(id)a0;
- (void)stopShowingWindow;
- (void)updateWithCommandsDictionary:(id)a0;

@end
