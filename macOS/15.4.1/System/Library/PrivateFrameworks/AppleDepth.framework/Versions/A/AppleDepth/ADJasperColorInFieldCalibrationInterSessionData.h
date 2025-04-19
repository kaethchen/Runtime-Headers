@class NSData, ADJasperColorInFieldCalibrationTelemetryData;

@interface ADJasperColorInFieldCalibrationInterSessionData : ADInFieldCalibrationInterSessionData

@property (retain, nonatomic) NSData *intersessionFeaturesHistory;
@property (nonatomic) unsigned int intersessionFeaturesHistoryCount;
@property (nonatomic) unsigned int successfulResultCount;
@property (retain, nonatomic) ADJasperColorInFieldCalibrationTelemetryData *inFieldCalibrationTelemetryData;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ jasperToColorRotationAngles;

- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)persistenceData;
- (void)initIsf;
- (void /* unknown type, empty encoding */)convertDictToExtrinsicsAngles:(id)a0;
- (id)convertExtrinsicsAnglesToDict:(SEL)a0;
- (id)initWithDictionaryRepresentation:(id)a0 andDeviceName:(id)a1;
- (id)initWithFactoryJasperToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 currentJasperToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (id)initWithFactoryJasperToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 currentJasperToColorTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 andDeviceName:(id)a2;
- (unsigned int)isfCapacity;

@end
