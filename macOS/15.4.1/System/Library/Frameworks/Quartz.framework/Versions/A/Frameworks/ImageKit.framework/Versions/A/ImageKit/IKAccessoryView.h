@class IKPathPopupButton, NSTextField, ICCameraDevice, NSButton;

@interface IKAccessoryView : NSView {
    BOOL shown;
    BOOL expanded;
    BOOL supportsDelete;
    BOOL supportsAutoLaunch;
    BOOL supportsHEIF;
}

@property NSTextField *header;
@property NSTextField *popupLabel;
@property IKPathPopupButton *popup;
@property NSButton *deleteAfterImport;
@property NSButton *keepOriginals;
@property (nonatomic) long long mode;
@property (nonatomic) ICCameraDevice *cameraDevice;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_windowChangedKeyState;
- (id)accessibilityAttributeValue:(id)a0;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateDeleteAfterDownloadPrefs:(id)a0;
- (void)adjustUI;
- (void)autolaunchApplicationPathChanged:(id)a0;
- (void)deletAfterDownloadChanged:(id)a0;
- (void)deviceViewDestinationChanged:(id)a0;
- (void)doAdjustUI;
- (void)keepOriginalsChanged:(id)a0;
- (void)toggleDeleteAfterDownload:(id)a0;
- (void)updateDeleteAfterDownloadCheckbox;

@end
