@class IKScanUIControllerSimple, NSView, NSMutableDictionary, IKScannerPreviewSimple, NSPopUpButton, NSMutableArray, IKPathPopupButton, NSImageView, NSButton, IKUIHelper;

@interface IKScanUIViewSimple : NSView <IKUIHelper> {
    IKUIHelper *_uiHelper;
    BOOL _didSetupWindowNotifications;
    NSMutableDictionary *_bindingInfo;
    BOOL _reviewResultFlagAtButtonCreation;
    BOOL _scanSizeIncludesAutoDetection;
    NSMutableArray *_nextKeyViews;
}

@property IKScanUIControllerSimple *scanUIControllerSimple;
@property IKScannerPreviewSimple *preview;
@property NSImageView *separator;
@property NSView *controlsContainer;
@property NSPopUpButton *deviceSelectorPopup;
@property BOOL showUseDocumentFeederCheckbox;
@property NSButton *useDocumentFeederCheckbox;
@property IKPathPopupButton *pathControl;
@property NSPopUpButton *scanSizePopup;
@property NSButton *showDetailsButton;
@property NSButton *scan_or_addToDocument_Button;
@property NSButton *overview_or_ScanRescan_Button;
@property NSButton *doneButton;

- (void)remove;
- (id)initWithController:(id)a0;
- (void)updateConstraints;
- (void)setupBindings;
- (void)install;
- (void)setupUseDocumentFeederCheckbox:(id)a0;
- (void)addBindingInfo:(id)a0 object:(id)a1;
- (unsigned long long)controlSizeForIdentifier:(id)a0;
- (void)createAllViews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })defaultRectForIdentifier:(id)a0;
- (void)reLayoutUI;
- (int)scanSizePopupWidth;
- (void)scannerDeviceChanged:(id)a0;
- (void)setupAllViews;
- (void)setupDeviceSelectorUI;
- (void)setupPathControlUI;
- (void)setupPreview;
- (void)setupScanButtonsUI;
- (void)setupScanSizePopup:(id)a0 includeAutoDetect:(BOOL)a1;
- (void)setupUseDocumentFeederUI;
- (void)unbindAll;
- (void)updatePathControl;

@end
