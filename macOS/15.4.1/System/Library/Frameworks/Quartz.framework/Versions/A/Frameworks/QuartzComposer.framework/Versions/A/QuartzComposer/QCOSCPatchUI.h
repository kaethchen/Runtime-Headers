@class NSPopUpButton, NSTableView, NSTextField;

@interface QCOSCPatchUI : QCNetworkPatchUI {
    NSTextField *portName;
    NSPopUpButton *portType;
    NSTableView *tableView;
}

- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)addPort:(id)a0;
- (void)removePort:(id)a0;
- (void)_updateUI:(id)a0;
- (void)setupViewForPatch:(id)a0;

@end
