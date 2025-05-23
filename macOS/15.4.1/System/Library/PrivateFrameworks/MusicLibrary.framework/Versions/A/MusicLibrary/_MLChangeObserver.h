@class MSVTaskAssertion, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_source;

@interface _MLChangeObserver : NSObject <MLMediaLibraryAccountChangeObserver>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (retain, nonatomic) MSVTaskAssertion *taskAssertion;
@property (nonatomic, getter=hasTimedOut) BOOL timedOut;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)observerWithConnection:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)emergencyDisconnectWithCompletion:(id /* block */)a0;
- (void)performDatabasePathChange:(id)a0 completion:(id /* block */)a1;
- (void)setupTaskAssertion;
- (void)setupTimeoutTimer;
- (void)tearDownTaskAssertion;
- (void)tearDownTimeoutTimer;
- (void)terminateForFailureToPerformDatabasePathChange;

@end
