@class NSTextField, NSBox, NSTableView, NSPopUpButton;

@interface QCPatchRendererUI : QCInspector {
    NSPopUpButton *executionMenu;
    NSTableView *inputTableView;
    NSTableView *outputTableView;
    NSBox *outputsBox;
    NSPopUpButton *inputMenu;
    NSTextField *inputField;
    NSPopUpButton *outputMenu;
    NSTextField *outputField;
    NSPopUpButton *protocolMenu;
}

+ (id)viewNibName;

- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)removeInput:(id)a0;
- (void)removeOutput:(id)a0;
- (void)_setup:(id)a0;
- (void)addOutput:(id)a0;
- (void)addInput:(id)a0;
- (void)autoconfigureFromComposition:(id)a0;
- (void)autoconfigureFromProtocol:(id)a0;
- (void)setExecution:(id)a0;
- (void)setupViewForPatch:(id)a0;

@end
