@class NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MTLIOAccelServiceGlobalContext : NSObject {
    NSMutableArray *_pendingCreateAccelServiceRequests;
    NSObject<OS_dispatch_queue> *_deviceNotifyQueue;
    struct IONotificationPort { } *_deviceNotifyPort;
    unsigned int _deviceNotifyIter;
    NSMutableArray *_acceleratorServiceArray;
    NSMutableDictionary *_acceleratorServicesByRegistryID;
}

@property (readonly) NSObject<OS_dispatch_queue> *deviceNotifyQueue;
@property (readonly) NSMutableArray *acceleratorServiceArray;
@property (readonly) NSMutableDictionary *acceleratorServicesByRegistryID;

- (void)dealloc;
- (id)init;
- (void)invalidateNotificationPort;
- (void)processPendingCreateIOAccelServiceRequests;
- (void)registerService:(unsigned int)a0 deviceClass:(Class)a1;

@end
