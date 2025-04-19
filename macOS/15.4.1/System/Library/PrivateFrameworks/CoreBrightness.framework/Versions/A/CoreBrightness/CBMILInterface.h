@class NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface CBMILInterface : NSObject {
    struct __IOHIDEventSystemClient { } *_milHIDSystemClient;
    struct __IOHIDServiceClient { } *_milPlugin;
    NSObject<OS_dispatch_queue> *_queue;
    struct IONotificationPort { } *_ioNotificationPort;
    unsigned int _ioNotificationObject;
    unsigned int _ioServiceArrivalIterator;
    NSObject<OS_os_log> *_logHandle;
    unsigned int _connect;
    BOOL _running;
}

- (void)dealloc;
- (void)start;
- (void)stop;
- (id)initWithQueue:(id)a0;
- (int)readData:(unsigned short *)a0 withSize:(unsigned long long *)a1 fromRegister:(unsigned long long)a2;
- (BOOL)getDutyCycleThreshold:(unsigned short *)a0;
- (void)hidServiceArrived:(struct __IOHIDServiceClient { } *)a0;
- (void)lookupMILServiceTrusted;
- (void)lookupMILServiceUntrusted;
- (void)registerForAllMILNotifications;
- (BOOL)setDutyCycle:(unsigned short)a0;
- (void)unregisterForAllMILNotifications;
- (int)writeDataTrusted:(unsigned short *)a0;
- (int)writeDataUntrusted:(const char *)a0 withSize:(unsigned long long *)a1 toRegister:(unsigned long long)a2 withAddressSize:(unsigned long long)a3;

@end
