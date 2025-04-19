@interface IOBluetoothHandsFreeDeviceExpansion : NSObject

@property struct ComponentInstanceRecord { long long x0[1]; } *VPIOUnit;
@property struct _IOBluetoothRingBuffer { unsigned int x0; unsigned int x1; unsigned char x2[1]; } *SCOInputBuffer;
@property struct _IOBluetoothRingBuffer { unsigned int x0; unsigned int x1; unsigned char x2[1]; } *SCOOutputBuffer;
@property unsigned int driverConnect;
@property double prevInputSampleTime;
@property double prevOutputSampleTime;
@property struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *outputBufferList;

@end
