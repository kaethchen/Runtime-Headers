@class AppleTypeCRetimerFifoQueue, AppleTypeCRetimerFifoDumper, NSString, NSObject;
@protocol OS_os_log, AppleTypeCRetimerIICFifoDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface AppleTypeCRetimerIICFifo : AppleTypeCRetimerIICBase {
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    AppleTypeCRetimerFifoQueue *_txQueue;
    NSObject<OS_dispatch_source> *_pollingTimerSource;
    unsigned long long _txFifoSpace;
    AppleTypeCRetimerFifoDumper *_dumper;
    BOOL _started;
    NSString *_name;
}

@property (weak) id<AppleTypeCRetimerIICFifoDelegate> delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;

+ (id)getDeviceNames;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)writeData:(id)a0;
- (void)receivedData:(id)a0;
- (BOOL)checkReady;
- (void)drainTransmitQueue;
- (unsigned short)getAvailableReceiveDataLength;
- (id)getDelegateQueue;
- (id)initWithDeviceHandle:(id)a0 queueLabelSuffix:(id)a1;
- (void)pollForReceiveData;
- (int)readRegister:(unsigned char)a0 buffer:(void *)a1 length:(unsigned int)a2;
- (void)startPacketDumperWithBloodhoundDumper:(id)a0;
- (void)startPollingForReceiveData;
- (void)stopPollingforReceiveData;
- (void)transferError:(id)a0;
- (void)updateTransmitFifoSpace;
- (int)writeRegister:(unsigned char)a0 buffer:(const void *)a1 length:(unsigned int)a2;

@end
