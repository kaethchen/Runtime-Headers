@class GCPromise, GCHIDServiceInfo, _GCNintendoJoyConDeviceManager, GCFuture, NSObject;
@protocol OS_dispatch_queue, _GCDeviceDriverConnection;

@interface _GCNintendoJoyConDevicePending : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    GCPromise *_devicePromise;
    id<_GCDeviceDriverConnection> _filterConnection;
    id<_GCDeviceDriverConnection> _driverConnection;
}

@property (readonly) GCFuture *device;
@property (readonly) GCHIDServiceInfo *serviceInfo;
@property (readonly) _GCNintendoJoyConDeviceManager *manager;
@property (retain) id<_GCDeviceDriverConnection> driverConnection;
@property (retain) id<_GCDeviceDriverConnection> filterConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithHIDService:(id)a0 manager:(id)a1;
- (void)setDriverConnection:(id)a0 invalidatingPrevious:(BOOL)a1;
- (void)setFilterConnection:(id)a0 invalidatingPrevious:(BOOL)a1;

@end
