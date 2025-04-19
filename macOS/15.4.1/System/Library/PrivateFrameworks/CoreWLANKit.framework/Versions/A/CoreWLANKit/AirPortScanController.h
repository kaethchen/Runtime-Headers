@class NSMenu, NSString, NSWindowController, CWWiFiClient, CWWiFiUIProxyClient, CWInterface, NSUUID, CWConfiguration, NSObject, NSWindow;
@protocol AirPortPrefs, OS_dispatch_queue;

@interface AirPortScanController : NSObject {
    NSString *_serviceID;
    CWWiFiClient *_wifiClient;
    CWWiFiUIProxyClient *_wifiUIClient;
    NSUUID *_joinUUID;
    BOOL _menuWillBeShownInPopUp;
    NSWindow *_window;
    NSObject<OS_dispatch_queue> *_updateQueue;
    BOOL _includePasspoint;
    unsigned long long _menuScanCounter;
    CWConfiguration *_configuration;
}

@property (retain) NSMenu *savedMenu;
@property id<AirPortPrefs> networkPrefsObject;
@property (copy) NSString *interfaceName;
@property (readonly) CWInterface *interface;
@property (retain) NSWindowController *currentDialog;
@property (readonly) NSWindow *window;

- (void)dealloc;
- (id)init;
- (id)window;
- (void)menuDidClose:(id)a0;
- (void)updateStatus;
- (id)localizedStringForKey:(id)a0;
- (void)showErrorUIWithScanResult:(id)a0 uuid:(id)a1;
- (void)clientConnectionInterrupted;
- (void)didReceiveSharedPassword:(id)a0 uuid:(id)a1;
- (void)didUpdateUIState:(unsigned long long)a0 previous:(unsigned long long)a1;
- (void)dismissUIWithUUID:(id)a0;
- (void)showInfoUIWithTitle:(id)a0 description:(id)a1 uuid:(id)a2;
- (void)showJoinUIWithScanResult:(id)a0 previousError:(id)a1 previousPassword:(id)a2 supportsWiFiPasswordSharing:(BOOL)a3 remember:(BOOL)a4 uuid:(id)a5;
- (void)showLimitedNetworkOptionUIForScanResult:(id)a0 candidates:(id)a1 uuid:(id)a2;
- (void)showLockdownModeUIWithScanResult:(id)a0 uuid:(id)a1;
- (void)showSecurityMismatchUIWithScanResult:(id)a0 uuid:(id)a1;
- (void)showWPSUIWithScanResult:(id)a0 pin:(id)a1 uuid:(id)a2;
- (void)updatedWiFiConfiguration:(id)a0;
- (id)__menuWithScan:(BOOL)a0;
- (void)__updateMenu;
- (void)handleDisassociate:(id)a0;
- (void)handleJoinCurrentNetwork:(id)a0;
- (void)handleJoinOtherNetwork:(id)a0;
- (void)handleJoinSelectedNetwork:(id)a0;
- (void)joinCancelled:(id)a0;
- (void)joinDialogWillClose:(id)a0;
- (void)joinHiddenNetwork:(id)a0;
- (void)joinNetwork:(id)a0;
- (void)manualJoinCancelled:(id)a0;
- (void)manualJoinDialogSelectedScanResult:(id)a0;
- (void)manualJoinDialogStartScanning:(id)a0;
- (void)manualJoinDialogStopScanning:(id)a0;
- (void)manualJoinDialogWillClose:(id)a0;
- (struct __SCNetworkInterface { } *)networkInterfaceRef;
- (id)noScanMenu;
- (id)scanMenu;
- (void)showErrorDialogForScanResult:(id)a0;
- (void)showInfoDialogWithTitle:(id)a0 description:(id)a1;
- (void)showJoinDialogForScanResult:(id)a0 previousError:(id)a1 previousPassword:(id)a2 remember:(BOOL)a3 supportsWiFiPasswordSharing:(BOOL)a4;
- (void)showLimitedNetworkOptionUIForScanResult:(id)a0 candidates:(id)a1;
- (void)showLockdownModeDialog:(id)a0;
- (void)showManualJoinDialog;
- (void)showSecurityMismatchDialogForScanResult:(id)a0;
- (void)showWPSDialogWithScanResult:(id)a0 pin:(id)a1;
- (void)userCancelledJoinDialog:(id)a0;
- (void)userCancelledManualJoinDialog:(id)a0;
- (void)userCancelledWPSDialog:(id)a0;
- (void)userDidCancelErrorDialog:(id)a0;
- (void)userDidConfirmJoin:(id)a0;
- (void)userDidDeclineOption:(id)a0;
- (void)userDidDenyJoin:(id)a0;
- (void)userDidJoinOption:(id)a0;
- (void)userDidOKErrorDialog:(id)a0;
- (void)userDidOKInfoDialog:(id)a0;

@end
