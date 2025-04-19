@class ADPearlColorInFieldCalibrationTelemetryData;

@interface ADPearlColorInFieldCalibrationInterSessionData : ADInFieldCalibrationInterSessionData

@property (retain, nonatomic) ADPearlColorInFieldCalibrationTelemetryData *inFieldCalibrationTelemetryData;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ pearlToColorRotationAngles;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)persistenceData;
- (void)initIsf;
- (void /* unknown type, empty encoding */)convertDictToExtrinsicsAngles:(id)a0;
- (id)convertExtrinsicsAnglesToDict:(SEL)a0;
- (void)initIsfWithFlowType:(int)a0;
- (id)initWithDictionaryRepresentation:(id)a0 andDeviceName:(id)a1;
- (id)initWithDictionaryRepresentation:(id)a0 andFlowType:(int)a1;
- (id)initWithFactoryPearlToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 currentPearlToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithFactoryPearlToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 currentPearlToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 andDeviceName:(id)a2;
- (id)initWithFactoryPearlToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 currentPearlToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 andFlowType:(int)a2;

@end
