@class NSError, NSDictionary, NSArray;

@interface DTTimerClient : NSObject {
    void /* unknown type, empty encoding */ _clientID;
    void /* unknown type, empty encoding */ _environment;
    void /* unknown type, empty encoding */ _error;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ _lock;
    void /* unknown type, empty encoding */ _timerMap;
    void /* unknown type, empty encoding */ _requestContext;
    void /* unknown type, empty encoding */ _xpcClientCached;
}

@property (class, nonatomic, readonly) unsigned long long statusFlags;

@property (nonatomic) void /* unknown type, empty encoding */ _activateCalled;
@property (nonatomic, copy) NSError *_error;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, copy) id /* block */ eventHandler;
@property (nonatomic) void /* unknown type, empty encoding */ _initTicks;
@property (nonatomic) void /* unknown type, empty encoding */ _invalidateCalled;
@property (nonatomic) void /* unknown type, empty encoding */ _monitorMode;
@property (nonatomic) void /* unknown type, empty encoding */ _monitorSessionStarted;
@property (nonatomic, copy) NSDictionary *_timerMap;
@property (nonatomic, readonly) NSArray *timers;
@property (nonatomic, readonly) NSArray *mtAlarms;
@property (nonatomic, readonly) NSArray *mtTimers;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (id)initWithDispatchQueue:(id)a0;
- (void)dismissTimer:(id)a0 completionHandler:(id /* block */)a1;
- (void)addTimer:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchTimersWithCompletionHandler:(id /* block */)a0;
- (id)initWithDispatchQueue:(id)a0 homeKitAccessoryID:(id)a1;
- (void)removeTimer:(id)a0 completionHandler:(id /* block */)a1;
- (void)snoozeTimer:(id)a0 completionHandler:(id /* block */)a1;
- (void)updateTimer:(id)a0 completionHandler:(id /* block */)a1;

@end
