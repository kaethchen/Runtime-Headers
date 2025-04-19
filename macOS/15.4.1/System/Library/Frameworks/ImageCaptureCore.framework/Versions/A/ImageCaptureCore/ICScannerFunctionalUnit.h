@class ICScannerImageRep, NSIndexSet, NSDictionary, NSArray;

@interface ICScannerFunctionalUnit : NSObject {
    id _fuProps;
}

@property (readonly) BOOL supportsProgressNotificationsWithScanData;
@property (readonly) NSDictionary *scanParams;
@property BOOL useOverviewImageAsFinalImage;
@property (readonly, nonatomic) ICScannerImageRep *overviewImageBufferRep;
@property (readonly, nonatomic) struct CGImage { } *grayOverviewImage;
@property (readonly) unsigned long long type;
@property unsigned long long pixelDataType;
@property (readonly) NSIndexSet *supportedBitDepths;
@property unsigned long long bitDepth;
@property (readonly) NSIndexSet *supportedMeasurementUnits;
@property unsigned long long measurementUnit;
@property (readonly) NSIndexSet *supportedResolutions;
@property (readonly) NSIndexSet *preferredResolutions;
@property unsigned long long resolution;
@property (readonly) unsigned long long nativeXResolution;
@property (readonly) unsigned long long nativeYResolution;
@property (readonly) NSIndexSet *supportedScaleFactors;
@property (readonly) NSIndexSet *preferredScaleFactors;
@property unsigned long long scaleFactor;
@property (readonly) NSArray *templates;
@property (readonly) NSArray *vendorFeatures;
@property (readonly) struct CGSize { double x0; double x1; } physicalSize;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } scanArea;
@property unsigned long long scanAreaOrientation;
@property (readonly) BOOL acceptsThresholdForBlackAndWhiteScanning;
@property BOOL usesThresholdForBlackAndWhiteScanning;
@property (readonly) unsigned char defaultThresholdForBlackAndWhiteScanning;
@property unsigned char thresholdForBlackAndWhiteScanning;
@property (readonly) unsigned long long state;
@property (readonly) BOOL scanInProgress;
@property (readonly) double scanProgressPercentDone;
@property (readonly) BOOL canPerformOverviewScan;
@property (readonly) BOOL overviewScanInProgress;
@property (readonly) struct CGImage { } *overviewImage;
@property unsigned long long overviewResolution;

+ (BOOL)automaticallyNotifiesObserversOfScanProgressPercentDone;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setState:(unsigned long long)a0;
- (id)currentSettings;
- (void)setScanInProgress:(BOOL)a0;
- (id)scanner;
- (void)setBackgroundGrayValue:(unsigned char)a0;
- (void)setOverviewScanInProgress:(BOOL)a0;
- (void)updateOverviewSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addScanAreaToDictionary:(id)a0;
- (unsigned char)backgroundGrayValue;
- (void)clearOverviewImageBuffer;
- (id)colorSyncModeForGrayOverview;
- (id)colorSyncModeForRGBOverview;
- (id)colorSyncProfilePath;
- (id)initWithDictionary:(id)a0 andScanner:(id)a1;
- (unsigned long long)measurementUnitPrivate;
- (struct CGSize { double x0; double x1; })minimumScanSizeInInches;
- (struct CGSize { double x0; double x1; })physicalSizeInInches;
- (BOOL)scanningInProgress;
- (void)setScanProgressPercentDone:(double)a0;
- (void)setVendorFeatures:(id)a0;
- (unsigned long long)templateMeasurementUnit;
- (void)updateOverviewOvelayBuffer:(id)a0;
- (void)updateScanProgressWithImageInfo:(id)a0;
- (void)updateVendorFeature:(id)a0;

@end
