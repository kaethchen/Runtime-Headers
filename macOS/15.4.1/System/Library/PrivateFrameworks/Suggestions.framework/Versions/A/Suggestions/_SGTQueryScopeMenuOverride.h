@class NSString;

@interface _SGTQueryScopeMenuOverride : NSObject <NSTableViewDataSource, NSTableViewDelegate> {
    SEL _action;
    id _target;
    NSString *_item;
    NSString *_title;
    NSString *_spinnerMessage;
}

@property BOOL spin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (BOOL)searchFieldCell:(id)a0 shouldChangeCancelButtonVisibility:(BOOL)a1;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (void)tableViewSelectionDidChange:(id)a0;
- (void)tableViewSelectionIsChanging:(id)a0;
- (void)performAction;
- (void)completionTableView:(id)a0 mouseUpInRow:(long long)a1 event:(id)a2;
- (BOOL)completionTableView:(id)a0 rowIsSeparator:(long long)a1;
- (id)initWithAction:(SEL)a0 target:(id)a1 item:(id)a2 title:(id)a3 spinnerMessage:(id)a4;

@end
