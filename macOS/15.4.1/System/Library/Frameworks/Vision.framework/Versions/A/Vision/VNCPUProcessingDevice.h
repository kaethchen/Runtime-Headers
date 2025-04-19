@interface VNCPUProcessingDevice : VNProcessingDevice

- (id)metalDevice;
- (id)computeDevice;
- (int)espressoEngine;
- (int)espressoStorageType;
- (BOOL)targetsCPU;

@end
