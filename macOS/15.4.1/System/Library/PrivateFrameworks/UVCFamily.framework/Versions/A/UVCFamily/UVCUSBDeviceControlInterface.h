@class NSArray, NSString, NSMutableData, IOUSBHostPipe, UVCInterfaceConfiguration;

@interface UVCUSBDeviceControlInterface : UVCUSBDeviceInterface <UVCDeviceControlInterface> {
    NSArray *_controls;
    long long _deviceSpeed;
    NSMutableData *_dataBuffer;
    id /* block */ _stateHandler;
    UVCInterfaceConfiguration *_configuration;
}

@property (readonly) IOUSBHostPipe *interruptInPipe;
@property (readonly) NSArray *controls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)configuration;
- (void)abortInterruptReads;
- (BOOL)doInterruptEndpointRead:(id)a0 error:(id *)a1;
- (id)getCurrentValue:(id)a0 error:(id *)a1;
- (id)getMatchingControl:(unsigned long long)a0 selector:(unsigned long long)a1;
- (id)getValue:(id)a0 bRequestType:(unsigned long long)a1 bRequestDataLength:(unsigned long long)a2 error:(id *)a3;
- (void)handleControlInterruptData:(id)a0;
- (void)handleInterruptData:(id)a0;
- (void)handleStreamInterruptData:(id)a0;
- (id)initWithInterface:(id)a0 stateHandler:(id /* block */)a1 attributes:(id)a2;
- (BOOL)parseControls;
- (BOOL)setCurrentValue:(id)a0 value:(id)a1 error:(id *)a2;
- (void)setupInterruptReads;

@end
