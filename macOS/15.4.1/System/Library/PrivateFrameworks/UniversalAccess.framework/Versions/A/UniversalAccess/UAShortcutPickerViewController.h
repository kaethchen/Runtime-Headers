@class NSTableView, NSArray, NSString;
@protocol UAShortcutPickerViewControllerDelegate;

@interface UAShortcutPickerViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource>

@property (weak, nonatomic) NSTableView *_tableView;
@property (retain, nonatomic) NSArray *_availableShortcuts;
@property (nonatomic) BOOL allowsMultipleSelection;
@property (readonly, nonatomic) NSArray *selectedShortcutWorkflows;
@property (weak, nonatomic) id<UAShortcutPickerViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)tableViewDoubleClicked:(id)a0;
- (void)_selectIdentifiers:(id)a0;
- (void)_updateAvailableShortcuts;
- (void)_updateTableView;
- (void)selectShortcutWorkflowIdentifiers:(id)a0;

@end
