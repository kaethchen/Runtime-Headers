@class NSObject;
@protocol OS_dispatch_queue;

@interface CMSensorMonitorSimulatorProxy : NSObject {
    struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> { struct __compressed_pair<CLConnectionClient *, std::default_delete<CLConnectionClient>> { struct CLConnectionClient *__value_; } __ptr_; } fLocationdConnection;
    id /* block */ fHandler;
    NSObject<OS_dispatch_queue> *fInternalQueue;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)_simulateMotionSensorDataForType:(unsigned long long)a0 payload:(id)a1 withHandler:(id /* block */)a2;
- (id)initWithSensorMonitorTests;

@end
