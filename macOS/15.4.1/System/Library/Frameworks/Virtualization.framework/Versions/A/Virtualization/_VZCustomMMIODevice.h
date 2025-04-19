@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, _VZCustomMMIODeviceDelegate, _VZMMIOExtensionDeviceExtensionDelegate;

@interface _VZCustomMMIODevice : NSObject <_VZCustomMMIODeviceInterface, NSXPCListenerDelegate> {
    NSXPCConnection *_connection;
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _queue;
    struct SharedRamManager { struct shared_ptr<Vz::SharedMemoryMap> { struct SharedMemoryMap *__ptr_; struct __shared_weak_count *__cntrl_; } _shared_memory_map; } _ram_manager;
    id<_VZCustomMMIODeviceDelegate> _delegate;
    id<_VZMMIOExtensionDeviceExtensionDelegate> _extension_delegate;
    _Atomic BOOL _write_synchronously;
}

@property (weak) id<_VZCustomMMIODeviceDelegate> delegate;
@property (readonly) NSObject<OS_dispatch_queue> *deviceQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldAcceptConnection:(id)a0 delegate:(id)a1;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id).cxx_construct;
- (id)guestRAMRegions;
- (id)guestMemoryAtPhysicalAddress:(unsigned long long)a0 length:(unsigned long long)a1;
- (void)initDevice:(unsigned long long)a0 mmioLength:(unsigned long long)a1 writeSynchronously:(BOOL)a2 RAMRegions:(id)a3;
- (void)mmioRead:(unsigned long long)a0 accessLength:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)mmioWrite:(unsigned long long)a0 accessLength:(unsigned long long)a1 data:(unsigned long long)a2;
- (void)mmioWrite:(unsigned long long)a0 accessLength:(unsigned long long)a1 data:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)pauseDevice:(id /* block */)a0;
- (void)pulseIRQ:(unsigned long long)a0;
- (void)resetDevice:(id /* block */)a0;
- (void)resumeDevice:(id /* block */)a0;
- (void)setIRQ:(unsigned long long)a0 value:(BOOL)a1;
- (void)startDevice:(id /* block */)a0;
- (void)stopDevice:(id /* block */)a0;
- (void)updateRAMRegions:(id)a0 reply:(id /* block */)a1;

@end
