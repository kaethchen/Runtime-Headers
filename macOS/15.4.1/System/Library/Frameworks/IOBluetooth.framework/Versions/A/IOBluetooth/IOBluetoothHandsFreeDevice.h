@class NSTimer, IOBluetoothHandsFreeDeviceExpansion, NSMutableArray;

@interface IOBluetoothHandsFreeDevice : IOBluetoothHandsFree {
    IOBluetoothHandsFreeDeviceExpansion *_expansion;
    NSMutableArray *_commandQueue;
}

@property int ringAttempt;
@property BOOL rejectSCOConnection;
@property BOOL outstandingCommand;
@property NSTimer *outstandingCommandTimer;
@property struct ComponentInstanceRecord { long long x0[1]; } *VPIOUnit;
@property double prevInputSampleTime;
@property double prevOutputSampleTime;
@property struct _IOBluetoothRingBuffer { unsigned int x0; unsigned int x1; unsigned char x2[1]; } *SCOInputBuffer;
@property struct _IOBluetoothRingBuffer { unsigned int x0; unsigned int x1; unsigned char x2[1]; } *SCOOutputBuffer;
@property unsigned int driverConnect;
@property struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *outputBufferList;

+ (id)deviceUUID;
+ (id)localUUID;

- (void).cxx_destruct;
- (void)currentCallList;
- (void)endCall;
- (void)processMessageNotificationCMTI:(id)a0;
- (void)sendInputVolume;
- (void)SMSMode:(id)a0;
- (void)acceptCall;
- (void)acceptCallOnPhone;
- (void)addHeldCall;
- (void)callTransfer;
- (void)commandComplete:(id)a0;
- (int)configureVPAU;
- (void)dialNumber:(id)a0;
- (id)driverID;
- (int)fill:(unsigned int *)a0 timeStamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a1 busNumber:(unsigned int)a2 numberFrames:(unsigned int)a3 outputBuffer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a4;
- (void)handleDeviceDisconnectedNotification:(id)a0;
- (void)holdCall;
- (id)initWithDevice:(id)a0 delegate:(id)a1;
- (void)memoryDial:(int)a0;
- (void)placeAllOthersOnHold:(int)a0;
- (void)processCallHoldModes:(id)a0;
- (void)processCurrentCall:(id)a0;
- (void)processIncomingData:(char *)a0 length:(unsigned long long)a1;
- (void)processIndicatorEvent:(id)a0;
- (void)processIndicatorMapping:(id)a0;
- (void)processIndicatorStatus:(id)a0;
- (void)processLineIdentificationNotification:(id)a0;
- (void)processMessageModes:(id)a0;
- (void)processMessageNotificationCMT:(id)a0;
- (void)processMessageService:(id)a0;
- (void)processReadMessageCMGR:(id)a0;
- (void)processResultCode:(id)a0;
- (void)processSubscriberNumber:(id)a0;
- (int)receiveVoiceProcessedData:(unsigned int *)a0 timeStamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a1 busNumber:(unsigned int)a2 numberFrames:(unsigned int)a3 outputBuffer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a4;
- (void)redial;
- (void)releaseActiveCalls;
- (void)releaseCall:(int)a0;
- (void)releaseHeldCalls;
- (void)saveToFile:(char *)a0 bufferSize:(int)a1;
- (void)sendATCommand:(id)a0;
- (void)sendATCommand:(id)a0 timeout:(float)a1 selector:(SEL)a2 target:(id)a3;
- (void)sendDTMF:(id)a0;
- (void)sendInputVolumePrivate:(id)a0;
- (void)sendOutputVolume;
- (void)sendOutputVolumePrivate:(id)a0;
- (void)sendPendingATCommand;
- (void)sendSMS:(id)a0 message:(id)a1;
- (void)setHandsFreeState:(int)a0;
- (void)slcConnected:(id)a0;
- (void)startConfiguration;
- (void)subscriberNumber;
- (int)teardownVPAU;
- (void)timeout:(id)a0;
- (void)transferAudioToComputer;
- (void)transferAudioToPhone;

@end
