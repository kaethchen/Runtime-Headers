@class ICCameraDevice, NSString, NSURL;
@protocol IKCameraDeviceViewDelegate;

@interface IKCameraDeviceView : NSView {
    id _privateData;
}

@property id<IKCameraDeviceViewDelegate> delegate;
@property ICCameraDevice *cameraDevice;
@property long long mode;
@property BOOL hasDisplayModeTable;
@property BOOL hasDisplayModeIcon;
@property (copy) NSString *downloadAllControlLabel;
@property (copy) NSString *downloadSelectedControlLabel;
@property unsigned long long iconSize;
@property long long transferMode;
@property BOOL displaysDownloadsDirectoryControl;
@property (retain) NSURL *downloadsDirectory;
@property BOOL displaysPostProcessApplicationControl;
@property (retain) NSURL *postProcessApplication;
@property (readonly) BOOL canRotateSelectedItemsLeft;
@property (readonly) BOOL canRotateSelectedItemsRight;
@property (readonly) BOOL canDeleteSelectedItems;
@property (readonly) BOOL canDownloadSelectedItems;

+ (BOOL)isCompatibleWithResponsiveScrolling;

- (void)dealloc;
- (void)finalize;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)setSupportedFileTypes:(id)a0;
- (void)rotateLeft:(id)a0;
- (void)rotateRight:(id)a0;
- (id)selectedIndexes;
- (id)auxActionControl;
- (id)auxDeleteControl;
- (id)auxIconSizeControl;
- (id)auxModeControl;
- (id)auxRotateControl;
- (void)commonInit:(id)a0;
- (void)deleteSelectedItems:(id)a0;
- (void)deviceBrowserView:(id)a0 deviceDidChangeName:(id)a1;
- (void)deviceBrowserView:(id)a0 deviceDidChangeSharingState:(id)a1;
- (void)deviceBrowserView:(id)a0 selectionDidChange:(id)a1;
- (void)downloadAllItems:(id)a0;
- (void)downloadSelectedItems:(id)a0;
- (void)drawRect_ib:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasDisplayModeSummary;
- (void)installView:(id)a0;
- (id)objectForBinding;
- (void)selectIndexes:(id)a0 byExtendingSelection:(BOOL)a1;
- (void)setAllowSingleSelectionOnly:(BOOL)a0;
- (void)setAuxActionControl:(id)a0;
- (void)setAuxDeleteControl:(id)a0;
- (void)setAuxIconSizeControl:(id)a0;
- (void)setAuxModeControl:(id)a0;
- (void)setAuxRotateControl:(id)a0;
- (void)setCustomActionControl:(id)a0;
- (void)setCustomDeleteControl:(id)a0;
- (void)setCustomIconSizeSlider:(id)a0;
- (void)setCustomModeControl:(id)a0;
- (void)setCustomRotateControl:(id)a0;
- (void)setHasDisplayModeSummary:(BOOL)a0;
- (void)setShowStatusInfoAsWindowSubtitle:(BOOL)a0;
- (void)setUsesFilterProc:(BOOL)a0;

@end
