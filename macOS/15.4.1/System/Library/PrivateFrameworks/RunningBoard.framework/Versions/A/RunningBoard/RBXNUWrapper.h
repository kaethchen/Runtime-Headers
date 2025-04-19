@class TRIClient;

@interface RBXNUWrapper : NSObject <RBXNUWrapper> {
    struct __IOGPUDevice { } *_gpuDevice;
    unsigned long long _ballastOffsetMB;
    TRIClient *_trialClient;
}

+ (id)sharedWrapper;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)ballastOffsetMB;
- (long long)_setBallastOffset:(unsigned long long)a0;
- (long long)setBallastDrained:(BOOL)a0;
- (void)setGPURole:(unsigned char)a0 forPid:(int)a1;

@end
