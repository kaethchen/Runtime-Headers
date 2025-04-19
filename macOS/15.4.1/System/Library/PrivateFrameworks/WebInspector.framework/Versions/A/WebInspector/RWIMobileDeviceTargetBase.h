@class RWIMobileDeviceConnection, NSArray, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface RWIMobileDeviceTargetBase : RWITarget {
    NSMutableArray *_mobileDeviceConnections;
    NSObject<OS_dispatch_queue> *_deviceAccessQueue;
    NSString *_anonymousIdentifier;
}

@property (readonly, copy, nonatomic) NSArray *mobileDeviceConnections;
@property (readonly, nonatomic) RWIMobileDeviceConnection *primaryMobileDeviceConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *deviceAccessQueue;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic) BOOL hasWiredConnection;
@property (readonly, nonatomic) BOOL hasWirelessConnection;

+ (void)initialize;
+ (id)_newOrExistingDeviceAccessQueueForAnonymousIdentifier:(id)a0;
+ (void)_unregisterClientOfDeviceAccessQueueForAnonymousIdentifier:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)loggingIdentifier;
- (void)addMobileDeviceConnection:(id)a0;
- (id)copyNumberFromDevice:(struct _AMDevice { } *)a0 domain:(struct __CFString { } *)a1 key:(struct __CFString { } *)a2;
- (id)copyNumberFromDevice:(struct _AMDevice { } *)a0 domain:(struct __CFString { } *)a1 key:(struct __CFString { } *)a2 shouldCopyFromKeyValueStore:(BOOL)a3;
- (id)copyNumberFromDevice:(struct _AMDevice { } *)a0 key:(struct __CFString { } *)a1;
- (id)copyStringFromDevice:(struct _AMDevice { } *)a0 domain:(struct __CFString { } *)a1 key:(struct __CFString { } *)a2;
- (id)copyStringFromDevice:(struct _AMDevice { } *)a0 domain:(struct __CFString { } *)a1 key:(struct __CFString { } *)a2 shouldCopyFromKeyValueStore:(BOOL)a3;
- (id)copyStringFromDevice:(struct _AMDevice { } *)a0 key:(struct __CFString { } *)a1;
- (id)copyValueFromDevice:(struct _AMDevice { } *)a0 domain:(struct __CFString { } *)a1 key:(struct __CFString { } *)a2 shouldCopyFromKeyValueStore:(BOOL)a3;
- (id)initWithMobileDeviceConnection:(id)a0 manager:(id)a1;
- (void)removeMobileDeviceConnection:(id)a0;

@end
