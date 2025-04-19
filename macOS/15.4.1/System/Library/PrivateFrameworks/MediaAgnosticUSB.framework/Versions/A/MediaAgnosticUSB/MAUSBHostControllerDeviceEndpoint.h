@class IOUSBHostCIEndpointStateMachine, NSString, MAUSBEndpointHandle, NSObject;
@protocol OS_dispatch_queue;

@interface MAUSBHostControllerDeviceEndpoint : MAUSBObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _activatePending;
    BOOL _inactivatePending;
    struct IOUSBHostCIMessage { unsigned int control; unsigned int data0; unsigned long long data1; } _pendingSleepMessage;
    unsigned long long _outstandingIOCount;
    NSString *_logPrefix;
}

@property (readonly) MAUSBEndpointHandle *handle;
@property (readonly) IOUSBHostCIEndpointStateMachine *stateMachine;
@property const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *tailTransferMessage;
@property BOOL doorbellPending;

- (void).cxx_destruct;
- (void)inactivateEndpointForSleepMessage:(struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; })a0 deviceManager:(id)a1 deviceHandle:(unsigned short)a2;
- (id)initWithHandle:(unsigned short)a0 stateMachine:(id)a1 queue:(id)a2;
- (void)outEndpointcheckForPendingSleepWithDeviceManager:(id)a0 deviceHandle:(unsigned short)a1;
- (void)processDoorbell:(unsigned int)a0 withDeviceManager:(id)a1 deviceHandle:(unsigned short)a2;
- (void)processTransferMessagesWithDeviceManager:(id)a0 deviceHandle:(unsigned short)a1;
- (void)resetTailToCurrentMessage;
- (BOOL)respondToCommand:(const struct IOUSBHostCIMessage { unsigned int x0; unsigned int x1; unsigned long long x2; } *)a0 status:(int)a1;
- (BOOL)sleepRequestPending;
- (BOOL)stateMachineProcessDoorbell:(unsigned int)a0;

@end
