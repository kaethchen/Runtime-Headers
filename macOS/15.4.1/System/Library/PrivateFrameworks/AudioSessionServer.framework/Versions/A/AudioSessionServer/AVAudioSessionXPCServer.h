@class NSXPCListener, NSString, NSXPCInterface, NSMutableArray;
@protocol AVAudioSessionServerDelegate;

@interface AVAudioSessionXPCServer : NSObject <NSXPCListenerDelegate> {
    NSMutableArray *_connections;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_callbackInterface;
    struct unique_ptr<std::promise<void>, std::default_delete<std::promise<void>>> { struct __compressed_pair<std::promise<void> *, std::default_delete<std::promise<void>>> { void *__value_; } __ptr_; } _deallocPromise;
    BOOL _needsDefaultWorldInit;
    struct shared_ptr<as::WorkloopPool> { struct WorkloopPool *__ptr_; struct __shared_weak_count *__cntrl_; } _workloopPool;
    id<AVAudioSessionServerDelegate> _serverDelegate;
}

@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id).cxx_construct;
- (void)start;
- (void)init2;
- (void)removeConnection:(id)a0;

@end
