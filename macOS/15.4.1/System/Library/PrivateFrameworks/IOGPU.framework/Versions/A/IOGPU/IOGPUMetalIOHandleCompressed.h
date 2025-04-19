@class IOGPUMetalDevice;
@protocol MTLDevice;

@interface IOGPUMetalIOHandleCompressed : _MTLIOHandleCompressed {
    IOGPUMetalDevice<MTLDevice> *_dev;
    unsigned long long _globalTraceObjectID;
}

@property (readonly) unsigned int vnioID;

- (void)dealloc;
- (unsigned long long)globalTraceObjectID;
- (void)setLabel:(id)a0;
- (id)initWithDevice:(id)a0 path:(const char *)a1 compressionType:(long long)a2 error:(id *)a3 uncached:(BOOL)a4;

@end
