@class QCNumberPort, QCIndexPort, QCStringPort;

@interface QCOpenCLInfo : QCPatch {
    QCIndexPort *inputDevices;
    QCIndexPort *outputDeviceCount;
    QCStringPort *outputDeviceType;
    QCStringPort *outputDeviceName;
    QCStringPort *outputDeviceVendor;
    QCStringPort *outputDeviceVersion;
    QCIndexPort *outputDeviceMaxComputeUnits;
    QCIndexPort *outputDeviceMaxWorkItemDimensions;
    QCIndexPort *outputDeviceMaxWorkGroupSize;
    QCIndexPort *outputDeviceMaxReadImageArgs;
    QCIndexPort *outputDeviceMaxWriteImageArgs;
    QCIndexPort *outputDeviceMaxSamplers;
    QCIndexPort *outputDeviceMaxConstantsArgs;
    QCIndexPort *outputDeviceMaxConstantBufferSize;
    QCNumberPort *outputDeviceGlobalMemSize;
    QCIndexPort *outputDeviceLocalMemSize;
    QCIndexPort *outputDeviceImage2DMaxWidth;
    QCIndexPort *outputDeviceImage2DMaxHeight;
    struct _cl_device_id **_devices;
    unsigned long long _count;
}

+ (BOOL)isSafe;
+ (BOOL)allowsSubpatchesWithIdentifier:(id)a0;

- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (BOOL)setup:(id)a0;
- (void)_updateContextInfo:(id)a0;
- (unsigned long long)deviceGlobalMemSize:(unsigned long long)a0;
- (unsigned long long)deviceImage2DMaxHeight:(unsigned long long)a0;
- (unsigned long long)deviceImage2DMaxWidth:(unsigned long long)a0;
- (unsigned long long)deviceLocalMemSize:(unsigned long long)a0;
- (unsigned int)deviceMaxComputeUnits:(unsigned long long)a0;
- (unsigned long long)deviceMaxConstantBufferSize:(unsigned long long)a0;
- (unsigned int)deviceMaxConstantsArgs:(unsigned long long)a0;
- (unsigned int)deviceMaxReadImageArgs:(unsigned long long)a0;
- (unsigned int)deviceMaxSamplers:(unsigned long long)a0;
- (unsigned long long)deviceMaxWorkGroupSize:(unsigned long long)a0;
- (unsigned int)deviceMaxWorkItemDimensions:(unsigned long long)a0;
- (unsigned int)deviceMaxWriteImageArgs:(unsigned long long)a0;
- (id)deviceName:(unsigned long long)a0;
- (struct __CFArray { } *)deviceNames;
- (unsigned long long)deviceType:(unsigned long long)a0;
- (id)deviceVendor:(unsigned long long)a0;
- (id)deviceVersion:(unsigned long long)a0;
- (BOOL)execute:(id)a0 time:(double)a1 arguments:(id)a2;

@end
