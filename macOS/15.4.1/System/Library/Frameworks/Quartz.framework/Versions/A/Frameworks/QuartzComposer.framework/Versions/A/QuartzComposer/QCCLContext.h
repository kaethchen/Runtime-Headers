@class NSString, QCCache;

@interface QCCLContext : NSObject {
    unsigned long long *_deviceType;
    QCCache *_programCache;
    void *_unused[2];
}

@property (readonly) unsigned long long deviceType;
@property (readonly) NSString *deviceName;
@property (readonly) NSString *deviceVendor;
@property (readonly) NSString *deviceVersion;
@property (readonly) unsigned int deviceMaxComputeUnits;
@property (readonly) unsigned int deviceMaxWorkItemDimensions;
@property (readonly) unsigned long long deviceMaxWorkGroupSize;
@property (readonly) unsigned int deviceMaxReadImageArgs;
@property (readonly) unsigned int deviceMaxWriteImageArgs;
@property (readonly) unsigned int deviceMaxSamplers;
@property (readonly) unsigned int deviceMaxConstantsArgs;
@property (readonly) unsigned long long deviceMaxConstantBufferSize;
@property (readonly) unsigned long long deviceGlobalMemSize;
@property (readonly) unsigned long long deviceLocalMemSize;
@property (readonly) unsigned long long deviceImage2DMaxWidth;
@property (readonly) unsigned long long deviceImage2DMaxHeight;
@property (readonly) struct _cl_context { } *context;
@property (readonly) BOOL isAccelerated;
@property (readonly) BOOL isAsynchronous;
@property (readonly) struct _cl_device_id **devices;
@property (readonly) unsigned long long deviceCount;
@property (readonly) struct __CFArray { } *deviceNames;
@property struct _cl_device_id { } *device;
@property (readonly) struct _cl_command_queue { } *commandQueue;
@property (readonly) struct _cl_device_id { } *bestDevice;

+ (void)initialize;

- (void)dealloc;
- (void)finalize;
- (id)initWithContext:(struct _cl_context { } *)a0 options:(id)a1;
- (void)_releaseContextCache;
- (unsigned long long)indexOfDevice:(struct _cl_device_id { } *)a0;
- (struct _cl_program { } *)newProgramWithSource:(id)a0 error:(id *)a1;

@end
