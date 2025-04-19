@interface CDMDeviceStateLogger : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ memoryPressureSource;
}

+ (void)logThermalState;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)monitorMemoryPressure;

@end
