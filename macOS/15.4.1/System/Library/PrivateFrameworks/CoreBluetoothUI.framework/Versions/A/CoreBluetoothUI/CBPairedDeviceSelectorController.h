@interface CBPairedDeviceSelectorController : CBDeviceSelectorController

+ (id)pairingController;

- (int)runModal;
- (void)windowDidLoad;
- (id)getResults;

@end
