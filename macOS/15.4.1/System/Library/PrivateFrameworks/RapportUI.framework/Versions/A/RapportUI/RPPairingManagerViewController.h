@class RPPairingUIController, RPPairingManagerUIController, RPLegacyDeviceDiscovery, NSButton, NSMutableArray, NSProgressIndicator, CUPairingManager, NSString, RPPairingManagerRemoveViewController, RPLegacySession, NSTableView, RPDevice, NSTextField;

@interface RPPairingManagerViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate> {
    NSTableView *_devicesTable;
    int _progressShown;
    NSProgressIndicator *_progressSpinner;
    NSTextField *_progressLabel;
    NSButton *_doneButton;
    RPLegacyDeviceDiscovery *_deviceDiscovery;
    NSMutableArray *_devices;
    RPDevice *_pairingDevice;
    RPLegacySession *_pairingSession;
    BOOL _pairingStarted;
    RPPairingUIController *_pairingUI;
    CUPairingManager *_pairingManager;
    RPPairingManagerRemoveViewController *_vcRemove;
}

@property (nonatomic) BOOL allowManualIP;
@property (retain, nonatomic) RPPairingManagerUIController *mainController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 selectionIndexesForProposedSelection:(id)a1;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)_discoveryStart;
- (void)_updateDeviceInfo:(id)a0;
- (void)handleDoneButton:(id)a0;
- (void)_removePairedDevice:(id)a0 completion:(id /* block */)a1;
- (void)_updateUIStates;
- (void)_startPairSetup;
- (BOOL)_cuPairedPeer:(id)a0 matchesRPDevice:(id)a1;
- (void)_discoveryDeviceChanged:(id)a0 changes:(unsigned int)a1;
- (void)_discoveryDeviceFound:(id)a0;
- (void)_discoveryDeviceLost:(id)a0;
- (unsigned long long)_discoveryFindDeviceIndex:(id)a0;
- (void)_discoveryRemoveAllDevices;
- (void)_discoveryStop;
- (unsigned long long)_findDeviceInsertIndex:(id)a0;
- (unsigned long long)_pairingMonitorFindPeerIndex:(id)a0;
- (void)_pairingMonitorPeerAdded:(id)a0;
- (void)_pairingMonitorPeerRemoved:(id)a0;
- (void)_pairingMonitorRemoveAllPeers;
- (void)_pairingMonitorStart;
- (void)_pairingMonitorStop;
- (void)_startPairingDevice:(id)a0;
- (void)_unpairDevice:(id)a0 completion:(id /* block */)a1;
- (void)_updateUIForRemovedItems;
- (void)handlePairButton:(id)a0;
- (void)handleRemoveButton:(id)a0;

@end
