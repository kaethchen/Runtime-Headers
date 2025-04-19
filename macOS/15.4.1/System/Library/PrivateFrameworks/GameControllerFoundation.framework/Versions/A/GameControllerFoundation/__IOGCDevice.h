@class GCIONotificationPort, NSObject;
@protocol OS_dispatch_queue;

@interface __IOGCDevice : GCIOService {
    struct __CFAllocator { } *_allocator;
    struct IOCFPlugInInterfaceStruct **_pluginInterface;
    struct IOGCDeviceInterface **_deviceInterface;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _cancelHandler;
    GCIONotificationPort *_notificationChannel;
    void /* function */ *_removalCallback;
    void *_removalCallbackContext;
    unsigned int _removalNotification;
    _Atomic unsigned char _state;
}

- (void)dealloc;
- (id)initWithPort:(unsigned int)a0 error:(id *)a1;

@end
