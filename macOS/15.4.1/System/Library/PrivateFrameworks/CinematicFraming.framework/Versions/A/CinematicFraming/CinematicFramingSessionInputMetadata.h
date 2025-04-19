@class NSDictionary, NSArray, NSString;

@interface CinematicFramingSessionInputMetadata : NSObject <NSSecureCoding> {
    BOOL _calibrationDistortionCoefficientsSupported;
    BOOL _calibrationValidMaxRadiusSupported;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *detectedObjectsInfo;
@property (nonatomic) int cameraOrientation;
@property (readonly, nonatomic) NSArray *bodyDetections;
@property (readonly, nonatomic) NSArray *faceDetections;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } timestamp;
@property (readonly, nonatomic) float aspectRatio;
@property (readonly, nonatomic) BOOL hasGravity;
@property (readonly, nonatomic) float gravityX;
@property (readonly, nonatomic) float gravityY;
@property (readonly, nonatomic) float gravityZ;
@property (nonatomic) float additionalCameraRotation;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[3]; } deviceToCameraSpaceTransform;
@property (readonly, nonatomic) BOOL hasDeviceToCameraSpaceTransform;
@property (readonly, nonatomic) NSDictionary *calibrationDataDictionary;
@property (readonly, nonatomic) int sensorID;
@property (copy, nonatomic) NSString *portType;
@property (nonatomic) float additionalInputCameraRotation;
@property (nonatomic) float additionalOutputCameraRotation;
@property (nonatomic) BOOL frontCameraHas180DegreesRotation;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDetectedObjectsInfo:(id)a0 calibrationData:(id)a1 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 aspectRatio:(float)a3 sensorID:(int)a4 filteredFaceIDs:(id)a5 filteredBodyIDs:(id)a6 calibrationDistortionCoefficientsSupported:(BOOL)a7 calibrationValidMaxRadiusSupported:(BOOL)a8;
- (void)setGravityX:(float)a0 y:(float)a1 z:(float)a2;
- (id)_validateCalibrationDictionary:(id)a0;
- (void)_parseDetectedObjectsInfoWithFilteredFaceIDs:(id)a0 filteredBodyIDs:(id)a1;
- (id)initWithDetectedObjectsInfo:(id)a0 calibrationData:(id)a1 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 aspectRatio:(float)a3;
- (id)initWithDetectedObjectsInfo:(id)a0 calibrationData:(id)a1 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 aspectRatio:(float)a3 sensorID:(int)a4;
- (id)initWithDetectedObjectsInfo:(id)a0 calibrationData:(id)a1 timestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 aspectRatio:(float)a3 sensorID:(int)a4 filteredFaceIDs:(id)a5 filteredBodyIDs:(id)a6;

@end
