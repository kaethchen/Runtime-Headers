@interface RemindersUICore.TTRMComponentViewAttachmentsComponentViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate> {
    void /* unknown type, empty encoding */ isEnabled;
    void /* unknown type, empty encoding */ attachmentCellIdentifier;
    void /* unknown type, empty encoding */ emptyCellIdentifier;
    void /* unknown type, empty encoding */ attachments;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ tableView;
@property (nonatomic, weak) void /* unknown type, empty encoding */ tableViewLeadingConstraint;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfRowsInTableView:(id)a0;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidLoad;
- (void)toggleQuickLook:(id)a0;

@end
