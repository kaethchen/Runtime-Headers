@protocol AVCaptureOperationDescriptor;

@interface AVCaptureOperationDescriptorQueueItem : NSObject {
    id<AVCaptureOperationDescriptor> _operationDescriptor;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _operationTime;
}

- (void)dealloc;
- (id)init;
- (id)initWithOperationDescriptor:(id)a0 operationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)operationDescriptor;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })operationTime;

@end
