@class PGMemoryMapDescriptor;
@protocol MTLDevice;

@interface PGDeviceDescriptor : NSObject {
    BOOL _usingIOSurfaceMapper;
    BOOL _enableProcessIsolation;
    PGMemoryMapDescriptor *_memoryMapDescriptor;
    unsigned long long _deviceFeatureLevel;
    BOOL _enableProtectedContent;
    BOOL _enableArgumentBuffers;
}

@property (retain, nonatomic) id<MTLDevice> device;
@property (nonatomic) unsigned long long mmioLength;
@property (copy, nonatomic) id /* block */ createTask;
@property (copy, nonatomic) id /* block */ destroyTask;
@property (copy, nonatomic) id /* block */ mapMemory;
@property (copy, nonatomic) id /* block */ unmapMemory;
@property (copy, nonatomic) id /* block */ readMemory;
@property (copy, nonatomic) id /* block */ raiseInterrupt;
@property (copy, nonatomic) id /* block */ addTraceRange;
@property (copy, nonatomic) id /* block */ removeTraceRange;
@property (nonatomic) unsigned int displayPortCount;

- (void)dealloc;
- (id)init;
- (unsigned long long)deviceFeatureLevel;
- (BOOL)enableArgumentBuffers;
- (BOOL)enableProcessIsolation;
- (BOOL)enableProtectedContent;
- (BOOL)enableResourceDetachment;
- (id)memoryMapDescriptor;
- (void)setDeviceFeatureLevel:(unsigned long long)a0;
- (void)setEnableArgumentBuffers:(BOOL)a0;
- (void)setEnableProcessIsolation:(BOOL)a0;
- (void)setEnableProtectedContent:(BOOL)a0;
- (void)setEnableResourceDetachment:(BOOL)a0;
- (void)setMemoryMapDescriptor:(id)a0;
- (void)setUsingIOSurfaceMapper:(BOOL)a0;
- (BOOL)usingIOSurfaceMapper;

@end
