@class NSString, IKScannerDeviceViewHandler, NSMutableArray, ICScannerFunctionalUnit;

@interface IKScanUIController : NSObject {
    NSMutableArray *_scanResults;
    NSMutableArray *_statusTextArray;
    unsigned long long _overviewScanResolution;
}

@property IKScannerDeviceViewHandler *scannerDeviceViewHandler;
@property BOOL scanUIEnabled;
@property BOOL scanButtonEnabled;
@property (readonly) BOOL hasFunctionalUnit;
@property (nonatomic) ICScannerFunctionalUnit *functionalUnit;
@property unsigned long long functionalUnitType;
@property (retain) NSString *statusText;
@property long long detectSeparateItemsMode;
@property BOOL createSingleDocumentReChecked;
@property long long imageCorrectionType;
@property BOOL overviewScanWasCanceled;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromUnit:(unsigned long long)a1 toUnit:(unsigned long long)a2 resolution:(double)a3;

- (void)dealloc;
- (void)cleanup;
- (BOOL)isExecutableFileAtPath:(id)a0;
- (void)setup;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertSelectionRectToInchRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pushStatusText:(id)a0;
- (void)selfTestFailed:(id)a0;
- (id)scanInfoForURL:(id)a0;
- (void)addScanResult:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromUnit:(unsigned long long)a1 toUnit:(unsigned long long)a2 resolution:(double)a3;
- (void)didCompleteScanToURL:(id)a0;
- (void)didCompleteScansToURLs:(id)a0;
- (void)didReceiveButtonPress:(id)a0;
- (void)didScanToURLNotProcessedYet:(id)a0;
- (void)downloadsDirectoryChanged:(id)a0;
- (void)finishedScanSelectionAtIndex:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })flipInchRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)functionalUnitWillSwitchAway:(id)a0;
- (id)imageFlow:(id)a0 itemAtIndex:(unsigned long long)a1;
- (unsigned long long)numberOfItemsInImageFlow:(id)a0;
- (void)overviewImageChanged;
- (void)pathControlChanged:(id)a0;
- (void)pathControlChangedApp:(id)a0;
- (void)pathControlChangedDir:(id)a0;
- (void)popStatusText;
- (void)postProcessApplicationChanged:(id)a0;
- (void)scanFailed:(id)a0 error:(id)a1;
- (void)sendScanResults:(id)a0 toApplication:(id)a1;
- (void)setTempStatusText:(id)a0 duration:(long long)a1;

@end
