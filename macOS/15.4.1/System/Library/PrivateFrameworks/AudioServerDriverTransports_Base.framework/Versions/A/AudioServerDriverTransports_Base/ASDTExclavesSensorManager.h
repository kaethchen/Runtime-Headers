@interface ASDTExclavesSensorManager : NSObject {
    struct unique_ptr<ASDT::Exclaves::Sensor, std::default_delete<ASDT::Exclaves::Sensor>> { struct __compressed_pair<ASDT::Exclaves::Sensor *, std::default_delete<ASDT::Exclaves::Sensor>> { struct Sensor *__value_; } __ptr_; } _sensor;
}

@property (readonly, nonatomic) void *sensor;

+ (id)forMic;
+ (id)forSensorName:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSensorName:(id)a0;
- (void)ioThreadStartStop:(BOOL)a0 withStatusTracker:(void *)a1;

@end
