@class NSTextField, NSString, NSArray, NSTrackingArea, NSTableView, NSLayoutConstraint;

@interface SOActionsListViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource> {
    NSArray *_items;
}

@property (retain) NSTableView *actionsTableView;
@property (retain) NSTextField *titleTextField;
@property (retain) NSTextField *hintsTextField;
@property (retain) NSLayoutConstraint *actionsTableHeightConstraint;
@property (copy) id /* block */ completionBlock;
@property (readonly) BOOL keyInWindow;
@property BOOL doShowHints;
@property (retain) NSTrackingArea *trackingArea;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)setItems:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidLayout;
- (void)handleClickTableRow:(long long)a0;

@end
