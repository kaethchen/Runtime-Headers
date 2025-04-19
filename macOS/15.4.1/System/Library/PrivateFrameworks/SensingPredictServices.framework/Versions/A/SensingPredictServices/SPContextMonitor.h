@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SPContextMonitor : NSObject <NSSecureCoding> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ contextChangeHandler;
@property (copy, nonatomic) id /* block */ contextSignalUpdatedHandler;
@property (nonatomic) unsigned int contextChangeFlags;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_reportError:(id)a0;
- (BOOL)isSystemContext;
- (void)_activate:(BOOL)a0;
- (void)contextMonitorContextChanged:(id)a0;
- (void)contextSignalUpdated:(id)a0 fusedState:(unsigned int)a1;

@end
