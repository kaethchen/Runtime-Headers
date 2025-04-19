@class ICScannerImageRep, NSArray, NSMutableIndexSet, NSMutableDictionary, ICScannerDevice;

@interface ICScannerFunctionalUnitProps : NSObject

@property (nonatomic) unsigned long long pixelDataType;
@property (retain, nonatomic) NSMutableIndexSet *supportedBitDepths;
@property (nonatomic) unsigned long long bitDepth;
@property (retain, nonatomic) NSMutableIndexSet *supportedMeasurementUnits;
@property (nonatomic) unsigned long long measurementUnit;
@property (nonatomic) unsigned long long measurementUnitPrivate;
@property (nonatomic) unsigned long long nativeXResolution;
@property (nonatomic) unsigned long long nativeYResolution;
@property (retain, nonatomic) NSMutableIndexSet *supportedResolutions;
@property (retain, nonatomic) NSMutableIndexSet *preferredResolutions;
@property (nonatomic) unsigned long long resolution;
@property (retain, nonatomic) NSMutableIndexSet *supportedScaleFactors;
@property (retain, nonatomic) NSMutableIndexSet *preferredScaleFactors;
@property (nonatomic) unsigned long long scaleFactor;
@property (retain, nonatomic) NSArray *templates;
@property (retain, nonatomic) NSArray *vendorFeatures;
@property (nonatomic) BOOL acceptsThresholdForBlackAndWhiteScanning;
@property (nonatomic) BOOL usesThresholdForBlackAndWhiteScanning;
@property (nonatomic) unsigned char defaultThresholdForBlackAndWhiteScanning;
@property (nonatomic) unsigned char thresholdForBlackAndWhiteScanning;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) ICScannerImageRep *overviewImageBufferRep;
@property (retain, nonatomic) struct CGImage { } *overviewImage;
@property (retain, nonatomic) struct CGImage { } *grayOverviewImage;
@property (nonatomic) unsigned long long overviewResolution;
@property (retain, nonatomic) struct CGColorSpace { } *grayColorSpace;
@property (nonatomic) struct CGSize { double width; double height; } physicalSizeInInches;
@property (nonatomic) struct CGSize { double width; double height; } minimumScanSizeInInches;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scanArea;
@property (nonatomic) unsigned long long scanAreaOrientation;
@property (nonatomic) double scanProgressPercentDone;
@property (weak, nonatomic) ICScannerDevice *scanner;
@property (nonatomic) unsigned char backgroundGrayValue;
@property (retain, nonatomic) NSMutableDictionary *scanParams;
@property (nonatomic) unsigned long long templateMeasurementUnit;
@property (nonatomic) BOOL supportsProgressNotificationsWithScanData;
@property (nonatomic) BOOL useOverviewImageAsFinalImage;

- (void).cxx_destruct;
- (id)currentSettings;
- (id)initWithDictionary:(id)a0 andScanner:(id)a1;

@end
