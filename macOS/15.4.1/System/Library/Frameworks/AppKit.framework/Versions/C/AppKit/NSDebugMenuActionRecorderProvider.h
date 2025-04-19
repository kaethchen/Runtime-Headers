@class NSString, NSArrayController, NSMenuItem, NSWindow;

@interface NSDebugMenuActionRecorderProvider : NSObject <NSTableViewDelegate, NSTableViewDataSource, NSDebugMenuItemProvider> {
    NSMenuItem *_menuItem;
    NSWindow *_recordWindow;
    NSArrayController *_recordsController;
    BOOL _recording;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSMenuItem *menuItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)_createActionRecordWindow;
- (void)_toggleActionRecorder:(id)a0;
- (void)_toggleFilter:(id)a0;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;

@end
