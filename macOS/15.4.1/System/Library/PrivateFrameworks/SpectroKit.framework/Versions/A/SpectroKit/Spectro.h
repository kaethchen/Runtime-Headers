@class NSString, NSMutableDictionary, NSArray;

@interface Spectro : NSObject

@property (retain) NSString *devicePath;
@property int deviceTypeInt;
@property (retain) NSString *deviceManufacturerString;
@property (retain) NSString *deviceModelString;
@property int fileDescriptor;
@property (retain) NSString *serialNumber;
@property (retain) NSString *firmwareVersion;
@property (retain) NSString *deviceName;
@property (retain) NSString *infoBlockID;
@property (retain) NSMutableDictionary *savedConfiguration;
@property (retain) NSMutableDictionary *setConfiguration;
@property long long vendorID;
@property long long productID;
@property double accumulatedPRApertureDeltaTime;
@property unsigned char preferWidestAperture;
@property BOOL setupOK;
@property int resultInt;
@property unsigned char greaterThan01Aperture;
@property (retain) NSString *resultStr;
@property (retain) NSArray *resultArray;
@property BOOL isClosing;
@property int deviceSubType;
@property (retain) NSString *colorimeterMode;
@property (retain) NSMutableDictionary *colorimeterMatrixDict;
@property (retain) NSString *colorimeterActiveMatrix;

+ (id)connectedDevices;

- (void).cxx_destruct;
- (int)close;
- (id)initWithPath:(id)a0;
- (void)setup;
- (BOOL)PRBandwidthAndApertureOK;
- (void)commandPR:(id)a0 wait:(int)a1;
- (void)commandCR:(id)a0 wait:(int)a1;
- (void)fakeMeasurement;
- (BOOL)openDevicePath:(id)a0;
- (void)setupCR;
- (void)setupPR;
- (id)getSpectroMatrixDict:(id)a0;
- (BOOL)largerThan01Aper;
- (id)measureLxy1931;
- (id)measureLxy1931andReturnDict;
- (BOOL)measureLxy1931withDict:(id *)a0;
- (int)prApertureDelta:(int)a0;
- (BOOL)restoreCR;
- (BOOL)restorePR;
- (BOOL)setActiveMatrix:(id)a0;

@end
