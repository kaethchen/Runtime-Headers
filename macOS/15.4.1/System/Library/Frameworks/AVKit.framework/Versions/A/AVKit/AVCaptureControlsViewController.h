@class AVCaptureController, NSString, NSMenu, NSTouchBar, AVCaptureView;

@interface AVCaptureControlsViewController : AVControlsViewController <NSMenuDelegate, NSTouchBarProvider> {
    id _menuDidCompleteNotificationToken;
    BOOL _isDiscoveringWirelessCaptureDevices;
}

@property (weak, nonatomic) AVCaptureController *captureController;
@property (weak, nonatomic) AVCaptureView *captureView;
@property (retain, nonatomic) NSMenu *sourceAndQualitySelectionMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSTouchBar *touchBar;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)menuNeedsUpdate:(id)a0;
- (void)menuWillOpen:(id)a0;
- (void)addItemWithTitle:(id)a0 andSubitemsForInputSourceItems:(id)a1 selectedItem:(id)a2 toMenu:(id)a3;
- (void)addItemWithTitle:(id)a0 qualityItems:(id)a1 selectedQualityItem:(id)a2 toMenu:(id)a3;
- (void)captureDeviceSelectionButtonPressed:(id)a0;
- (void)takeSelectedCaptureDeviceInputSourceItemFromRepresentedObjectOf:(id)a0;
- (void)takeSelectedCaptureQualityItemFromRepresentedObjectOf:(id)a0;

@end
