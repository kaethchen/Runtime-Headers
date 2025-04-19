@interface FPInFlightCommandBuffer : NSObject {
    BOOL _intersectsMultipleLayers;
    void *_address;
    double _creationTime;
    double _commitTime;
    double _kernelSchedulingStart;
    double _kernelSchedulingEnd;
    double _gpuStart;
    double _gpuEnd;
}

- (void)dealloc;
- (id)initWithAddress:(void *)a0 creationTime:(double)a1;

@end
