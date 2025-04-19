@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFCoordinatedAlertRequest : NSObject <NSSecureCoding, SFXPCInterface> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _started;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL bestIsMe;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) double timeout;
@property (nonatomic) long long type;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)start;
- (void)_invalidate;
- (void)_invalidated;
- (void)_ensureXPCStarted;
- (void)_interrupted;
- (void)_timeoutFired;
- (void)_start;
- (void)coordinatedAlertUpdatedWithError:(id)a0 bestIsMe:(BOOL)a1 info:(id)a2;

@end
