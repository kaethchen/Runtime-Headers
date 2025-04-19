@class PACPUDevice;

@interface _PALowPriorityCPUDevice : PADevice {
    PACPUDevice *_cpuDevice;
}

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithCPUDevice:(id)a0;

@end
