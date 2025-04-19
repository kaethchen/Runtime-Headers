@class UVCDeviceStreamFormat, NSArray, NSString, NSData, UVCStreamInterfaceConfiguration, IOUSBHostPipe, UVCPipeStatusMonitor;

@interface UVCUSBDeviceStreamingInterface : UVCUSBDeviceInterface <UVCDeviceStreamingInterface> {
    IOUSBHostPipe *_streamingInPipe;
    NSArray *_dataBuffers;
    unsigned long long _clockFrequency;
    long long _deviceSpeed;
    BOOL _supportXHCIController;
    unsigned long long _nextIsochFrameStart;
    UVCDeviceStreamFormat *_currentStreamFormat;
    long long _currentFrameInterval;
    NSArray *_streamFormats;
    NSData *_currentStreamProbeData;
    NSString *_streamPipeType;
    id /* block */ _stateHandler;
    id /* block */ _dataHandler;
    UVCStreamInterfaceConfiguration *_configuration;
    unsigned long long _vendorID;
    UVCPipeStatusMonitor *_pipeStatusMonitor;
}

@property (readonly) BOOL streaming;
@property (readonly) NSArray *streamFormats;
@property (readonly) UVCDeviceStreamFormat *currentStreamFormat;
@property (readonly) long long currentFrameInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)configuration;
- (BOOL)stopStream:(id *)a0;
- (BOOL)changeFrameInterval:(unsigned long long)a0 error:(id *)a1;
- (BOOL)startStream:(id)a0 frameInterval:(unsigned long long)a1 error:(id *)a2;
- (id)streamPipeType;
- (id)getStreamPipe:(id)a0 alternateSetting:(unsigned long long *)a1;
- (unsigned long long)clockFrequency;
- (id)createFrameListBuffers:(long long)a0 numberOfPacketsPerRequest:(unsigned long long)a1 bufferSize:(unsigned long long)a2;
- (void)dispatchStreamError:(unsigned long long)a0;
- (BOOL)doBulkEndpointRead:(id)a0 error:(id *)a1;
- (BOOL)doBulkStream:(unsigned long long)a0 error:(id *)a1;
- (BOOL)doCommitControl:(id)a0 error:(id *)a1;
- (BOOL)doIsochEndpointRead:(id)a0 frameListBuffer:(id)a1 numberOfPacketsPerRequest:(unsigned long long)a2 bInterval:(unsigned char)a3 bufferSize:(unsigned long long)a4 error:(id *)a5;
- (BOOL)doIsochStream:(unsigned long long)a0 streamFormat:(id)a1 frameInterval:(unsigned long long)a2 error:(id *)a3;
- (BOOL)doProbeControl:(id)a0 frameRate:(unsigned long long)a1 probeData:(id *)a2 error:(id *)a3;
- (void)fillupFrameList:(id)a0 bufferSize:(unsigned long long)a1 numberOfPacketsPerRequest:(unsigned long long)a2;
- (unsigned long long)getFirstFrameNumber:(unsigned long long)a0 bInterval:(unsigned char)a1;
- (id)getStreamInPipeOfType:(id)a0 type:(unsigned char)a1 probeData:(id)a2 alternateSetting:(unsigned long long)a3;
- (void)handleBulkEndpointRead:(id)a0 bytesTransferred:(unsigned long long)a1;
- (void)handleIsochEndpointRead:(id)a0 frameList:(struct IOUSBHostIsochronousFrame { int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; } *)a1 numberOfPacketsPerRequest:(unsigned long long)a2;
- (id)initWithInterface:(id)a0 stateHandler:(id /* block */)a1 dataHandler:(id /* block */)a2 attributes:(id)a3;
- (BOOL)parseFormats;

@end
