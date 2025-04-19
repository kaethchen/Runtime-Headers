@class NSButton, AMSBTLEConnectionManager, CABTLEMIDIWindowController, NSBox, NSProgressIndicator, NSMutableArray, NSString, NSLayoutConstraint, NSTableView, NSTimer, AMSBTLEAdvertisementManager, NSTextView, NSView, NSTextField;

@interface CABTLEMIDIImpl : NSObject <NSTableViewDataSource, NSTableViewDelegate, BTLEConnectionTable, NSWindowDelegate> {
    CABTLEMIDIWindowController *controller;
    AMSBTLEAdvertisementManager *advertisingManager;
    long long advertiseTimeout;
    BOOL advertising;
    BOOL showingServiceStatusMessage;
    BOOL isConnectedToCentral;
    NSLayoutConstraint *MIDIServiceStatusViewSuperviewHeight;
    NSMutableArray *peripheralList;
    AMSBTLEConnectionManager *connectionManager;
    NSView *noBTView;
    NSTextField *noBTTextField;
    NSButton *assistMeButton;
    NSView *badArchView;
    NSTextView *badPluginTextView;
    NSView *serviceView;
    NSBox *horizontalSeparator;
    NSView *peripheralView;
    NSMutableArray *connectionTimers;
    NSTimer *advertiseTimer;
}

@property NSButton *MIDIServiceAdvertiseButton;
@property NSTextField *MIDIServiceNameTextField;
@property NSView *MIDIServiceStatusView;
@property NSProgressIndicator *MIDIServiceStatusIndicator;
@property NSTextField *MIDIServiceStatusTextField;
@property NSProgressIndicator *peripheralSearchingStatusIndicator;
@property NSTextField *peripheralSearchingStatusTextField;
@property NSTableView *peripheralTableView;
@property NSTextField *peripheralCountTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setServiceName:(id)a0;
- (long long)numberOfRowsInTableView:(id)a0;
- (void)showHelp:(id)a0;
- (void)showWindow:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)windowDidLoad;
- (void)windowDidMove:(id)a0;
- (BOOL)windowShouldClose:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)setUIEnabled:(BOOL)a0;
- (unsigned long long)peripheralCount;
- (BOOL)advertiseServiceWithName:(id)a0 completionBlock:(id /* block */)a1 error:(id *)a2;
- (void)advertiseTimerFired:(id)a0;
- (id)advertisedServiceName;
- (BOOL)changeServiceNameTo:(id)a0 completionBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)disconnectLocalPeripheral;
- (id)getPathsForPluginWithName:(id)a0;
- (void)hideServiceStatus;
- (void)openBTPreferences:(id)a0;
- (id)peripheralAtIndex:(unsigned long long)a0;
- (void)setBadPluginList:(id)a0;
- (void)showServiceStatusMessage:(id)a0 showProgressIndicator:(BOOL)a1;
- (BOOL)stopAdvertisingServiceWithCompletionBlock:(id /* block */)a0 error:(id *)a1;
- (void)timeOutTimerFired:(id)a0;
- (void)toggleAdvertiseService:(id)a0;
- (void)togglePeripheralConnect:(id)a0;
- (void)updateAdvertiseUI;
- (void)updatePeripheralTable;

@end
