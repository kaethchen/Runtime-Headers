@interface CBDeviceServiceBrowserController : CBDeviceSelectorController

+ (id)serviceBrowserController;

- (int)runModal;
- (int)beginSheetModalForWindow:(id)a0 modalDelegate:(id)a1 didEndSelector:(SEL)a2 contextInfo:(void *)a3;
- (void)windowDidLoad;
- (id)getResults;

@end
