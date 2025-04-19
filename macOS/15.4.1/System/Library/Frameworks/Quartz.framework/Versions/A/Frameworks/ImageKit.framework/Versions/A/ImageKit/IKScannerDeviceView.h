@class NSString, NSArray, NSURL, ICScannerDevice;
@protocol IKScannerDeviceViewDelegate;

@interface IKScannerDeviceView : NSView {
    id _privateData;
}

@property BOOL reviewSimpleScanResults;
@property BOOL displaysDeviceSelectorControl;
@property BOOL displaysScanSizeControl;
@property BOOL displaysDocumentNameControl;
@property BOOL displaysFileFormatControl;
@property (copy) NSString *fileFormat;
@property (readonly) NSArray *supportedFileFormats;
@property double compressionQuality;
@property BOOL displaysImageCorrectionControl;
@property BOOL addAutoDetectionToScanSizeControl;
@property BOOL displaysDoneButton;
@property unsigned long long simpleScanDocumentType;
@property unsigned long long simpleScanOverviewResolution;
@property (copy) NSString *simpleScanFileFormat;
@property id<IKScannerDeviceViewDelegate> delegate;
@property ICScannerDevice *scannerDevice;
@property long long mode;
@property BOOL hasDisplayModeSimple;
@property BOOL hasDisplayModeAdvanced;
@property long long transferMode;
@property (copy) NSString *scanControlLabel;
@property (copy) NSString *overviewControlLabel;
@property BOOL displaysDownloadsDirectoryControl;
@property (retain) NSURL *downloadsDirectory;
@property (copy) NSString *documentName;
@property BOOL displaysPostProcessApplicationControl;
@property (retain) NSURL *postProcessApplication;

+ (void)initialize;

- (void)dealloc;
- (void)finalize;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)awakeFromNib;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)removeFromSuperview;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)commonInit:(id)a0;
- (void)deviceBrowserView:(id)a0 deviceDidChangeName:(id)a1;
- (void)deviceBrowserView:(id)a0 deviceDidChangeSharingState:(id)a1;
- (void)deviceBrowserView:(id)a0 selectionDidChange:(id)a1;
- (void)drawRect_ib:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)installView:(id)a0;

@end
