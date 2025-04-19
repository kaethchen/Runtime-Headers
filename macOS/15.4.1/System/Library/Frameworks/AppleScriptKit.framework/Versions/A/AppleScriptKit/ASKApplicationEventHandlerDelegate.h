@interface ASKApplicationEventHandlerDelegate : ASKEventHandlerDelegate

- (BOOL)application:(id)a0 openFile:(id)a1;
- (BOOL)application:(id)a0 openFileWithoutUI:(id)a1;
- (BOOL)application:(id)a0 openTempFile:(id)a1;
- (BOOL)application:(id)a0 printFile:(id)a1;
- (id)applicationDockMenu:(id)a0;
- (BOOL)applicationOpenUntitledFile:(id)a0;
- (BOOL)applicationShouldHandleReopen:(id)a0 hasVisibleWindows:(BOOL)a1;
- (BOOL)applicationShouldOpenUntitledFile:(id)a0;
- (unsigned long long)applicationShouldTerminate:(id)a0;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)a0;
- (id)nibNameForDocument:(id)a0;

@end
