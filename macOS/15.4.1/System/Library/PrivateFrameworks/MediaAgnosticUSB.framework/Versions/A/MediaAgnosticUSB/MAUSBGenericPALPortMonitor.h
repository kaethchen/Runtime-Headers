@class MAUSBRouteString, NSObject;
@protocol MAUSBDevicePortMonitorDelegate, OS_dispatch_queue;

@interface MAUSBGenericPALPortMonitor : MAUSBObject {
    id<MAUSBDevicePortMonitorDelegate> _delegate;
    struct IONotificationPort { } *_notificationPortRef;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _addedIterator;
    unsigned int _terminatedIterator;
}

@property (readonly) MAUSBRouteString *routeString;
@property (readonly) unsigned char portStatus;
@property (readonly) unsigned int locationID;

- (void)dealloc;
- (void).cxx_destruct;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (void)deviceAdded;
- (void)deviceRemoved;
- (struct __CFDictionary { } *)getDeviceMatchingDictionaryForLocationID:(unsigned int)a0;
- (BOOL)initMonitorForLocationID:(unsigned int)a0;
- (id)initWithDelegate:(id)a0 routeString:(id)a1 locationID:(unsigned int)a2 queue:(id)a3;

@end
