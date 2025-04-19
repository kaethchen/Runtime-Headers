@class GCIONotificationPort, NSObject;
@protocol OS_dispatch_queue;

@interface __IOGCDeviceManager : NSObject {
    struct __CFAllocator { } *_allocator;
    _Atomic unsigned char _state;
    struct __CFDictionary { } *_matching;
    struct __CFSet { } *_devices;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _cancelHandler;
    GCIONotificationPort *_notificationChannel;
    unsigned int _deviceMatchedNotification;
    struct __CFDictionary { } *_deviceRemovedObservers;
    void /* function */ *_deviceMatchedCallback;
    void *_deviceMatchedContext;
}

- (void)dealloc;
- (id)init;

@end
