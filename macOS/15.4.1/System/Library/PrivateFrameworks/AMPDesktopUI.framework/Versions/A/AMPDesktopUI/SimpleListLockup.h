@class NSTableView, NSString, NSObject;
@protocol SimpleListLockupModel, SimpleListLockupDelegate, OneLineCellLockupModel;

@interface SimpleListLockup : NSView <NSTableViewDataSource, NSTableViewDelegate>

@property (weak, nonatomic) NSTableView *mTable;
@property (retain, nonatomic) id<SimpleListLockupModel> viewModel;
@property (weak, nonatomic) NSObject<SimpleListLockupDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OneLineCellLockupModel> *selectedModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lockupWithStyle:(BOOL)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithStyle:(BOOL)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)handleTableDoubleClick:(id)a0;
- (id)tableView:(id)a0 menuForRow:(long long)a1;

@end
