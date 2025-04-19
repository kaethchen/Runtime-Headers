@class NSMeasurement, NSDate;

@interface CMRecordedPressureData : CMAmbientPressureData <SRSampleDirectExporting> {
    double _startDateValue;
    float _pressureValue;
    double _timestampValue;
    float _temperatureValue;
    NSMeasurement *_pressureMeasurement;
    NSMeasurement *_temperatureMeasurement;
}

@property (readonly) double startTime;
@property (readonly) unsigned long long identifier;
@property (readonly) NSDate *startDate;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)timestamp;
- (id)pressure;
- (id)temperature;
- (id)initWithData:(struct CMPressure { float x0; float x1; float x2; unsigned long long x3; } *)a0 timestamp:(unsigned long long)a1 walltime:(double)a2 identifier:(unsigned long long)a3;
- (void)resetWithData:(struct CMPressure { float x0; float x1; float x2; unsigned long long x3; } *)a0 timestamp:(unsigned long long)a1 walltime:(double)a2 identifier:(unsigned long long)a3;
- (BOOL)sr_prefersUTF8StringRepresentation;
- (long long)sr_writeUTF8RepresentationToOutputStream:(id)a0;

@end
