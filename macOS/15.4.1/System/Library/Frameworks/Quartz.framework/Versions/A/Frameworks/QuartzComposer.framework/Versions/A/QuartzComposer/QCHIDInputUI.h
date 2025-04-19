@class NSMutableArray, NSTableView, NSPopUpButton, GFList;

@interface QCHIDInputUI : QCInspector {
    NSPopUpButton *deviceMenu;
    NSTableView *elementsTableView;
    GFList *_allElements;
    NSMutableArray *_elements;
    unsigned int _addNotification;
    unsigned int _removeNotification;
    struct IONotificationPort { } *_notificationPort;
    struct __CFRunLoopSource { } *_runLoopSource;
}

+ (id)viewNibName;

- (void)_setupUI;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (void)tableView:(id)a0 setObjectValue:(id)a1 forTableColumn:(id)a2 row:(long long)a3;
- (void)updateDevice:(id)a0;
- (void)_updateUI;
- (void)resetView;
- (void)setupViewForPatch:(id)a0;

@end
