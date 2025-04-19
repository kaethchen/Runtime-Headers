@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CADisplayStateControl : NSObject {
    unsigned int _server_port;
    struct ClientIPC { unsigned int _port; NSObject<OS_dispatch_queue> *_queue; NSObject<OS_dispatch_source> *_source; } _client_ipc;
    unsigned int _display_id;
    struct DisplayStateInfo { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; } *_display_state;
    void *_shmem;
    struct SpinLock { struct { int x; } _l; } _callback_lock;
    long long _target_state;
    id /* block */ _completion;
    unsigned char _seed;
}

@property (readonly, nonatomic) long long targetDisplayState;
@property (readonly, nonatomic) long long targetPowerState;
@property (readonly, nonatomic) long long displayState;
@property (readonly, nonatomic) long long powerState;

- (void)dealloc;
- (id).cxx_construct;
- (char *)_copyAllPowerAssertionInfo;
- (id)_initWithDisplayId:(unsigned int)a0;
- (id)createPowerAssertionWithReason:(long long)a0 identifier:(id)a1;
- (void)didChangeToState:(long long)a0 seed:(unsigned char)a1 result:(long long)a2;
- (void)initializeClientPort;
- (void)transitionToDisplayState:(long long)a0 withCompletion:(id /* block */)a1;

@end
