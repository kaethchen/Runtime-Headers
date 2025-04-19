@class NSTextField, NSString, NSArray, NSTableView;

@interface SODisambiguationWindowController : NSWindowController <NSTableViewDelegate, NSTableViewDataSource> {
    NSTableView *_itemsTableView;
    NSTextField *_titleTextField;
}

@property (retain) NSString *title;
@property (retain) NSString *message;
@property (retain) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDisambiguationWindowController;

- (void)dealloc;
- (BOOL)isVisible;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)closeWindow:(id)a0;
- (void)beginShowingWindowWithTitle:(id)a0 message:(id)a1 items:(id)a2;

@end
